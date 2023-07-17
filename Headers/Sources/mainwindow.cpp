#include "mainwindow.h"
#include "ui_mainwindow.h"


// функция для анимационных переходов
void MainWindow::animationWidget(QWidget &widget, double x, double y, double width, double heigth, QEasingCurve::Type t, int _time)
{
    QPropertyAnimation* animation = new QPropertyAnimation(&widget, "geometry");
    animation->setDuration(_time);
    animation->setEasingCurve(t);
    animation->setEndValue(QRect(x, y, width, heigth));
    animation->start();
}

// задержка в анимации и тд
void sleep(int vol)
{
    QTime time;
    time.start();
    for(;time.elapsed() < vol;)
    {
     (qApp->processEvents());
    }
}

void MainWindow::assignWidgets()
{
    mainWidget = QApplication::desktop();
    mainVLayout0 = new QHBoxLayout(this);
    mainVLayout1 = new QGridLayout(this);
    mainVLayout2 = new QGridLayout(this);
    exampleVLayout0 = new QHBoxLayout(this);
    exampleVLayout1 = new QGridLayout(this);
    exampleVLayout2 = new QGridLayout(this);
    buttonsLayout = new QHBoxLayout(this);
    startLayout = new QVBoxLayout(this);
    information = new QWidget(this);
    mainW0 = new QWidget(this);
    mainW1 = new QWidget(this);
    mainW2 = new QWidget(this);
    mainW3 = new QWidget(this);
    elementsInformation = new QStackedWidget(information);
    pages = new QWidget[6];
    exampleW1 = new QWidget(elementsInformation);
    exampleW2 = new QWidget(elementsInformation);
    mix = new QPushButton(this);
    save = new QPushButton(this);
    enter = new QPushButton(this);
    clear = new QPushButton(this);
    result = new QPushButton(this);
    exitFiles = new QPushButton(this);
    whatsThisBut = new QPushButton(this);
    mainNewBut = new QPushButton(this);
    mainExitBut = new QPushButton(this);
    mainFilesBut = new QPushButton(this);
    nextInformationBut = new QPushButton(information);
    exitInformationBut = new QPushButton(information);
    bufArrForCompare = new QString[10];
    labelStatus = new QLabel(this);
    pagesPicture = new QLabel[6];
    tb = new QToolButton[10];
    tb2 = new QToolButton[10];
    tbExampleLeft = new QToolButton[2];
    tbExampleRight = new QToolButton[2];
    le = new QLineEdit[10];
    le2 = new QLineEdit[10];
    leExampleLeft = new QLineEdit[2];
    leExampleRight = new QLineEdit[2];
    textInformation = new QTextBrowser[6];
    labelInformation = new QLabel(elementsInformation);
    listFiles = new QListWidget(this);
    saveElement = new QPushButton(listFiles);
    openElement = new QPushButton(listFiles);
    createNewFile = new QPushButton(listFiles);
    resultWidget = new QWidget(this);
    createFilesWidget = new QWidget(this);
    createFiles = new QPushButton(createFilesWidget);
    nameCreateFiles = new QLabel(createFilesWidget);
    filesLayout = new QVBoxLayout(this);
    leNameFiles = new QLineEdit(this);
    exitCreateFiles = new QToolButton(createFilesWidget);
    teWrongWords = new QTextEdit(resultWidget);
    resultLayout = new QVBoxLayout(this);
    labelResult = new QLabel(resultWidget);
    exitResult = new QToolButton(resultWidget);
    rightColumnForSave = new QString[10];
    labelListFiles = new QLabel(listFiles);
    labelTeWrongWords = new QLabel(teWrongWords);
    labelExample = new QLabel(elementsInformation);
    backMain = new QPushButton(this);
}

void MainWindow::setParametrs()
{
    mainWidth = mainWidget->width() / 2;
    mainHeight = mainWidget->height();

    this->setGeometry(mainWidth / 2, 0, mainWidth, mainHeight);
    this->setWindowFlags(Qt::CustomizeWindowHint);
}

