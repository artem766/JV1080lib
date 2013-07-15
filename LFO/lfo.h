#ifndef LFO_H
#define LFO_H

#include <QMainWindow>
#include <QtGui>

namespace Ui {
    class LFO;
}

class LFO : public QMainWindow {
    Q_OBJECT
public:
    LFO(QGraphicsView *LFO_display, QWidget *parent = 0);
    ~LFO();
    void setDelay(int);
    void setFade(int);
    void setFadeMode(int);
    void setDepth(int);
    void setRate(int);

private:
    static QPen blackLine;
    static QPen dotLine;
    static QPen redLine;
    static QGraphicsScene *scene;
    static QLineF FadeUpLine;
    static QLineF FadeDownLine;
    static QLineF FadeStartLine;
    static QLineF FadeEndLine;
    static QLineF EffectUpLine;
    static QLineF EffectDownLine;
    static QLineF OffLine;
    static QGraphicsLineItem *ptrFadeUp;
    static QGraphicsLineItem *ptrFadeDown;
    static QGraphicsLineItem *ptrEffectUp;
    static QGraphicsLineItem *ptrEffectDown;
    static QGraphicsLineItem *ptrFadeStartLine;
    static QGraphicsLineItem *ptrFadeEndLine;
    static QGraphicsLineItem *ptrOffLine;
    QGraphicsSimpleTextItem *OffText;
    QGraphicsSimpleTextItem *DelayText;
    QGraphicsSimpleTextItem *FadeText;
    QGraphicsSimpleTextItem *EffectText;
    inline void setOffIn();
    inline void setOffOut();
    void FillEffect();
    static int thisRate;
    static int thisDepth;
    static int thisFadeMode;
    static int thisDelay;
    static int thisFade;

private slots:
    void on_FadeMode_select_currentIndexChanged(int index);
    void on_Fade_select_valueChanged(int value);
    void on_Delay_select_valueChanged(int value);
    void on_Rate_select_valueChanged();
    void on_Depth_select_valueChanged();
};

#endif // LFO_H