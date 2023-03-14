#pragma once

#define QT_FEATURE_abstractbutton 1
#define QT_FEATURE_abstractslider 1

#define QT_FEATURE_groupbox 1
#if !QT_CONFIG(groupbox)
#  define QT_NO_GROUPBOX
#endif

#define QT_FEATURE_buttongroup 1
#if !QT_CONFIG(buttongroup)
#  define QT_NO_BUTTONGROUP
#endif

#define QT_FEATURE_label 1
#define QT_FEATURE_pushbutton 1

#define QT_FEATURE_menu 1
#if !QT_CONFIG(menu)
#  define QT_NO_MENU
#endif

#define QT_FEATURE_lineedit 1
#if !QT_CONFIG(lineedit)
#  define QT_NO_LINEEDIT
#endif

#define QT_FEATURE_spinbox 1
#if !QT_CONFIG(spinbox)
#  define QT_NO_SPINBOX
#endif

#define QT_FEATURE_slider 1
#if !QT_CONFIG(slider)
#  define QT_NO_SLIDER
#endif

#define QT_FEATURE_scrollbar 1
#if !QT_CONFIG(scrollbar)
#  define QT_NO_SCROLLBAR
#endif

#define QT_FEATURE_scrollarea 1
#if !QT_CONFIG(scrollarea)
#  define QT_NO_SCROLLAREA
#endif

#define QT_FEATURE_itemviews 1
#if !QT_CONFIG(itemviews)
#  define QT_NO_ITEMVIEWS
#endif

#define QT_FEATURE_tableview 1
#if !QT_CONFIG(tableview)
#  define QT_NO_TABLEVIEW
#endif

#define QT_FEATURE_toolbutton 1
#if !QT_CONFIG(toolbutton)
#  define QT_NO_TOOLBUTTON
#endif

#define QT_FEATURE_calendarwidget 1
#if !QT_CONFIG(calendarwidget)
#  define QT_NO_CALENDARWIDGET
#endif

#define QT_FEATURE_checkbox 1
#define QT_FEATURE_dialog 1
#define QT_FEATURE_dialogbuttonbox 1

#define QT_FEATURE_colordialog 1
#if !QT_CONFIG(colordialog)
#  define QT_NO_COLORDIALOG
#endif

#define QT_FEATURE_listview 1
#if !QT_CONFIG(listview)
#  define QT_NO_LISTVIEW
#endif

#define QT_FEATURE_columnview 1
#if !QT_CONFIG(columnview)
#  define QT_NO_COLUMNVIEW
#endif

#define QT_FEATURE_combobox 1
#if !QT_CONFIG(combobox)
#  define QT_NO_COMBOBOX
#endif

#define QT_FEATURE_commandlinkbutton 1

#define QT_FEATURE_completer 1
#if !QT_CONFIG(completer)
#  define QT_NO_COMPLETER
#endif

#define QT_FEATURE_contextmenu 1
#if !QT_CONFIG(contextmenu)
#  define QT_NO_CONTEXTMENU
#endif

#define QT_FEATURE_datawidgetmapper 1
#if !QT_CONFIG(datawidgetmapper)
#  define QT_NO_DATAWIDGETMAPPER
#endif

#define QT_FEATURE_datetimeedit 1
#if !QT_CONFIG(datetimeedit)
#  define QT_NO_DATETIMEEDIT
#endif

#define QT_FEATURE_dial 1
#if !QT_CONFIG(dial)
#  define QT_NO_DIAL
#endif

#define QT_FEATURE_filesystemmodel 1

#if !QT_CONFIG(filesystemmodel)
#  define QT_NO_FILESYSTEMMODEL
#endif

#define QT_FEATURE_dirmodel 1
#if !QT_CONFIG(dirmodel)
#  define QT_NO_DIRMODEL
#endif

#define QT_FEATURE_resizehandler 1
#if !QT_CONFIG(resizehandler)
#  define QT_NO_RESIZEHANDLER
#endif

#define QT_FEATURE_mainwindow 1
#if !QT_CONFIG(mainwindow)
#  define QT_NO_MAINWINDOW
#endif

#define QT_FEATURE_dockwidget 1
#if !QT_CONFIG(dockwidget)
#  define QT_NO_DOCKWIDGET
#endif

#define QT_FEATURE_textedit 1
#if !QT_CONFIG(textedit)
#  define QT_NO_TEXTEDIT
#endif

#define QT_FEATURE_errormessage 1
#if !QT_CONFIG(errormessage)
#  define QT_NO_ERRORMESSAGE
#endif

#define QT_FEATURE_splitter 1
#if !QT_CONFIG(splitter)
#  define QT_NO_SPLITTER
#endif

#define QT_FEATURE_stackedwidget 1
#if !QT_CONFIG(stackedwidget)
#  define QT_NO_STACKEDWIDGET
#endif

#define QT_FEATURE_treeview 1
#if !QT_CONFIG(treeview)
#  define QT_NO_TREEVIEW
#endif

#define QT_FEATURE_filedialog 1
#if !QT_CONFIG(filedialog)
#  define QT_NO_FILEDIALOG
#endif