void MainWindow::setWidgetStyle()
{
    mainW0->setGeometry(mainWidth / 20, mainWidth / 13, mainWidth / 1.1, mainHeight / 1.3);
    mainW1->setGeometry(mainWidth / 10, mainHeight / 13, mainWidth / 4, mainHeight / 1.3);
    mainW2->setGeometry(mainWidth / 1.5, mainHeight / 13, mainWidth / 4, mainHeight / 1.3);
    mainW3->setGeometry(mainWidth / 9, mainHeight / 1.2, mainWidth / 1.25, mainHeight / 10);
    information->setGeometry(0, mainHeight * 2, mainWidth, mainHeight);
    elementsInformation->setGeometry(information->width() / 10, information->height() / 15, information->width() / 1.25, information->height() / 1.5);
    exampleW1->setGeometry(elementsInformation->width() / 10, elementsInformation->height() / 13, elementsInformation->width() / 4, elementsInformation->height() / 5);
    exampleW2->setGeometry(elementsInformation->width() / 1.5, elementsInformation->height() / 13, elementsInformation->width() / 4, elementsInformation->height() / 5);
    listFiles->setGeometry(mainWidth, mainHeight / 13, mainWidth / 1.1, mainHeight / 1.2);
    nextInformationBut->setGeometry(information->width() / 2.5, information->height() / 1.3, information->width() / 5, information->height() / 15);
    exitInformationBut->setGeometry(information->width() - information->width() / 12, elementsInformation->y() / 8, information->width() / 15, information->height() / 20);
    labelInformation->setGeometry(0, 0, elementsInformation->width(), elementsInformation->height() / 16);
    labelListFiles->setGeometry(0, 0, listFiles->width(), listFiles->height() / 16);
    labelTeWrongWords->setGeometry(0, 0, mainWidth - mainWidth / 8, resultWidget->height() / 16);
    labelStatus->setGeometry(mainW0->x() + mainW0->width() / 2 - labelStatus->width(), mainW0->y() / 4, mainWidth / 5, mainHeight / 30);
    resultWidget->setGeometry(mainWidth / 16, mainHeight, mainWidth - mainWidth / 8, mainHeight / 1.5);
    labelExample->setGeometry(elementsInformation->width() / 2 - labelExample->width() / 1.15, labelInformation->y() + labelInformation->height(), elementsInformation->width() / 4, labelExample->height());
    createFilesWidget->setGeometry(mainWidth / 4, mainHeight, mainWidth - mainWidth / 2, mainHeight / 2);

    mainW1->setObjectName("mainW1");
    mainW2->setObjectName("mainW2");
    mainW3->setObjectName("mainW3");
    listFiles->setObjectName("listFiles");
    exampleW1->setObjectName("exampleW1");
    exampleW2->setObjectName("exampleW2");
    information->setObjectName("information");
    labelResult->setObjectName("labelResult");
    labelStatus->setObjectName("labelStatus");
    labelExample->setObjectName("labelExample");
    resultWidget->setObjectName("resultWidget");
    teWrongWords->setObjectName("teWrongWords");
    labelListFiles->setObjectName("labelListFiles");
    labelTeWrongWords->setObjectName("labelTeWrongWords");
    createFilesWidget->setObjectName("createFilesWidget");
    labelInformation->setObjectName("labelInformation");

    mainW1->setLayout(mainVLayout1);
    mainW2->setLayout(mainVLayout2);
    mainW3->setLayout(buttonsLayout);
    exampleW1->setLayout(exampleVLayout1);
    exampleW2->setLayout(exampleVLayout2);
    createFilesWidget->setLayout(filesLayout);
    resultWidget->setLayout(resultLayout);

    labelStatus->setStyleSheet("QLabel#labelStatus{color:#000;}");
    labelExample->setStyleSheet("QLabel#labelExample{color:#000;}");
    mainW1->setStyleSheet("QWidget#mainW1{background-color:none;}");
    mainW2->setStyleSheet("QWidget#mainW2{background-color:none;}");
    mainW3->setStyleSheet("QWidget#mainW3{background-color:none;}");
    labelListFiles->setStyleSheet("QLabel#labelListFiles{font-size:40px;}");
    labelResult->setStyleSheet("QLabel#labelResult{font-size:45px;}");
    listFiles->setStyleSheet("QListWidget#listFiles{padding-top:50%;font-size:30px;}");
    exampleW1->setStyleSheet("QWidget#exampleW1{background-color:none;}");
    exampleW2->setStyleSheet("QWidget#exampleW2{background-color:none;}");
    labelTeWrongWords->setStyleSheet("QLabel#labelTeWrongWords{color:#00DF83;font-size:35px;}");
    teWrongWords->setStyleSheet("QTextEdit#teWrongWords{padding-top:50%;padding-left:310%;color:rgb(232, 49, 238);}");
    information->setStyleSheet("QWidget#information{background-color:rgba(32, 74, 135,0.7);}");
    resultWidget->setStyleSheet("QWidget#resultWidget{background-color:rgba(32, 74, 135,0.95);}");
    labelInformation->setStyleSheet("QLabel#labelInformation{font-size:35px;color:#00DF83;};");

    labelStatus->setText("Правильно");
    labelExample->setText("Правильно");
    labelListFiles->setText("Ваши файлы");
    labelInformation->setText("Информация");
    labelTeWrongWords->setText("Вам следует подучить эти слова:");

    textInformation[0].setText("Это приложение поможет вам изучить иностранные слова и научные термины");
    textInformation[1].setText("Это ячейки для слов, которые вам надо выучить");
    textInformation[2].setText("Это ячейки для их перевода");
    textInformation[3].setText("Они соединяются этими кнопками");
    textInformation[4].setText("Затем вам надо нажать на кнопку 'Ввод', потом на кнопку 'Перемешать'");
}

