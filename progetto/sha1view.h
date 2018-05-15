#ifndef SHA1VIEW_H
#define SHA1VIEW_H
#include <QWidget>
#include <QMainWindow>
#include <QWidget>
#include <QTextEdit>
#include <QLabel>
#include <QSpinBox>
#include <QRadioButton>
#include <QPushButton>
#include <QKeySequenceEdit>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QString>
#include <QLineEdit>
#include <bitset>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

class sha1View:public QWidget{
    Q_OBJECT
private:
    //__box
    QHBoxLayout* content;
    QVBoxLayout* shaBox;
    QVBoxLayout* vBox1;
    QVBoxLayout* vBox2;
    QVBoxLayout* vBox3;
    //__obj
    QTextEdit* inputText;
    QTextEdit* outputText;
    QLabel* keyTitle;
    QLabel* inputTitle;
    QLabel* outputTitle;
    QSpinBox* keyText;
    QRadioButton* sha1Button;
    QRadioButton* sha224Button;
    QRadioButton* sha256Button;
    QRadioButton* sha384Button;
    QRadioButton* sha512Button;
    QPushButton* convertButton;
    QPushButton* copyButton;
    QPushButton* resetButton;
public:
    explicit sha1View(QWidget*parent = 0);
signals:
    //convert button
    void convertMethodS(QString,ushort,int);
public slots:
    //convert button
    void convertS();
    void sha1OutputS(QString);
};

#endif // SHA1VIEW_H
