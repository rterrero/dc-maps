
/**
 * @file
 * @author Bob Hutchinson http://drupal.org/user/52366
 * @copyright GNU GPL
 *
 * Javascript functions for getlocations polygons support
 * jquery stuff
*/
(function ($) {
  Drupal.behaviors.getlocations_polygons = {
    attach: function() {

      var default_polygon_settings = {
        strokeColor: '#FF0000',
        strokeOpacity: 0.8,
        strokeWeight: 3,
        fillColor: '#FF0000',
        fillOpacity: 0.35
      };

      $.each(Drupal.settings.getlocations_polygons, function (key, settings) {

        var strokeColor = (settings.strokeColor ? settings.strokeColor : default_polygon_settings.strokeColor);
        if (typeof strokeColor.match("/^#/") === null) {
          strokeColor = '#' + strokeColor;
        }
        var strokeOpacity = (settings.strokeOpacity ? settings.strokeOpacity : default_polygon_settings.strokeOpacity);
        var strokeWeight = (settings.strokeWeight ? settings.strokeWeight : default_polygon_settings.strokeWeight);
        var fillColor = (settings.fillColor ? settings.fillColor : default_polygon_settings.fillColor);
        if (typeof fillColor.match("/^#/") === null) {
          fillColor = '#' + fillColor;
        }
        var fillOpacity = (settings.fillOpacity ? settings.fillOpacity : default_polygon_settings.fillOpacity);
        var clickable = (settings.clickable ? settings.clickable : default_polygon_settings.clickable);
        var message = (settings.message ? settings.message : default_polygon_settings.message);

        var polygons = settings.polygons;
        var p_strokeColor = strokeColor;
        var p_strokeOpacity = strokeOpacity;
        var p_strokeWeight = strokeWeight;
        var p_fillColor = fillColor;
        var p_fillOpacity = fillOpacity;
        var p_clickable = clickable;
        var p_message = message;
        var pg = [];
        for (var i = 0; i < polygons.length; i++) {
          pg = polygons[i];
          if (pg.coords) {
            if (pg.strokeColor) {
              if (typeof pg.strokeColor.match("/^#/") === null) {
                pg.strokeColor = '#' + pg.strokeColor;
              }
              p_strokeColor = pg.strokeColor;
            }
            if (pg.strokeOpacity) {
              p_strokeOpacity = pg.strokeOpacity;
            }
            if (pg.strokeWeight) {
              p_strokeWeight = pg.strokeWeight;
            }
            if (pg.fillColor) {
              if (typeof pg.fillColor.match("/^#/") === null) {
                pg.fillColor = '#' + pg.fillColor;
              }
              p_fillColor = pg.fillColor;
            }
            if (pg.fillOpacity) {
              p_fillOpacity = pg.fillOpacity;
            }
            if (pg.clickable) {
              p_clickable = pg.clickable;
            }
            if (pg.message) {
              p_message = pg.message;
            }
            p_clickable = (p_clickable ? true : false);
            var mcoords = [];
            var poly = [];
            scoords = pg.coords.split("|");
            for (var s = 0; s < scoords.length; s++) {
              var ll = scoords[s];
              var lla = ll.split(",");
              mcoords[s] = new google.maps.LatLng(parseFloat(lla[0]), parseFloat(lla[1]));
            }
            if (mcoords.length > 2) {
              var polyOpts = {};
              polyOpts.paths = mcoords;
              polyOpts.strokeColor = p_strokeColor;
              polyOpts.strokeOpacity = p_strokeOpacity;
              polyOpts.strokeWeight = p_strokeWeight;
              polyOpts.fillColor = p_fillColor;
              polyOpts.fillOpacity = p_fillOpacity;
              polyOpts.clickable = p_clickable;
              poly[i] = new google.maps.Polygon(polyOpts);
              poly[i].setMap(getlocations_map[key]);

              if (p_clickable && p_message) {
                google.maps.event.addListener(poly[i], 'click', function(event) {
                  // close any previous instances
                  if (pushit) {
                    for (var i in getlocations_settings[key].infoBubbles) {
                      getlocations_settings[key].infoBubbles[i].close();
                    }
                  }
                  if (getlocations_settings[key].markeraction == 2) {
                    // infobubble
                    if (typeof(infoBubbleOptions) == 'object') {
                      var infoBubbleOpts = infoBubbleOptions;
                    }
                    else {
                      var infoBubbleOpts = {};
                    }
                    infoBubbleOpts.content = p_message;
                    infoBubbleOpts.position = event.latLng;
                    var iw = new InfoBubble(infoBubbleOpts);
                  }
                  else {
                    // infowindow
                    if (typeof(infoWindowOptions) == 'object') {
                      var infoWindowOpts = infoWindowOptions;
                    }
                    else {
                      var infoWindowOpts = {};
                    }
                    infoWindowOpts.content = p_message;
                    infoWindowOpts.position = event.latLng;
                    var iw = new google.maps.InfoWindow(infoWindowOpts);
                  }
                  iw.open(getlocations_map[key]);
                  if (pushit) {
                    getlocations_settings[key].infoBubbles.push(iw);
                  }
                });
              }
            }
          }
        }
      });
    }
  };
}(jQuery));