void MainWindow::setPushButtonStyle()
{
    QString str1 = "background-color:rgb(245, 121, 0);border-radius:10px;color:#fff;font-weight:bold;font-size:25px;min-height:50;border:2px solid #000;}";
    QString str2 = "{background-color:rgb(252, 175, 62);color:#1847A7;qproperty-text: 1;}";
    QString str3 = "{background-color:#829389;}";

    saveElement->setObjectName("saveElement");
    openElement->setObjectName("openElement");
    whatsThisBut->setObjectName("whatsThisBut");

    saveElement->setStyleSheet("QPushButton#saveElement{margin:15%;" + str1 +  "QPushButton#saveElement:hover" + str2 + "QPushButton#saveElement:pressed" + str3);
    openElement->setStyleSheet("QPushButton#openElement{margin:15%;" + str1 +  "QPushButton#openElement:hover" + str2 + "QPushButton#openElement:pressed" + str3);
    whatsThisBut->setStyleSheet("QPushButton#whatsThisBut{" + str1 +  "QPushButton#whatsThisBut:hover" + str2 + "QPushButton#whatsThisBut:pressed" + str3);

    for (int i = 0; i < 6; i++)
    {
        textInformation[i].setParent(&pages[i]);
        elementsInformation->addWidget(&pages[i]);
        pages[i].setObjectName("pages");
        pages[i].setStyleSheet("QWidget#pages{background-color:none;}");
        textInformation[i].setObjectName("textInformation");
        textInformation[i].setStyleSheet("QWidget#textInformation{background-color:rgba(0,0,0,0); color:#fff; font-size:35px; padding:10%; qproperty-alignment: AlignCenter;}");
        textInformation[i].setGeometry(elementsInformation->width() / 9, elementsInformation->height() / 3.5, elementsInformation->width() / 1.25, elementsInformation->height() / 1.5);
    }

    mix->setText("Перемешать");
    save->setText("Сохранить");
    enter->setText("Ввод");
    clear->setText("Очистить");
    result->setText("Результат");
    exitFiles->setText("X");
    mainNewBut->setText("Новый");
    saveElement->setText("Сохранить");
    openElement->setText("Открыть");
    mainExitBut->setText("Выход");
    createFiles->setText("Ввод");
    exitCreateFiles->setText("X");
    exitResult->setText("X");
    labelResult->setText("Результат");
    mainFilesBut->setText("Файлы");
    createNewFile->setText("Создать");
    nameCreateFiles->setText("Имя файла");
    exitInformationBut->setText("X");
    whatsThisBut->setText("Что это?");
    nextInformationBut->setText("Дальше >>");
    backMain->setText("Назад");

    exitFiles->setMaximumWidth(mainWidth / 15);
    exitFiles->setGeometry(listFiles->width() - exitFiles->width() / 2, exitFiles->height() / 4, exitFiles->width(), exitFiles->height());
    openElement->setGeometry(0, listFiles->height() + listFiles->y() - 3 * openElement->height(), listFiles->width(), listFiles->height() / 20);
    createNewFile->setGeometry(listFiles->width() - createNewFile->width() / 2, createNewFile->height() / 4, createNewFile->width(), createNewFile->height());
    exitCreateFiles->setGeometry(createFilesWidget->width() - exitCreateFiles->width() * 2, exitCreateFiles->height() / 2, createFilesWidget->width() / 16, createFilesWidget->width() / 16);
    backMain->setGeometry(mainW0->x() + mainW0->width() - backMain->width() * 1.5, mainW0->y() - backMain->height() * 1.25, backMain->width(), backMain->height());
    exitResult->setGeometry(resultWidget->width() - exitResult->width() * 2, exitResult->height() / 2, resultWidget->width() / 16, resultWidget->width() / 16);
}

void MainWindow::connectButtons()
{
    for (int i = 0; i < 10; i++)
    {
        connect(&tb[i], SIGNAL(clicked()), this, SLOT(tbSlotLeft()));
        connect(&tb2[i], SIGNAL(clicked()), this, SLOT(tbSlotRight()));
    }

    connect(enter, SIGNAL(clicked()), this, SLOT(enterClicked()));
    connect(mainNewBut, SIGNAL(clicked()), this, SLOT(newClicked()));
    connect(mainExitBut, SIGNAL(clicked()), this, SLOT(exitClicked()));
    connect(mainFilesBut, SIGNAL(clicked()), this, SLOT(filesClicked()));
    connect(mix, SIGNAL(clicked()), this, SLOT(mixClicked()));
    connect(save, SIGNAL(clicked()), this, SLOT(saveClicked()));
    connect(result, SIGNAL(clicked()), this, SLOT(resultClicked()));
    connect(clear, SIGNAL(clicked()), this, SLOT(clearClicked()));
    connect(backMain, SIGNAL(clicked()), this, SLOT(backMainClicked()));
    connect(exitFiles, SIGNAL(clicked()), this, SLOT(exitFilesClicked()));
    connect(saveElement, SIGNAL(clicked()), this, SLOT(saveElementClicked()));
    connect(openElement, SIGNAL(clicked()), this, SLOT(openElementClicked()));
    connect(whatsThisBut, SIGNAL(clicked()), this, SLOT(whatsThis()));
    connect(createNewFile, SIGNAL(clicked()), this, SLOT(createClicked()));
    connect(createFiles, SIGNAL(clicked()), this, SLOT(createFilesClicked()));
    connect(exitCreateFiles, SIGNAL(clicked()), this, SLOT(exitCreateFilesClicked()));
    connect(exitResult, SIGNAL(clicked()), this, SLOT(exitResultClicked()));
    connect(exitInformationBut, SIGNAL(clicked()), this, SLOT(exitInformation()));
    connect(nextInformationBut, SIGNAL(clicked()), this, SLOT(nextInformation()));
    connect(this, SIGNAL(signalFromButtonLeft(QString)), this, SLOT(slotStrLeft(QString)));
    connect(this, SIGNAL(signalFromButtonRight(QString)), this, SLOT(slotStrRight(QString)));
    connect(listFiles, SIGNAL(itemClicked(QListWidgetItem*)), this, SLOT(itemClicked()));
}

