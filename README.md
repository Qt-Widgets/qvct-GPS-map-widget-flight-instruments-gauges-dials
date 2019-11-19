Qt Virtual Chart Table (QVCT)
=============================

![screenshot](https://github.com/Qt-Widgets/qvct-map-widget-flight-instruments-gauges-dials/blob/master/screenshot.jpg)

Synopsis and Features
---------------------

The Qt Virtual Chart Table (QVCT) is a Qt application which provides a
navigation software that simulates the chart table (and instruments corner)
usually found in ships.

It is thus suitable for sailing, flying or any other outdoor activity performed
using a conventional navigation/planning approach:
 - using heading, speed and time as primary navigation means
 - using easily identifiable landmarks as references
 - navigating along discrete waypoints routes
 - relying on GPS only as a secondary navigation mean
 - using offline maps (rather than Internet-dependent online resources)

It features:
 - loading offline geo-referenced maps, stored in any format/projection
   supported by the Geospatial Data Abstraction Library (GDAL)
 - associating a digital elevation model (DEM) to any map, stored in any
   format/projection supported by the Geospatial Data Abstraction Library (GDAL)
 - creating, loading, saving and managing landmarks, routes and tracks, stored
   in GPX or QVCT (XML) format
 - creating, loading, saving and managing (multiple) vessels, stored in QVCT
   (XML) format and linkable, individually or globally (dynamic flotilla), to
   (multiple) navigation devices (see below)
 - defining and using multiple navigation devices, including:
    * GPS daemon (GPSD) - GPS mode
    * GPS daemon (GPSD) - AIS mode
    * SBS-1 (ADS-B) base station
 - loading and saving entire navigation/planning projects, stored in QVCT (XML)
   format
 - displaying vessel instruments in an activity-specific cockpit, including:
    * general aviation "basic six"
 - printing maps and overlays (landmarks, routes, etc.) in standard (screen)
   or high (1200 DPI) resolution
 - touchscreen-friendly user interface (you really don't need a mouse or key-
   board while navigating)

(Please check the attached ROADMAP for planned or under-development features)

It runs and is being developed on Linux (Ubuntu), though it can potentially also
be built on Mac OS X and Windows.

