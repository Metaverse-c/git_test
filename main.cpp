#pragma vtordisp(off)
#include "mainwindow.h"
#include "Mainwindow.h"
#include "MainFramework.h"
#include "pluginframework/ctkPluginDatabaseException.h"
#include "pluginframework/ctkPluginFrameworkLauncher.h"
#include "pluginframework/ctkPluginException.h"
#include "pluginframework/ctkPluginFramework.h"
#include "pluginframework/ctkPluginFrameworkFactory.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
	WR_Application::MainFramework mfm;
	mfm.initCtkFramework();
	mfm.loadPlugins();
	mfm.showMainwindow();
    return a.exec();
}