void MainWindow::addElements()
{
    startLayout->addWidget(mainNewBut);
    startLayout->addWidget(mainFilesBut);
    startLayout->addWidget(mainExitBut);
    startLayout->addWidget(whatsThisBut);

    buttonsLayout->addWidget(clear);
    buttonsLayout->addWidget(mix);
    buttonsLayout->addWidget(enter);
    buttonsLayout->addWidget(result);
    buttonsLayout->addWidget(save);

    filesLayout->addWidget(nameCreateFiles);
    filesLayout->addWidget(leNameFiles);
    filesLayout->addWidget(createFiles);

    resultLayout->addWidget(labelResult);
    resultLayout->addWidget(teWrongWords);

    for (int i = 0; i < 10; i++)
    {
        le[i].setParent(this);
        tb[i].setParent(this);
        le2[i].setParent(this);
        tb2[i].setParent(this);
        mainVLayout1->addWidget(&le[i], i, 0);
        mainVLayout1->addWidget(&tb[i], i, 1);
        mainVLayout2->addWidget(&le2[i], i, 1);
        mainVLayout2->addWidget(&tb2[i], i, 0);
    }

    for (int i = 0; i < 2; i++)
    {
        leExampleLeft[i].setParent(elementsInformation);
        leExampleRight[i].setParent(elementsInformation);
        tbExampleLeft[i].setParent(elementsInformation);
        tbExampleRight[i].setParent(elementsInformation);
        exampleVLayout1->addWidget(&leExampleLeft[i], i, 0);
        exampleVLayout1->addWidget(&tbExampleLeft[i], i, 1);
        exampleVLayout2->addWidget(&leExampleRight[i], i, 1);
        exampleVLayout2->addWidget(&tbExampleRight[i], i, 0);
    }

    startLayout->setGeometry(QRect(mainWidth / 2.5, mainHeight / 3.5, mainWidth / 5, mainHeight / 3.5));

}

void MainWindow::hideElments()
{
    mainW0->hide();
    mainW1->hide();
    mainW2->hide();
    mainW3->hide();
    backMain->hide();
    listFiles->hide();
    saveElement->hide();
    openElement->hide();
    exitFiles->hide();
    labelStatus->hide();
    labelExample->hide();
    createFilesWidget->hide();
}

void MainWindow::addMyFiles()
{
    QFile file_data("dataBase.txt");

    if(file_data.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        while(!file_data.atEnd())
        {
            QString str = file_data.readLine();
            str.chop(1);
            listFiles->addItem(str);
        }
    }
}


// основная функция
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    assignWidgets(); // инициалтзирует переменные
    setParametrs(); // устанавливает параметры окна и др.
    addElements(); // добавляет элементы в лайауты
    setWidgetStyle(); // задает стиль главных виджетов
    setPushButtonStyle(); // задает стиль кнопок
    connectButtons(); // свзязывает событие и кнопку
    hideElments(); // скрывает лишние элементы
    addMyFiles(); // добавляет существующие файлы

}

// определение кнопки в одном и том же виджете
void MainWindow::itemClicked()
{
    if (!checkFiles)
        saveElement->show();
    else openElement->show();
}

// функия для выхода из приложения
void MainWindow::exitClicked()
{
    exit(0);
}

// функия для выхода из информации
void MainWindow::exitInformation()
{
    QString str1 = "QLineEdit{background-color:rgb(135, 207, 225)};";
    QString str2 = "{background-color:none; border:none;}";
    QString str3 = "QToolButton{background-color:rgb(193, 220, 203);}";

    animationWidget(*information, 0, mainHeight * 2, mainWidth, mainHeight, QEasingCurve::InExpo, 500);

    sleep(600);

    elementsInformation->setCurrentIndex(0);

    checkIndex = true;

    nextInformationBut->setText("Дальше >>");
    nextInformationBut->setObjectName("nextInformationBut");
    nextInformationBut->setStyleSheet("QPushButton#nextInformationBut{background-color:none;border-radius:10px;color:#fff;font-weight:bold;font-size:25px;min-height:50;border:2px solid #000;}QPushButton#nextInformationBut:hover{background-color:#C1DCCB;color:#1847A7;qproperty-text: 1;}QPushButton#nextInformationBut:pressed{background-color:#829389;}");

    leExampleLeft[0].setStyleSheet(str1);
    leExampleLeft[1].setStyleSheet(str1);
    leExampleRight[0].setStyleSheet(str1);
    leExampleRight[1].setStyleSheet(str1);
    tbExampleLeft[0].setStyleSheet(str3);
    tbExampleLeft[1].setStyleSheet(str3);
    tbExampleRight[0].setStyleSheet(str3);
    tbExampleRight[1].setStyleSheet(str3);
    exampleW1->setStyleSheet("QWidget#exampleW1" + str2);
    exampleW2->setStyleSheet("QWidget#exampleW2" + str2);

    mainNewBut->show();
    mainExitBut->show();
    mainFilesBut->show();
    whatsThisBut->show();
}

// обработка нажатия на кнопку 'What is this?'
void MainWindow::whatsThis()
{
    mainNewBut->hide();
    mainExitBut->hide();
    mainFilesBut->hide();
    whatsThisBut->hide();
    animationWidget(*information, 0, mainHeight / 15, mainWidth, mainHeight, QEasingCurve::OutExpo, 1500);
    textInformation[0].setGeometry(elementsInformation->width() / 9, elementsInformation->y(), elementsInformation->width() / 1.25, elementsInformation->height() / 1.5);

    for (int i = 0; i < 2; i++)
    {
        leExampleRight[i].hide();
        leExampleLeft[i].hide();
        tbExampleRight[i].hide();
        tbExampleLeft[i].hide();
    }

    leExampleRight[0].setText("Яблоко");
    leExampleRight[1].setText("Шутка");
    leExampleLeft[0].setText("Apple");
    leExampleLeft[1].setText("Joke");

}

