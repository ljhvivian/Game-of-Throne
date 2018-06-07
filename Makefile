#############################################################################
# Makefile for building: Bomber
# Generated by qmake (3.0) (Qt 5.4.0)
# Project:  Bomber.pro
# Template: app
# Command: D:\QT5401\5.4\mingw491_32\bin\qmake.exe -spec win32-g++ CONFIG+=debug -o Makefile Bomber.pro
#############################################################################

MAKEFILE      = Makefile

first: debug
install: debug-install
uninstall: debug-uninstall
QMAKE         = D:\QT5401\5.4\mingw491_32\bin\qmake.exe
DEL_FILE      = del
CHK_DIR_EXISTS= if not exist
MKDIR         = mkdir
COPY          = copy /y
COPY_FILE     = $(COPY)
COPY_DIR      = xcopy /s /q /y /i
INSTALL_FILE  = $(COPY_FILE)
INSTALL_PROGRAM = $(COPY_FILE)
INSTALL_DIR   = $(COPY_DIR)
DEL_FILE      = del
SYMLINK       = copy /y
DEL_DIR       = rmdir
MOVE          = move
SUBTARGETS    =  \
		debug \
		release


debug: FORCE
	$(MAKE) -f $(MAKEFILE).Debug
debug-make_first: FORCE
	$(MAKE) -f $(MAKEFILE).Debug 
debug-all: FORCE
	$(MAKE) -f $(MAKEFILE).Debug all
debug-clean: FORCE
	$(MAKE) -f $(MAKEFILE).Debug clean
debug-distclean: FORCE
	$(MAKE) -f $(MAKEFILE).Debug distclean
debug-install: FORCE
	$(MAKE) -f $(MAKEFILE).Debug install
debug-uninstall: FORCE
	$(MAKE) -f $(MAKEFILE).Debug uninstall
release: FORCE
	$(MAKE) -f $(MAKEFILE).Release
release-make_first: FORCE
	$(MAKE) -f $(MAKEFILE).Release 
release-all: FORCE
	$(MAKE) -f $(MAKEFILE).Release all
release-clean: FORCE
	$(MAKE) -f $(MAKEFILE).Release clean
release-distclean: FORCE
	$(MAKE) -f $(MAKEFILE).Release distclean
release-install: FORCE
	$(MAKE) -f $(MAKEFILE).Release install
release-uninstall: FORCE
	$(MAKE) -f $(MAKEFILE).Release uninstall

