// create_toneENV_settings.cpp
#include        "JVlibForm.h"
#include        <QtGui>

void JVlibForm::createToneENVactions() {
  QPen ToneEnv_blackLine(Qt::black, 0);
  ToneEnv_redLine.setColor(Qt::red);
  ToneEnv_dotLine.setStyle(Qt::DotLine);
  ToneEnv_dotLine.setColor(Qt::blue);
  
  ToneTVA_Bias_ptrbpMark = 0;
  ToneTVA_Bias_ptrHiLine = 0;
  ToneTVA_Bias_ptrLowLine = 0;
  ToneTVA_Bias_scene->setSceneRect(0, 0, 325, 135);
  ToneTVA_Bias_scene->addLine(40, 65, 295, 65, ToneEnv_blackLine);     // X axis
  ToneTVA_Bias_scene->addLine(40, 10, 40, 118, ToneEnv_blackLine);    // Y axis
  ToneTVA_Bias_scene->addLine(295, 10, 295, 118, ToneEnv_blackLine);    // Y2 axis
  ToneTVA_Bias_scene->addSimpleText("Level")->setPos(3,45);
  ToneTVA_Bias_scene->addSimpleText("+100")->setPos(5,10);
  ToneTVA_Bias_scene->addSimpleText("-100")->setPos(5,100);
  ToneTVA_Bias_bpMark.setLine(104,20,104,150);
  ToneTVA_Bias_LowLine.setLine(40, 65, ToneTVA_Bias_bpMark.x1(),65);
  ToneTVA_Bias_ptrLowLine = ToneTVA_Bias_scene->addLine(ToneTVA_Bias_LowLine,ToneEnv_redLine);
  ToneTVA_Bias_HiLine.setLine(ToneTVA_Bias_bpMark.x1(),65,295,65);
  ToneTVA_Bias_ptrHiLine = ToneTVA_Bias_scene->addLine(ToneTVA_Bias_HiLine,ToneEnv_redLine);
  ToneTVA_Bias_bpMark.setLine((64*2)+40,10,(64*2)+40,115);
  ToneTVA_Bias_ptrbpMark = ToneTVA_Bias_scene->addLine(ToneTVA_Bias_bpMark,ToneEnv_dotLine);
  ToneTVA_Bias_bpText = ToneTVA_Bias_scene->addSimpleText("C 4");
  ToneTVA_Bias_bpText->setPos(ToneTVA_Bias_bpMark.x1(), 120);
  JVlibForm::ToneTVA_BiasPoint_display->setScene(ToneTVA_Bias_scene);
  JVlibForm::ToneTVA_BiasPoint_display->show();
  
  ToneTVA_Env_scene->setSceneRect(0, -60, 390, 60);
  QLineF ToneTVA_Env_t4(384,0,384,0);
  QLineF ToneTVA_Env_offLine(384,0,384,-63);
  QLineF ToneTVA_Env_t1Mark(30,0,30,-63);
  QLineF ToneTVA_Env_t2Mark(30,0,30,-63);
  QLineF ToneTVA_Env_t3Mark(30,0,30,-63);
  QLineF ToneTVA_Env_t4Mark(380,0,380,-63);
  ToneTVA_Env_scene->addLine(10, 0, 394, 0, ToneEnv_blackLine);     // X axis
  ToneTVA_Env_scene->addLine(10, 0, 10, -63, ToneEnv_blackLine);    // Y axis
  ToneTVA_Env_scene->addLine(30,8,30,-63,ToneEnv_dotLine);   // Note-On line
  ToneTVA_Env_scene->addLine(ToneTVA_Env_offLine,ToneEnv_dotLine);
  ToneTVA_Env_scene->addSimpleText("Level")->setPos(-20,-35);
  ToneTVA_Env_scene->addSimpleText("127")->setPos(-12,-60);
  ToneTVA_Env_scene->addSimpleText("0")->setPos(0,-10);
  ToneTVA_Env_scene->addSimpleText("Time")->setPos(180,5);
  ToneTVA_Env_scene->addSimpleText("Key-On")->setPos(7,8);
  ToneTVA_Env_OffText = ToneTVA_Env_scene->addSimpleText("Key-Off");
  ToneTVA_Env_OffText->setPos(361,8);
  ToneTVA_Env_ptrT1 = 0;
  ToneTVA_Env_ptrT2 = 0;
  ToneTVA_Env_ptrT3 = 0;
  ToneTVA_Env_ptrT4 = 0;
  ToneTVA_Env_t1Text = 0;
  ToneTVA_Env_t2Text = 0;
  ToneTVA_Env_t3Text = 0;
  ToneTVA_Env_t4Text = 0;
  ToneTVA_Env_sndText = 0;
  ToneTVA_Env_ptrSustain = 0;
  JVlibForm::ToneTVA_Env_display->setScene(ToneTVA_Env_scene);
  JVlibForm::ToneTVA_Env_display->show();
  
  ToneTVF_Env_scene->setSceneRect(0, 0, 425, 175);
  QLineF ToneTVF_Env_t4(384,0,384,0);
  QLineF ToneTVF_Env_offLine(374,90,374,90);
  QLineF ToneTVF_Env_t1Mark(50,20,50,150);
  QLineF ToneTVF_Env_t2Mark(50,20,50,150);
  QLineF ToneTVF_Env_t3Mark(50,20,50,150);
  QLineF ToneTVF_Env_t4Mark(375,20,374,150);
  ToneTVF_Env_scene->addLine(40, 90, 380, 90, ToneEnv_blackLine);     // X axis
  ToneTVF_Env_scene->addLine(40, 20, 40, 157, ToneEnv_blackLine);    // Y axis
  ToneTVF_Env_scene->addLine(50,20,50,158,ToneEnv_dotLine);   // Note-On line
  ToneTVF_Env_scene->addLine(ToneTVF_Env_offLine,ToneEnv_dotLine);
  ToneTVF_Env_scene->addSimpleText("Cutoff\nFreq")->setPos(3,55);
  ToneTVF_Env_scene->addSimpleText("+")->setPos(30,20);
  ToneTVF_Env_scene->addSimpleText("-")->setPos(30,140);
  ToneTVF_Env_scene->addSimpleText("Time")->setPos(386,85);
  ToneTVF_Env_scene->addSimpleText("Key-On")->setPos(48,160);
  ToneTVF_Env_OffText = ToneTVF_Env_scene->addSimpleText("Key-Off");
  ToneTVF_Env_OffText->setPos(372,160);
  ToneTVF_Env_ptrT1 = 0;
  ToneTVF_Env_ptrT2 = 0;
  ToneTVF_Env_ptrT3 = 0;
  ToneTVF_Env_ptrT4 = 0;
  ToneTVF_Env_t1Text = 0;
  ToneTVF_Env_t2Text = 0;
  ToneTVF_Env_t3Text = 0;
  ToneTVF_Env_t4Text = 0;
  ToneTVF_Env_sndText = 0;
  ToneTVF_Env_ptrSustain = 0;
  JVlibForm::ToneTVF_Env_display->setScene(ToneTVF_Env_scene);
  JVlibForm::ToneTVF_Env_display->show();
  ToneTVF_Time1_select->setValue(1);
  ToneTVF_Time2_select->setValue(1);
  ToneTVF_Time3_select->setValue(1);
  ToneTVF_Time4_select->setValue(1);
  ToneTVA_Time1_select->setValue(1);
  ToneTVA_Time2_select->setValue(1);
  ToneTVA_Time3_select->setValue(1);
  ToneTVA_Time4_select->setValue(1);

  QPen Pitch_blackLine(Qt::black, 0);
  QLineF Pitch_Env_t4(384,0,384,0);
  QLineF Pitch_Env_offLine(374,90,374,90);
  QLineF Pitch_Env_t1Mark(50,20,50,150);
  QLineF Pitch_Env_t2Mark(50,20,50,150);
  QLineF Pitch_Env_t3Mark(50,20,50,150);
  QLineF Pitch_Env_t4Mark(374,20,374,150);
  Pitch_redLine.setColor(Qt::red);
  Pitch_dotLine.setStyle(Qt::DotLine);
  Pitch_dotLine.setColor(Qt::blue);
  Pitch_Env_scene->setSceneRect(0, 0, 425, 175);
  JVlibForm::Pitch_Env_display->setScene(Pitch_Env_scene);
  JVlibForm::Pitch_Env_display->show();
  Pitch_Env_scene->addLine(40, 90, 380, 90, Pitch_blackLine);     // X axis
  Pitch_Env_scene->addLine(40, 20, 40, 157, Pitch_blackLine);    // Y axis
  Pitch_Env_scene->addLine(50,20,50,158,Pitch_dotLine);   // Note-On line
  Pitch_Env_scene->addLine(Pitch_Env_offLine,Pitch_dotLine);
  Pitch_Env_scene->addSimpleText("Pitch")->setPos(3,55);
  Pitch_Env_scene->addSimpleText("+")->setPos(30,20);
  Pitch_Env_scene->addSimpleText("-")->setPos(30,140);
  Pitch_Env_scene->addSimpleText("Time")->setPos(386,85);
  Pitch_Env_scene->addSimpleText("Key-On")->setPos(48,160);
  Pitch_Env_OffText = Pitch_Env_scene->addSimpleText("Key-Off");
  Pitch_Env_OffText->setPos(372,160);
  Pitch_Env_ptrT1 = 0;
  Pitch_Env_ptrT2 = 0;
  Pitch_Env_ptrT3 = 0;
  Pitch_Env_ptrT4 = 0;
  Pitch_Env_t1Text = 0;
  Pitch_Env_t2Text = 0;
  Pitch_Env_t3Text = 0;
  Pitch_Env_t4Text = 0;
  Pitch_Env_sndText = 0;
  Pitch_Env_ptrSustain = 0;
  Pitch_Time1_select->setValue(1);
  Pitch_Time2_select->setValue(1);
  Pitch_Time3_select->setValue(1);
  Pitch_Time4_select->setValue(1);
}