void MainWindow::clearClicked()
{
    for (int i = 0; i < 10; i++)
    {
        le[i].clear();
        le2[i].clear();
        le[i].setStyleSheet("background-color:rgb(135, 207, 225)");
        le[i].setEnabled(true);
        tb[i].setEnabled(true);
        tb[i].setStyleSheet("background-color:rgb(193, 220, 203)");
        le2[i].setStyleSheet("background-color:rgb(135, 207, 225)");
        le2[i].setEnabled(true);
        tb2[i].setEnabled(true);
        tb2[i].setStyleSheet("background-color:rgb(193, 220, 203)");
    }

    wrongWords.clear();
    teWrongWords->clear();
    repeatWrongWords.clear();
    bufArrForCompare->clear();
    strForCompareLeft.clear();
    strForCompareRight.clear();
    rightColumnForSave->clear();

    reduceSizele();
}

// обработка нажатия на кнопку 'Create'
void MainWindow::createFilesClicked()
{
    QString strForName;

    strForName = leNameFiles->text();

    if (strForName.isEmpty())
    {
        leNameFiles->setText("Вы не написали имя!");
        leNameFiles->setStyleSheet("color:red;");
        sleep(1500);
        leNameFiles->setStyleSheet("color:#000;");
        leNameFiles->clear();
        strForName.clear();
    }

    else
    {
        listFiles->addItem(strForName);
        leNameFiles->clear();
        animationWidget(*createFilesWidget, mainWidth / 4, mainHeight, mainWidth - mainWidth / 2, mainHeight / 4, QEasingCurve::InBack, 500);
        sleep(500);
        createFilesWidget->hide();
    }

}

void MainWindow::backMainClicked()
{
    mainNewBut->show();
    mainExitBut->show();
    mainFilesBut->show();
    whatsThisBut->show();

    mainW0->hide();
    mainW1->hide();
    mainW2->hide();
    mainW3->hide();
    backMain->hide();

    clearClicked();
}

void MainWindow::changeSatusTrue(QLabel *label)
{
    QString str = "QLabel{border-radius:10px;color:#000;font-weight:bold;font-size:25px;min-height:40;qproperty-alignment: AlignCenter;}";

    label->setText("Правильно");
    label->show();
    label->setStyleSheet("QLabel{background-color:rgb(32, 203, 25); color:#000;}");
    sleep(1500);
    label->setStyleSheet(str);
    label->hide();
}

void MainWindow::changeSatusFalse(QLabel *label)
{
    QString str = "QLabel{border-radius:10px;color:#000;font-weight:bold;font-size:25px;min-height:40;qproperty-alignment: AlignCenter;}";

    label->setText("Неправильно");
    label->show();
    label->setStyleSheet("QLabel{background-color:rgb(204, 0, 0); color:#000;}");
    sleep(1500);
    label->setStyleSheet(str);
    label->hide();
}

// функция для показа нажатия кнопок в информации
void MainWindow::whileButtons()
{
    nextInformationBut->setEnabled(false);

    tbExampleLeft[0].setStyleSheet("background-color:rgb(245, 121, 0);");
    sleep(1000);
    tbExampleRight[1].setStyleSheet("background-color:rgb(245, 121, 0);");
    sleep(250);
    changeSatusTrue(labelExample);
    tbExampleLeft[0].setStyleSheet("QToolButton{background-color:rgb(193, 220, 203);}");
    tbExampleRight[1].setStyleSheet("QToolButton{background-color:rgb(193, 220, 203);}");
    sleep(1000);

    tbExampleLeft[0].setStyleSheet("background-color:rgb(245, 121, 0);");
    sleep(1000);
    tbExampleRight[0].setStyleSheet("background-color:rgb(245, 121, 0);");
    sleep(250);
    changeSatusFalse(labelExample);
    tbExampleLeft[0].setStyleSheet("QToolButton{background-color:rgb(193, 220, 203);}");
    tbExampleRight[0].setStyleSheet("QToolButton{background-color:rgb(193, 220, 203);}");
    sleep(1000);
}

