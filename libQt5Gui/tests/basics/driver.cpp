#include <QtGui/QColor>

// @@ TODO A more realistic program, for example something like
//    https://doc.qt.io/qt-5/qtgui-rasterwindow-example.html (but without
//    showing the window). That example requires the loading of plugins
//    (including platform ones like plugins/platforms/xcb/ on Linux).
//    QtGuiApplication by itself also seems to load plugins so the raster
//    window example's main() without the instantiation of the window should
//    do it.
//
//    One problem is that although such a QtGui program cannot run without the
//    plugins, the plugin libraries themselves are linked against QtGui. Guess
//    this all depends on how we end up structuring the packages.
//

int
main (int argc, char** argv)
{
  QColor c (255, 0, 0);
  return c.red () == 255 ? 0 : 1;
}