#define QT_FEATURE_fontcombobox 1
#if !QT_CONFIG(fontcombobox)
#  define QT_NO_FONTCOMBOBOX
#endif

#define QT_FEATURE_fontdialog 1
#if !QT_CONFIG(fontdialog)
#  define QT_NO_FONTDIALOG
#endif

#define QT_FEATURE_formlayout 1

#define QT_FEATURE_fscompleter 1
#if !QT_CONFIG(fscompleter)
#  define QT_NO_FSCOMPLETER
#endif

#define QT_FEATURE_graphicsview 1
#if !QT_CONFIG(graphicsview)
#  define QT_NO_GRAPHICSVIEW
#endif

#define QT_FEATURE_graphicseffect 1
#if !QT_CONFIG(graphicseffect)
#  define QT_NO_GRAPHICSEFFECT
#endif

#define QT_FEATURE_inputdialog 1
#if !QT_CONFIG(inputdialog)
#  define QT_NO_INPUTDIALOG
#endif

#define QT_FEATURE_keysequenceedit 1
#if !QT_CONFIG(keysequenceedit)
#  define QT_NO_KEYSEQUENCEEDIT
#endif

#define QT_FEATURE_lcdnumber 1
#if !QT_CONFIG(lcdnumber)
#  define QT_NO_LCDNUMBER
#endif

#define QT_FEATURE_listwidget 1
#if !QT_CONFIG(listwidget)
#  define QT_NO_LISTWIDGET
#endif

#define QT_FEATURE_mdiarea 1
#if !QT_CONFIG(mdiarea)
#  define QT_NO_MDIAREA
#endif

#define QT_FEATURE_menubar 1
#if !QT_CONFIG(menubar)
#  define QT_NO_MENUBAR
#endif

#define QT_FEATURE_messagebox 1
#if !QT_CONFIG(messagebox)
#  define QT_NO_MESSAGEBOX
#endif

#define QT_FEATURE_progressbar 1
#if !QT_CONFIG(progressbar)
#  define QT_NO_PROGRESSBAR
#endif

#define QT_FEATURE_progressdialog 1
#if !QT_CONFIG(progressdialog)
#  define QT_NO_PROGRESSDIALOG
#endif

#define QT_FEATURE_radiobutton 1

#define QT_FEATURE_rubberband 1
#if !QT_CONFIG(rubberband)
#  define QT_NO_RUBBERBAND
#endif

#define QT_FEATURE_scroller 1

#define QT_FEATURE_sizegrip 1
#if !QT_CONFIG(sizegrip)
#  define QT_NO_SIZEGRIP
#endif

#define QT_FEATURE_splashscreen 1
#if !QT_CONFIG(splashscreen)
#  define QT_NO_SPLASHSCREEN
#endif

#define QT_FEATURE_statusbar 1
#if !QT_CONFIG(statusbar)
#  define QT_NO_STATUSBAR
#endif

#define QT_FEATURE_statustip 1
#if !QT_CONFIG(statustip)
#  define QT_NO_STATUSTIP
#endif

#define QT_FEATURE_style_stylesheet 1
#if !QT_CONFIG(style_stylesheet)
#  define QT_NO_STYLE_STYLESHEET
#endif

#define QT_FEATURE_syntaxhighlighter 1
#if !QT_CONFIG(syntaxhighlighter)
#  define QT_NO_SYNTAXHIGHLIGHTER
#endif

#define QT_FEATURE_tabbar 1
#if !QT_CONFIG(tabbar)
#  define QT_NO_TABBAR
#endif

#define QT_FEATURE_tablewidget 1
#if !QT_CONFIG(tablewidget)
#  define QT_NO_TABLEWIDGET
#endif

#define QT_FEATURE_tabwidget 1
#if !QT_CONFIG(tabwidget)
#  define QT_NO_TABWIDGET
#endif

#define QT_FEATURE_textbrowser 1
#if !QT_CONFIG(textbrowser)
#  define QT_NO_TEXTBROWSER
#endif

#define QT_FEATURE_toolbar 1
#if !QT_CONFIG(toolbar)
#  define QT_NO_TOOLBAR
#endif

#define QT_FEATURE_toolbox 1
#if !QT_CONFIG(toolbox)
#  define QT_NO_TOOLBOX
#endif

#define QT_FEATURE_tooltip 1
#if !QT_CONFIG(tooltip)
#  define QT_NO_TOOLTIP
#endif

#define QT_FEATURE_treewidget 1
#if !QT_CONFIG(treewidget)
#  define QT_NO_TREEWIDGET
#endif

#define QT_FEATURE_undocommand 1
#if !QT_CONFIG(undocommand)
#  define QT_NO_UNDOCOMMAND
#endif

#define QT_FEATURE_undostack 1
#if !QT_CONFIG(undostack)
#  define QT_NO_UNDOSTACK
#endif

#define QT_FEATURE_undogroup 1
#if !QT_CONFIG(undogroup)
#  define QT_NO_UNDOGROUP
#endif

#define QT_FEATURE_undoview 1
#if !QT_CONFIG(undoview)
#  define QT_NO_UNDOVIEW
#endif

#define QT_FEATURE_wizard 1
#if !QT_CONFIG(wizard)
#  define QT_NO_WIZARD
#endif