// работа с информацией
void MainWindow::nextInformation()
{
    static int index = 1;

    QString str1 = "QLineEdit{background-color:rgb(154, 255, 255)};";
    QString str2 = "QLineEdit{background-color:rgb(135, 207, 225)};";
    QString str3 = "QLineEdit{background-color:rgb(61, 97, 103)};";
    QString str4 = "{background-color:none; border:2px solid #fff;}";
    QString str5 = "{background-color:none; border:none;}";
    QString str6 = "QToolButton{background-color:rgb(118, 135, 125);}";
    QString str7 = "QToolButton{background-color:rgb(193, 220, 203);}";
    QString str8 = "QToolButton{background-color:rgb(221, 253, 233);};";
    QString str9 = "QToolButton{background-color:#ED3CCA;};";

    if (checkIndex)
    {
        index = 1;
        checkIndex = false;
    }

    for (int i = 0; i < 2; i++)
    {
        leExampleRight[i].show();
        leExampleLeft[i].show();
        tbExampleRight[i].show();
        tbExampleLeft[i].show();
        textInformation[4].setText("Затем вам надо нажать на кнопку 'Ввод', потом на кнопку 'Перемешать'");
    }

    if (index == 1)
    {
        leExampleRight[0].setStyleSheet(str3);
        leExampleRight[1].setStyleSheet(str3);
        leExampleLeft[0].setStyleSheet(str1);
        leExampleLeft[1].setStyleSheet(str1);
        tbExampleRight[0].setStyleSheet(str6);
        tbExampleRight[1].setStyleSheet(str6);
        tbExampleLeft[0].setStyleSheet(str8);
        tbExampleLeft[1].setStyleSheet(str8);
        exampleW1->setStyleSheet("QWidget#exampleW1" + str4);
    }

    if (index == 2)
    {
        leExampleLeft[0].setStyleSheet(str3);
        leExampleLeft[1].setStyleSheet(str3);
        leExampleRight[0].setStyleSheet(str1);
        leExampleRight[1].setStyleSheet(str1);
        tbExampleLeft[0].setStyleSheet(str6);
        tbExampleLeft[1].setStyleSheet(str6);
        tbExampleRight[0].setStyleSheet(str8);
        tbExampleRight[1].setStyleSheet(str8);
        exampleW1->setStyleSheet("QWidget#exampleW1" + str5);
        exampleW2->setStyleSheet("QWidget#exampleW2" + str4);
    }

    if (index == 3) // buttons
    {
        leExampleLeft[0].setStyleSheet(str2);
        leExampleLeft[1].setStyleSheet(str2);
        leExampleRight[0].setStyleSheet(str2);
        leExampleRight[1].setStyleSheet(str2);
        exampleW1->setStyleSheet("QWidget#exampleW1" + str5);
        exampleW2->setStyleSheet("QWidget#exampleW2" + str5);
        tbExampleLeft[0].setStyleSheet(str6);
        tbExampleLeft[1].setStyleSheet(str6);
        tbExampleRight[0].setStyleSheet(str6);
        tbExampleRight[1].setStyleSheet(str6);
        sleep((1000));
        tbExampleLeft[0].setStyleSheet(str9);
        tbExampleLeft[1].setStyleSheet(str9);
        tbExampleRight[0].setStyleSheet(str9);
        tbExampleRight[1].setStyleSheet(str9);
    }

    if (index == 4)
    {
        tbExampleLeft[0].setStyleSheet(str7);
        tbExampleLeft[1].setStyleSheet(str7);
        tbExampleRight[0].setStyleSheet(str7);
        tbExampleRight[1].setStyleSheet(str7);
    }

    if (index == 5) // while buttons
    {
        tbExampleLeft[0].setStyleSheet(str7);
        tbExampleRight[1].setStyleSheet(str7);
        leExampleRight[0].setText("Шутка");
        leExampleRight[1].setText("Яблоко");
        textInformation[4].setText("Если слова соеденины верно, то появляется надпись 'Правильно', в противном случае - надпись 'Неправильно'");

        whileButtons();
        nextInformationBut->setEnabled(true);

        nextInformationBut->setText("Ок");
        nextInformationBut->setObjectName("nextInformationBut");
        nextInformationBut->setStyleSheet("QPushButton#nextInformationBut{background-color:rgb(245, 121, 0);border-radius:10px;color:#fff;font-weight:bold;font-size:25px;min-height:50;border:2px solid #000;}QPushButton#nextInformationBut:hover{background-color:rgb(252, 175, 62);color:#1847A7;qproperty-text: 1;}QPushButton#nextInformationBut:pressed{background-color:#829389;}");
    }

    else if (index == 6)
    {
        exitInformation();
        nextInformationBut->setText("Дальше >>");
        index = 0;
    }

    elementsInformation->setCurrentIndex(index);

    index++;
}

// выход из моих файлов
void MainWindow::exitFilesClicked()
{
    animationWidget(*listFiles, mainWidth, mainWidth / 13, mainWidth / 1.1, mainHeight / 1.2, QEasingCurve::InBack, 500);

    exitFiles->hide();

    sleep(600);

    mainNewBut->show();
    mainExitBut->show();
    mainFilesBut->show();
    whatsThisBut->show();
}

// проверка на правильность соединённых слов
void MainWindow::checkStatus(bool check)
{
    if (check)
    {
        changeSatusTrue(labelStatus);
    }

    else
    {
        changeSatusFalse(labelStatus);
    }

}

// обработка нажатия на кнопку 'New'
void MainWindow::newClicked()
{
    mainNewBut->hide();
    mainExitBut->hide();
    mainFilesBut->hide();
    whatsThisBut->hide();
    saveElement->hide();
    openElement->hide();

    mainW0->show();
    mainW1->show();
    mainW2->show();
    mainW3->show();
    backMain->show();
}

// закрытие окна с именем нового файла
void MainWindow::exitCreateFilesClicked()
{
    animationWidget(*createFilesWidget, mainWidth / 4, mainHeight, mainWidth - mainWidth / 2, mainHeight / 4, QEasingCurve::InBack, 500);
    sleep(1000);
    createFilesWidget->hide();
}

// выход из результата
void MainWindow::exitResultClicked()
{
    animationWidget(*resultWidget, mainWidth / 16, mainHeight, mainWidth - mainWidth / 8, mainHeight / 1.5, QEasingCurve::InBack, 500);
    sleep(1000);
    resultWidget->hide();
}

