#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QFrame>
#include <QLabel>
#include <QLine>
#include <QDesktopWidget>
#include <QApplication>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QToolButton>
#include <QPushButton>
#include <QLineEdit>
#include <QPropertyAnimation>
#include <QTime>
#include <QThread>
#include <QTextStream>
#include <QStackedWidget>
#include <QTextBrowser>
#include <QListWidget>
#include <QFile>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void animationWidget(QWidget &widget, double x, double y, double width, double heigth, QEasingCurve::Type t, int _time);

    void checkStatus(bool check);

    void setParametrs();

    void setWidgetStyle();

    void setPushButtonStyle();

    void connectButtons();

    void addElements();

    void hideElments();

    void assignWidgets();

    void increaseSizele();

    void reduceSizele();


private:
    Ui::MainWindow *ui;

    QDesktopWidget *mainWidget;
    QVBoxLayout *startLayout;
    QHBoxLayout *mainVLayout0;
    QGridLayout *mainVLayout1;
    QGridLayout *mainVLayout2;
    QHBoxLayout *exampleVLayout0;
    QGridLayout *exampleVLayout1;
    QGridLayout *exampleVLayout2;
    QHBoxLayout *mainHLayout;
    QHBoxLayout *buttonsLayout;
    QVBoxLayout *filesLayout;
    QVBoxLayout *resultLayout;
    QPushButton *mainNewBut;
    QPushButton *mainFilesBut;
    QPushButton *mainExitBut;
    QPushButton *mix;
    QPushButton *enter;
    QPushButton *save;
    QPushButton *clear;
    QPushButton *result;
    QPushButton *exitInformationBut;
    QPushButton *nextInformationBut;
    QPushButton *whatsThisBut;
    QPushButton *saveElement;
    QPushButton *openElement;
    QPushButton *createFiles;
    QPushButton *exitFiles;
    QPushButton *backMain;
    QLineEdit *le;
    QLineEdit *le2;
    QLineEdit *leExampleLeft;
    QLineEdit *leExampleRight;
    QLineEdit *leNameFiles;
    QTextEdit *teWrongWords;
    QToolButton *tb;
    QToolButton *tb2;
    QToolButton *tbExampleLeft;
    QToolButton *tbExampleRight;
    QToolButton *button1;
    QToolButton *button2;
    QToolButton *exitCreateFiles;
    QToolButton *exitResult;
    QWidget *mainW0;
    QWidget *mainW1;
    QWidget *mainW2;
    QWidget *mainW3;
    QWidget *exampleW0;
    QWidget *exampleW1;
    QWidget *exampleW2;
    QWidget *pages;
    QWidget *information;
    QWidget *exampleWidget;
    QWidget *resultWidget;
    QWidget *createFilesWidget;
    QListWidget *listFiles;
    QStackedWidget *elementsInformation;
    QLabel *labelStatus;
    QLabel *pagesPicture;
    QLabel *labelResult;
    QLabel *nameCreateFiles;
    QLabel *labelInformation;
    QLabel *labelListFiles;
    QLabel *labelTeWrongWords;
    QLabel *labelExample;
    QString repeatWrongWords;
    QString strForCompareLeft;
    QString strForCompareRight;
    QString wrongWords;
    QString *bufArrForCompare;
    QString *strData;
    QString *rightColumnForSave;
    QPixmap *firstPixmap;
    QTextBrowser *textInformation;
    QPushButton *createNewFile;

    double mainWidth = 0;
    double mainHeight = 0;
    bool checkIndex;
    bool checkClose = false;
    bool checkFiles = false;
    int checkClickedButton = 0;
    int numEmpty = 0;
    int indexForThread = 0;

signals:
    void signalFromButtonLeft(QString string);
    void signalFromButtonRight(QString string);

private slots:
    void exitClicked();

    void newClicked();

    void filesClicked();

    void tbSlotLeft();

    void tbSlotRight();

    void slotStrLeft(QString string);

    void slotStrRight(QString string);

    void compareString();

    void enterClicked();

    void mixClicked();

    void saveClicked();

    void exitInformation();

    void nextInformation();

    void whatsThis();

    void itemClicked();

    void saveElementClicked();

    void exitFilesClicked();

    void openElementClicked();

    void resultClicked();

    void createClicked();

    void createFilesClicked();

    void exitCreateFilesClicked();

    void exitResultClicked();

    void whileButtons();

    void addMyFiles();

    void changeSatusTrue(QLabel *label);

    void changeSatusFalse(QLabel *label);

    void clearClicked();

    void backMainClicked();
};

#endif // MAINWINDOW_H