Makefile: Bomber.pro ../QT5401/5.4/mingw491_32/mkspecs/win32-g++/qmake.conf ../QT5401/5.4/mingw491_32/mkspecs/features/spec_pre.prf \
		../QT5401/5.4/mingw491_32/mkspecs/qdevice.pri \
		../QT5401/5.4/mingw491_32/mkspecs/features/device_config.prf \
		../QT5401/5.4/mingw491_32/mkspecs/common/shell-win32.conf \
		../QT5401/5.4/mingw491_32/mkspecs/qconfig.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_axbase.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_axbase_private.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_axcontainer.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_axcontainer_private.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_axserver.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_axserver_private.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_bluetooth.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_bluetooth_private.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_bootstrap_private.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_clucene_private.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_concurrent.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_concurrent_private.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_core.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_core_private.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_declarative.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_declarative_private.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_designer.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_designer_private.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_designercomponents_private.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_enginio.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_enginio_private.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_gui.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_gui_private.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_help.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_help_private.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_location.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_location_private.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_multimedia.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_multimedia_private.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_multimediawidgets.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_multimediawidgets_private.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_network.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_network_private.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_nfc.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_nfc_private.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_opengl.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_opengl_private.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_openglextensions.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_openglextensions_private.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_platformsupport_private.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_positioning.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_positioning_private.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_printsupport.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_printsupport_private.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_qml.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_qml_private.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_qmldevtools_private.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_qmltest.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_qmltest_private.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_quick.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_quick_private.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_quickparticles_private.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_quickwidgets.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_quickwidgets_private.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_script.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_script_private.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_scripttools.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_scripttools_private.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_sensors.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_sensors_private.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_serialport.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_serialport_private.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_sql.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_sql_private.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_svg.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_svg_private.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_testlib.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_testlib_private.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_uitools.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_uitools_private.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_webchannel.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_webchannel_private.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_webkit.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_webkit_private.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_webkitwidgets.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_webkitwidgets_private.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_websockets.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_websockets_private.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_webview.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_webview_private.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_widgets.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_widgets_private.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_winextras.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_winextras_private.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_xml.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_xml_private.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_xmlpatterns.pri \
		../QT5401/5.4/mingw491_32/mkspecs/modules/qt_lib_xmlpatterns_private.pri \
		../QT5401/5.4/mingw491_32/mkspecs/features/qt_functions.prf \
		../QT5401/5.4/mingw491_32/mkspecs/features/qt_config.prf \
		../QT5401/5.4/mingw491_32/mkspecs/features/win32/qt_config.prf \
		../QT5401/5.4/mingw491_32/mkspecs/win32-g++/qmake.conf \
		../QT5401/5.4/mingw491_32/mkspecs/features/spec_post.prf \
		../QT5401/5.4/mingw491_32/mkspecs/features/exclusive_builds.prf \
		../QT5401/5.4/mingw491_32/mkspecs/features/default_pre.prf \
		../QT5401/5.4/mingw491_32/mkspecs/features/win32/default_pre.prf \
		../QT5401/5.4/mingw491_32/mkspecs/features/resolve_config.prf \
		../QT5401/5.4/mingw491_32/mkspecs/features/exclusive_builds_post.prf \
		../QT5401/5.4/mingw491_32/mkspecs/features/default_post.prf \
		../QT5401/5.4/mingw491_32/mkspecs/features/win32/rtti.prf \
		../QT5401/5.4/mingw491_32/mkspecs/features/precompile_header.prf \
		../QT5401/5.4/mingw491_32/mkspecs/features/warn_on.prf \
		../QT5401/5.4/mingw491_32/mkspecs/features/qt.prf \
		../QT5401/5.4/mingw491_32/mkspecs/features/resources.prf \
		../QT5401/5.4/mingw491_32/mkspecs/features/moc.prf \
		../QT5401/5.4/mingw491_32/mkspecs/features/win32/opengl.prf \
		../QT5401/5.4/mingw491_32/mkspecs/features/uic.prf \
		../QT5401/5.4/mingw491_32/mkspecs/features/win32/windows.prf \
		../QT5401/5.4/mingw491_32/mkspecs/features/testcase_targets.prf \
		../QT5401/5.4/mingw491_32/mkspecs/features/exceptions.prf \
		../QT5401/5.4/mingw491_32/mkspecs/features/yacc.prf \
		../QT5401/5.4/mingw491_32/mkspecs/features/lex.prf \
		Bomber.pro \
		D:/QT5401/5.4/mingw491_32/lib/qtmaind.prl \
		D:/QT5401/5.4/mingw491_32/lib/Qt5Cored.prl \
		D:/QT5401/5.4/mingw491_32/lib/Qt5Widgets.prl \
		D:/QT5401/5.4/mingw491_32/lib/Qt5Gui.prl \
		D:/QT5401/5.4/mingw491_32/lib/Qt5Core.prl
	$(QMAKE) -spec win32-g++ CONFIG+=debug -o Makefile Bomber.pro