// обработка нажатия на кнопку 'Files'
void MainWindow::filesClicked()
{
    animationWidget(*listFiles, mainWidth / 20, mainWidth / 13, mainWidth / 1.1, mainHeight / 1.2, QEasingCurve::OutExpo, 1000);

    checkFiles = true;

    mainNewBut->hide();
    saveElement->hide();
    mainExitBut->hide();
    mainFilesBut->hide();
    whatsThisBut->hide();

    exitFiles->show();
    createNewFile->hide();
    listFiles->show();

}

// основная функия для проверки ответа
void MainWindow::compareString()
{
    if (strForCompareLeft == strForCompareRight)
    {
        labelStatus->setText("Правильно");
        checkStatus(true);
    }

    else
    {
        labelStatus->setText("Неправильно");
        if (strForCompareLeft != repeatWrongWords)
            wrongWords += strForCompareLeft + "\n";
        checkStatus(false);
        repeatWrongWords = strForCompareLeft;
    }
}

// обработка нажатия на кнопки (левого столбца) для связи
void MainWindow::tbSlotLeft()
{
    button1 = (QToolButton *)sender();
    button1->setStyleSheet("background-color:#fff;");

    for (int i = 0; i < 10; i++)
    {
        if (button1 == &tb[i])
            emit signalFromButtonLeft(le[i].text());
    }


    for(int i = 0; i < 10; i++)
        button1[i].setEnabled(false);

    checkClickedButton++;
}

// обработка нажатия на кнопки (правого столбца) для связи
void MainWindow::tbSlotRight()
{
    QString str = "QToolButton{background-color:#C1DCCB;border-radius:10px;color:#000;font-weight:bold;font-size:25px;min-height:30;min-width:30;}QToolButton:hover{background-color: rgb(85, 87, 83);}";
    button2 = (QToolButton *)sender();

    button2->setStyleSheet("background-color:#fff;");

    checkClickedButton++;

    if (checkClickedButton % 2 == 0)
    {
        sleep(500);
        button2->setStyleSheet(str);
        button1->setStyleSheet(str);
    }

    for (int i = 0; i < 10; i++)
    {
        if (button2 == &tb2[i])
            emit signalFromButtonRight(bufArrForCompare[i]); // emit значит, что отправляется сигнал,
    }                                                        // а не вызывается функция

}

// запись данных в строку для сравнивания непосредственно с окна (левого)
void MainWindow::slotStrLeft(QString string)
{
    strForCompareLeft = string;
}

// запись данных в строку для сравнивания непосредственно с окна (правого)
void MainWindow::slotStrRight(QString string)
{
    strForCompareRight = string;

    compareString();
}

// обработка нажатия на кнопку 'Result'
void MainWindow::resultClicked()
{
    resultWidget->show();
    animationWidget(*resultWidget, mainWidth / 16, mainHeight / 8, mainWidth - mainWidth / 8, mainHeight / 1.5, QEasingCurve::OutExpo, 1000);

    if (wrongWords.isEmpty())
    {
        teWrongWords->setText("Отлично!");
        labelTeWrongWords->hide();
    }

    else
    {
        labelTeWrongWords->show();
        teWrongWords->setText(wrongWords);
    }
}

void MainWindow::increaseSizele()
{
    animationWidget(*mainW1, mainWidth / 15, mainHeight / 13, mainWidth / 3, mainHeight / 1.3, QEasingCurve::Linear, 500);
    animationWidget(*mainW2, mainWidth / 1.65, mainHeight / 13, mainWidth / 3, mainHeight / 1.3, QEasingCurve::Linear, 500);
}

void MainWindow::reduceSizele()
{
    animationWidget(*mainW1, mainWidth / 10, mainHeight / 13, mainWidth / 4, mainHeight / 1.3, QEasingCurve::Linear, 500);
    animationWidget(*mainW2, mainWidth / 1.5, mainHeight / 13, mainWidth / 4, mainHeight / 1.3, QEasingCurve::Linear, 500);
}

// обработка нажатия на кнопку 'Enter'
void MainWindow::enterClicked()
{
    for (int i = 0; i < 10; i++)
    {
        QString str = le[i].text();
        QString str2 = le2[i].text();

        if (str.size() > 12 || str2.size() > 12)
            increaseSizele();

        if (str.size() > 20 || str2.size() > 20)
        {
            for (int j = 0; j < 10; j++)
            {
                le[j].setStyleSheet("font-size:22px;");
                le2[j].setStyleSheet("font-size:22px;");
            }
        }
    }


    for (int i = 0; i < 10; i++)
    {
        bufArrForCompare[i] = le[i].text();
        rightColumnForSave[i] = le2[i].text();
    }

    for (int i = 0; i < 10; i++)
    {
        if (le[i].text().isEmpty())
        {
            numEmpty = i;
            break;
        }
    }

    if (numEmpty != 0)
    {
        for (int i = numEmpty; i < 10; i++)
        {
            le[i].setStyleSheet("background-color:rgb(63, 105, 116)");
            le[i].setEnabled(false);
            tb[i].setEnabled(false);
            tb[i].setStyleSheet("background-color:rgb(99, 109, 103)");
            le2[i].setStyleSheet("background-color:rgb(63, 105, 116)");
            le2[i].setEnabled(false);
            tb2[i].setEnabled(false);
            tb2[i].setStyleSheet("background-color:rgb(99, 109, 103)");
        }
    }
}

