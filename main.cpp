#include "EasyObjects.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    app.setStyleSheet(
        R"(
        QWidget { background-color: #333; color: #eee; }
        QLineEdit, QTextEdit { background-color: #444; border: 1px solid #888; }
        QPushButton { background-color: #555; border: 1px solid #666; }
        )"
    );
    EasyObjects window;
    window.show();
    return app.exec();
}
