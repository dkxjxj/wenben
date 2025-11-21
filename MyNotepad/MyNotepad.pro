QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    aboutdialog.cpp \
    codeeditor.cpp \
    main.cpp \
    mainwindow.cpp \
    replacedialog.cpp \
    searchdialog.cpp

HEADERS += \
    aboutdialog.h \
    codeeditor.h \
    mainwindow.h \
    replacedialog.h \
    searchdialog.h

FORMS += \
    aboutdialog.ui \
    mainwindow.ui \
    replacedialog.ui \
    searchdialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    notepad.qrc

DISTFILES += \
    ../../../../../../../../ruanjian/qtapp/MyNotepad/img/OpenFile.png \
    ../../../../../../../../ruanjian/qtapp/MyNotepad/img/about.png \
    ../../../../../../../../ruanjian/qtapp/MyNotepad/img/copy.png \
    ../../../../../../../../ruanjian/qtapp/MyNotepad/img/cut.png \
    ../../../../../../../../ruanjian/qtapp/MyNotepad/img/exit.png \
    ../../../../../../../../ruanjian/qtapp/MyNotepad/img/find.png \
    ../../../../../../../../ruanjian/qtapp/MyNotepad/img/font.png \
    ../../../../../../../../ruanjian/qtapp/MyNotepad/img/go-top.png \
    ../../../../../../../../ruanjian/qtapp/MyNotepad/img/line_number.png \
    ../../../../../../../../ruanjian/qtapp/MyNotepad/img/logo.png \
    ../../../../../../../../ruanjian/qtapp/MyNotepad/img/new.png \
    ../../../../../../../../ruanjian/qtapp/MyNotepad/img/paste.png \
    ../../../../../../../../ruanjian/qtapp/MyNotepad/img/redo.png \
    ../../../../../../../../ruanjian/qtapp/MyNotepad/img/replace.png \
    ../../../../../../../../ruanjian/qtapp/MyNotepad/img/save-as.png \
    ../../../../../../../../ruanjian/qtapp/MyNotepad/img/save.png \
    ../../../../../../../../ruanjian/qtapp/MyNotepad/img/select-all.png \
    ../../../../../../../../ruanjian/qtapp/MyNotepad/img/state.png \
    ../../../../../../../../ruanjian/qtapp/MyNotepad/img/tool.png \
    ../../../../../../../../ruanjian/qtapp/MyNotepad/img/undo.png \
    ../../../../../../../../ruanjian/qtapp/MyNotepad/img/wrap.png \
    img/change_circle_24dp_1F1F1F_FILL0_wght400_GRAD0_opsz24.png \
    img/content_copy_24dp_1F1F1F_FILL0_wght400_GRAD0_opsz24.png \
    img/content_cut_24dp_1F1F1F_FILL0_wght400_GRAD0_opsz24.png \
    img/content_paste_go_24dp_1F1F1F_FILL0_wght400_GRAD0_opsz24.png \
    img/exit_to_app_24dp_1F1F1F_FILL0_wght400_GRAD0_opsz24.png \
    img/find_in_page_24dp_1F1F1F_FILL0_wght400_GRAD0_opsz24.png \
    img/font_download_24dp_1F1F1F_FILL0_wght400_GRAD0_opsz24.png \
    img/new.png \
    img/png.png \
    img/redo_24dp_1F1F1F_FILL0_wght400_GRAD0_opsz24.png \
    img/save_24dp_1F1F1F_FILL0_wght400_GRAD0_opsz24.png \
    img/save_as_24dp_1F1F1F_FILL0_wght400_GRAD0_opsz24.png \
    img/select_all_24dp_1F1F1F_FILL0_wght400_GRAD0_opsz24.png \
    img/undo_24dp_1F1F1F_FILL0_wght400_GRAD0_opsz24.png \
    img/wrap_text_24dp_1F1F1F_FILL0_wght400_GRAD0_opsz24.png