..\QT5401\5.4\mingw491_32\mkspecs\features\spec_pre.prf:
..\QT5401\5.4\mingw491_32\mkspecs\qdevice.pri:
..\QT5401\5.4\mingw491_32\mkspecs\features\device_config.prf:
..\QT5401\5.4\mingw491_32\mkspecs\common\shell-win32.conf:
..\QT5401\5.4\mingw491_32\mkspecs\qconfig.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_axbase.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_axbase_private.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_axcontainer.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_axcontainer_private.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_axserver.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_axserver_private.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_bluetooth.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_bluetooth_private.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_bootstrap_private.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_clucene_private.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_concurrent.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_concurrent_private.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_core.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_core_private.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_declarative.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_declarative_private.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_designer.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_designer_private.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_designercomponents_private.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_enginio.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_enginio_private.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_gui.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_gui_private.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_help.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_help_private.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_location.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_location_private.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_multimedia.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_multimedia_private.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_multimediawidgets.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_multimediawidgets_private.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_network.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_network_private.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_nfc.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_nfc_private.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_opengl.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_opengl_private.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_openglextensions.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_openglextensions_private.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_platformsupport_private.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_positioning.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_positioning_private.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_printsupport.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_printsupport_private.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_qml.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_qml_private.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_qmldevtools_private.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_qmltest.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_qmltest_private.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_qtmultimediaquicktools_private.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_quick.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_quick_private.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_quickparticles_private.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_quickwidgets.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_quickwidgets_private.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_script.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_script_private.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_scripttools.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_scripttools_private.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_sensors.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_sensors_private.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_serialport.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_serialport_private.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_sql.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_sql_private.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_svg.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_svg_private.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_testlib.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_testlib_private.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_uitools.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_uitools_private.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_webchannel.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_webchannel_private.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_webkit.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_webkit_private.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_webkitwidgets.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_webkitwidgets_private.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_websockets.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_websockets_private.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_webview.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_webview_private.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_widgets.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_widgets_private.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_winextras.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_winextras_private.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_xml.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_xml_private.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_xmlpatterns.pri:
..\QT5401\5.4\mingw491_32\mkspecs\modules\qt_lib_xmlpatterns_private.pri:
..\QT5401\5.4\mingw491_32\mkspecs\features\qt_functions.prf:
..\QT5401\5.4\mingw491_32\mkspecs\features\qt_config.prf:
..\QT5401\5.4\mingw491_32\mkspecs\features\win32\qt_config.prf:
..\QT5401\5.4\mingw491_32\mkspecs\win32-g++\qmake.conf:
..\QT5401\5.4\mingw491_32\mkspecs\features\spec_post.prf:
..\QT5401\5.4\mingw491_32\mkspecs\features\exclusive_builds.prf:
..\QT5401\5.4\mingw491_32\mkspecs\features\default_pre.prf:
..\QT5401\5.4\mingw491_32\mkspecs\features\win32\default_pre.prf:
..\QT5401\5.4\mingw491_32\mkspecs\features\resolve_config.prf:
..\QT5401\5.4\mingw491_32\mkspecs\features\exclusive_builds_post.prf:
..\QT5401\5.4\mingw491_32\mkspecs\features\default_post.prf:
..\QT5401\5.4\mingw491_32\mkspecs\features\win32\rtti.prf:
..\QT5401\5.4\mingw491_32\mkspecs\features\precompile_header.prf:
..\QT5401\5.4\mingw491_32\mkspecs\features\warn_on.prf:
..\QT5401\5.4\mingw491_32\mkspecs\features\qt.prf:
..\QT5401\5.4\mingw491_32\mkspecs\features\resources.prf:
..\QT5401\5.4\mingw491_32\mkspecs\features\moc.prf:
..\QT5401\5.4\mingw491_32\mkspecs\features\win32\opengl.prf:
..\QT5401\5.4\mingw491_32\mkspecs\features\uic.prf:
..\QT5401\5.4\mingw491_32\mkspecs\features\win32\windows.prf:
..\QT5401\5.4\mingw491_32\mkspecs\features\testcase_targets.prf:
..\QT5401\5.4\mingw491_32\mkspecs\features\exceptions.prf:
..\QT5401\5.4\mingw491_32\mkspecs\features\yacc.prf:
..\QT5401\5.4\mingw491_32\mkspecs\features\lex.prf:
Bomber.pro:
D:/QT5401/5.4/mingw491_32/lib/qtmaind.prl:
D:/QT5401/5.4/mingw491_32/lib/Qt5Cored.prl:
D:/QT5401/5.4/mingw491_32/lib/Qt5Widgets.prl:
D:/QT5401/5.4/mingw491_32/lib/Qt5Gui.prl:
D:/QT5401/5.4/mingw491_32/lib/Qt5Core.prl:
qmake: FORCE
	@$(QMAKE) -spec win32-g++ CONFIG+=debug -o Makefile Bomber.pro

qmake_all: FORCE

make_first: debug-make_first release-make_first FORCE
all: debug-all release-all FORCE
clean: debug-clean release-clean FORCE
distclean: debug-distclean release-distclean FORCE
	-$(DEL_FILE) Makefile

debug-mocclean:
	$(MAKE) -f $(MAKEFILE).Debug mocclean
release-mocclean:
	$(MAKE) -f $(MAKEFILE).Release mocclean
mocclean: debug-mocclean release-mocclean

debug-mocables:
	$(MAKE) -f $(MAKEFILE).Debug mocables
release-mocables:
	$(MAKE) -f $(MAKEFILE).Release mocables
mocables: debug-mocables release-mocables

check: first
FORCE:

$(MAKEFILE).Debug: Makefile
$(MAKEFILE).Release: Makefile