// обработка нажатия на кнопку 'Create'
void MainWindow::createClicked()
{
    createFiles->show();
    nameCreateFiles->show();
    createFilesWidget->show();
    animationWidget(*createFilesWidget, mainWidth / 4, mainHeight / 4, mainWidth - mainWidth / 2, mainHeight / 4, QEasingCurve::OutExpo, 1000);
}

// обработка нажатия на кнопку 'Mix'
void MainWindow::mixClicked()
{
    srand(time(NULL));

    if (numEmpty == 0)
        numEmpty = 10;

    for (int i = numEmpty - 1; i > 0; i--)
    {
        int j = rand() % (i + 1);
        QString tmp = bufArrForCompare[j];
        bufArrForCompare[j] = bufArrForCompare[i];
        bufArrForCompare[i] = tmp;

        QString tmp2 = le2[j].text();
        le2[j].setText(le2[i].text());
        le2[i].setText(tmp2);
    }
}

// обработка нажатия на кнопку 'Save'
void MainWindow::saveClicked()
{
    checkFiles = false;
    createNewFile->show();
    listFiles->show();
    listFiles->setGeometry(0, mainHeight, mainWidth, mainHeight / 1.5);
    animationWidget(*listFiles, 0, mainHeight / 3, mainWidth, mainHeight / 1.5, QEasingCurve::OutExpo, 1000);
//    animationWidget(*createNewFile, createNewFile->width(), mainHeight / 3 - createNewFile->height() * 2, createNewFile->width(), createNewFile->height(), QEasingCurve::OutExpo, 1000);
    saveElement->setGeometry(0, listFiles->height() / 1.25, mainWidth, listFiles->height() / 20);
}

// обработка нажатия на кнопку 'Open Element'
void MainWindow::openElementClicked()
{
    numEmpty = 0;

    QString selFile;
    QString str;

    int i = 0;
    bool checkEnd = false;

    selFile = listFiles->currentItem()->text() + ".txt";

    QFile file(selFile);

    if (file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        while(!file.atEnd())
        {
            str = file.readLine();
            str.chop(1);
            if (str == "stop")
            {
                i = 0;
                checkEnd = true;
                continue;
            }

            if (checkEnd == false)
            {
                le[i].setText(str);
                i++;
            }

            if (checkEnd == true)
            {
                le2[i].setText(str);
                i++;
            }
        }
    }

    listFiles->hide();
    openElement->hide();
    exitFiles->hide();

    mainW0->show();
    mainW1->show();
    mainW2->show();
    mainW3->show();
    backMain->show();
}

// обработка нажатия на кнопку 'Save'
void MainWindow::saveElementClicked()
{
    QString selFile;
    QString forFiles;
    QString leftColumn;
    QString rightColumn;

    animationWidget(*listFiles, listFiles->x(), mainHeight, listFiles->width(), listFiles->height(), QEasingCurve::InBack, 700);

    selFile = listFiles->currentItem()->text() + ".txt";
    forFiles = listFiles->currentItem()->text();

    QFile fileData("dataBase.txt");

    if (fileData.open(QIODevice::WriteOnly | QIODevice::Append))
    {
        fileData.write(forFiles.toUtf8() + '\n');
        fileData.close();
    }

    QFile file(selFile);

    if (file.open(QIODevice::WriteOnly | QIODevice::Append))
    {
        for (int i = 0; i < numEmpty; i++)
        {
            file.write(le[i].text().toUtf8() + '\n');
        }
        file.write("stop\n");
        for (int i = 0; i < numEmpty; i++)
        {
            file.write(rightColumnForSave[i].toUtf8() + '\n');
        }
        file.close();
    }
}

// очистка памяти
MainWindow::~MainWindow()
{
    delete mainWidget;
    delete startLayout;
    delete mainVLayout0;
    delete mainVLayout1;
    delete mainVLayout2;
    delete exampleVLayout0;
    delete exampleVLayout1;
    delete exampleVLayout2;
    delete mainHLayout;
    delete buttonsLayout;
    delete filesLayout;
    delete resultLayout;
    delete mainNewBut;
    delete mainFilesBut;
    delete mainExitBut;
    delete mix;
    delete enter;
    delete save;
    delete clear;
    delete result;
    delete exitInformationBut;
    delete nextInformationBut;
    delete whatsThisBut;
    delete saveElement;
    delete openElement;
    delete exitFiles;
    delete createFiles;
    delete[] le;
    delete[] le2;
    delete[] leExampleLeft;
    delete[] leExampleRight;
    delete leNameFiles;
    delete teWrongWords;
    delete[] tb;
    delete[] tb2;
    delete[] tbExampleLeft;
    delete[] tbExampleRight;
    delete button1;
    delete button2;
    delete exitCreateFiles;
    delete exitResult;
    delete mainW0;
    delete mainW1;
    delete mainW2;
    delete mainW3;
    delete exampleW0;
    delete exampleW1;
    delete exampleW2;
    delete[] pages;
    delete information;
    delete exampleWidget;
    delete resultWidget;
    delete createFilesWidget;
    delete listFiles;
    delete elementsInformation;
    delete labelStatus;
    delete[] pagesPicture;
    delete labelResult;
    delete nameCreateFiles;
    delete labelInformation;
    delete labelListFiles;
    delete labelTeWrongWords;
    delete[] bufArrForCompare;
    delete strData;
    delete[] rightColumnForSave;
    delete firstPixmap;
    delete[] textInformation;
    delete createNewFile;
}
