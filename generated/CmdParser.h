
// Generated from /place/sandbox-data/tasks/8/1/2625932518/__FUSE/mount_path_2c1dce34-9bbf-4bc5-b2ae-da9b834667ac/trunk/arcadia/devtools/ymake/lang/CmdParser.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"




class  CmdParser : public antlr4::Parser {
public:
  enum {
    LPAREN = 1, RPAREN = 2, TEXT_RAW = 3, SQSTR_BEGIN = 4, DQSTR_BEGIN = 5, 
    TEXT_NOP = 6, TEXT_VAR = 7, TEXT_XFM = 8, CMD_SEP = 9, ARG_SEP = 10, 
    SQSTR_END = 11, SQSTR_RAW = 12, SQSTR_NOP = 13, SQSTR_VAR = 14, SQSTR_XFM = 15, 
    DQSTR_END = 16, DQSTR_RAW = 17, DQSTR_NOP = 18, DQSTR_VAR = 19, DQSTR_XFM = 20, 
    XFM_END = 21, MOD_ARG = 22, MOD_SEP = 23, MOD_END = 24, STRING = 25, 
    IDENTIFIER = 26, MOD_ARG_VALUE_TEXT = 27, MOD_ARG_VALUE_VARIABLE = 28, 
    MOD_ARG_VALUE_EVALUATION = 29
  };

  enum {
    RuleMain = 0, RuleScr = 1, RuleCmd = 2, RuleArg = 3, RuleCallArg = 4, 
    RuleArgSep = 5, RuleCmdSep = 6, RuleTermsRO = 7, RuleTermsRA = 8, RuleTermsSQ = 9, 
    RuleTermsDQ = 10, RuleTermO = 11, RuleTermA = 12, RuleTermC = 13, RuleTermV = 14, 
    RuleTermX = 15, RuleTermSQR = 16, RuleTermSQV = 17, RuleTermSQX = 18, 
    RuleTermDQR = 19, RuleTermDQV = 20, RuleTermDQX = 21, RuleXModifier = 22, 
    RuleXModKey = 23, RuleXModValue = 24, RuleXModValueT = 25, RuleXModValueV = 26, 
    RuleXModValueE = 27, RuleXBody = 28, RuleXBodyIdentifier = 29, RuleXBodyString = 30
  };

  explicit CmdParser(antlr4::TokenStream *input);

  CmdParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~CmdParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class MainContext;
  class ScrContext;
  class CmdContext;
  class ArgContext;
  class CallArgContext;
  class ArgSepContext;
  class CmdSepContext;
  class TermsROContext;
  class TermsRAContext;
  class TermsSQContext;
  class TermsDQContext;
  class TermOContext;
  class TermAContext;
  class TermCContext;
  class TermVContext;
  class TermXContext;
  class TermSQRContext;
  class TermSQVContext;
  class TermSQXContext;
  class TermDQRContext;
  class TermDQVContext;
  class TermDQXContext;
  class XModifierContext;
  class XModKeyContext;
  class XModValueContext;
  class XModValueTContext;
  class XModValueVContext;
  class XModValueEContext;
  class XBodyContext;
  class XBodyIdentifierContext;
  class XBodyStringContext; 

  class  MainContext : public antlr4::ParserRuleContext {
  public:
    MainContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<ArgSepContext *> argSep();
    ArgSepContext* argSep(size_t i);
    std::vector<CmdSepContext *> cmdSep();
    CmdSepContext* cmdSep(size_t i);
    ScrContext *scr();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MainContext* main();

  class  ScrContext : public antlr4::ParserRuleContext {
  public:
    ScrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<CmdContext *> cmd();
    CmdContext* cmd(size_t i);
    std::vector<CmdSepContext *> cmdSep();
    CmdSepContext* cmdSep(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ScrContext* scr();

  class  CmdContext : public antlr4::ParserRuleContext {
  public:
    CmdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ArgContext *> arg();
    ArgContext* arg(size_t i);
    std::vector<ArgSepContext *> argSep();
    ArgSepContext* argSep(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CmdContext* cmd();

  class  ArgContext : public antlr4::ParserRuleContext {
  public:
    ArgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TermsROContext *> termsRO();
    TermsROContext* termsRO(size_t i);
    std::vector<TermsSQContext *> termsSQ();
    TermsSQContext* termsSQ(size_t i);
    std::vector<TermsDQContext *> termsDQ();
    TermsDQContext* termsDQ(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgContext* arg();

  class  CallArgContext : public antlr4::ParserRuleContext {
  public:
    CallArgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TermsRAContext *> termsRA();
    TermsRAContext* termsRA(size_t i);
    std::vector<TermsSQContext *> termsSQ();
    TermsSQContext* termsSQ(size_t i);
    std::vector<TermsDQContext *> termsDQ();
    TermsDQContext* termsDQ(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CallArgContext* callArg();

  class  ArgSepContext : public antlr4::ParserRuleContext {
  public:
    ArgSepContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ARG_SEP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgSepContext* argSep();

  class  CmdSepContext : public antlr4::ParserRuleContext {
  public:
    CmdSepContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CMD_SEP();
    antlr4::tree::TerminalNode *ARG_SEP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CmdSepContext* cmdSep();

  class  TermsROContext : public antlr4::ParserRuleContext {
  public:
    TermsROContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TermOContext *> termO();
    TermOContext* termO(size_t i);
    std::vector<TermCContext *> termC();
    TermCContext* termC(size_t i);
    std::vector<TermVContext *> termV();
    TermVContext* termV(size_t i);
    std::vector<TermXContext *> termX();
    TermXContext* termX(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TermsROContext* termsRO();

  class  TermsRAContext : public antlr4::ParserRuleContext {
  public:
    TermsRAContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TermAContext *> termA();
    TermAContext* termA(size_t i);
    std::vector<TermCContext *> termC();
    TermCContext* termC(size_t i);
    std::vector<TermVContext *> termV();
    TermVContext* termV(size_t i);
    std::vector<TermXContext *> termX();
    TermXContext* termX(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TermsRAContext* termsRA();

  class  TermsSQContext : public antlr4::ParserRuleContext {
  public:
    TermsSQContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SQSTR_BEGIN();
    antlr4::tree::TerminalNode *SQSTR_END();
    std::vector<TermSQRContext *> termSQR();
    TermSQRContext* termSQR(size_t i);
    std::vector<TermSQVContext *> termSQV();
    TermSQVContext* termSQV(size_t i);
    std::vector<TermSQXContext *> termSQX();
    TermSQXContext* termSQX(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TermsSQContext* termsSQ();

  class  TermsDQContext : public antlr4::ParserRuleContext {
  public:
    TermsDQContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DQSTR_BEGIN();
    antlr4::tree::TerminalNode *DQSTR_END();
    std::vector<TermDQRContext *> termDQR();
    TermDQRContext* termDQR(size_t i);
    std::vector<TermDQVContext *> termDQV();
    TermDQVContext* termDQV(size_t i);
    std::vector<TermDQXContext *> termDQX();
    TermDQXContext* termDQX(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TermsDQContext* termsDQ();

  class  TermOContext : public antlr4::ParserRuleContext {
  public:
    TermOContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> TEXT_RAW();
    antlr4::tree::TerminalNode* TEXT_RAW(size_t i);
    std::vector<antlr4::tree::TerminalNode *> TEXT_NOP();
    antlr4::tree::TerminalNode* TEXT_NOP(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LPAREN();
    antlr4::tree::TerminalNode* LPAREN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RPAREN();
    antlr4::tree::TerminalNode* RPAREN(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TermOContext* termO();

  class  TermAContext : public antlr4::ParserRuleContext {
  public:
    TermAContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> TEXT_RAW();
    antlr4::tree::TerminalNode* TEXT_RAW(size_t i);
    std::vector<antlr4::tree::TerminalNode *> TEXT_NOP();
    antlr4::tree::TerminalNode* TEXT_NOP(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TermAContext* termA();

  class  TermCContext : public antlr4::ParserRuleContext {
  public:
    TermCContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TEXT_VAR();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<ArgSepContext *> argSep();
    ArgSepContext* argSep(size_t i);
    std::vector<CallArgContext *> callArg();
    CallArgContext* callArg(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TermCContext* termC();

  class  TermVContext : public antlr4::ParserRuleContext {
  public:
    TermVContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TEXT_VAR();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TermVContext* termV();

  class  TermXContext : public antlr4::ParserRuleContext {
  public:
    TermXContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TEXT_XFM();
    XBodyContext *xBody();
    antlr4::tree::TerminalNode *XFM_END();
    std::vector<XModifierContext *> xModifier();
    XModifierContext* xModifier(size_t i);
    antlr4::tree::TerminalNode *MOD_END();
    std::vector<antlr4::tree::TerminalNode *> MOD_SEP();
    antlr4::tree::TerminalNode* MOD_SEP(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TermXContext* termX();

  class  TermSQRContext : public antlr4::ParserRuleContext {
  public:
    TermSQRContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SQSTR_RAW();
    antlr4::tree::TerminalNode *SQSTR_NOP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TermSQRContext* termSQR();

  class  TermSQVContext : public antlr4::ParserRuleContext {
  public:
    TermSQVContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SQSTR_VAR();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TermSQVContext* termSQV();

  class  TermSQXContext : public antlr4::ParserRuleContext {
  public:
    TermSQXContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SQSTR_XFM();
    XBodyContext *xBody();
    antlr4::tree::TerminalNode *XFM_END();
    std::vector<XModifierContext *> xModifier();
    XModifierContext* xModifier(size_t i);
    antlr4::tree::TerminalNode *MOD_END();
    std::vector<antlr4::tree::TerminalNode *> MOD_SEP();
    antlr4::tree::TerminalNode* MOD_SEP(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TermSQXContext* termSQX();

  class  TermDQRContext : public antlr4::ParserRuleContext {
  public:
    TermDQRContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DQSTR_RAW();
    antlr4::tree::TerminalNode *DQSTR_NOP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TermDQRContext* termDQR();

  class  TermDQVContext : public antlr4::ParserRuleContext {
  public:
    TermDQVContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DQSTR_VAR();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TermDQVContext* termDQV();

  class  TermDQXContext : public antlr4::ParserRuleContext {
  public:
    TermDQXContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DQSTR_XFM();
    XBodyContext *xBody();
    antlr4::tree::TerminalNode *XFM_END();
    std::vector<XModifierContext *> xModifier();
    XModifierContext* xModifier(size_t i);
    antlr4::tree::TerminalNode *MOD_END();
    std::vector<antlr4::tree::TerminalNode *> MOD_SEP();
    antlr4::tree::TerminalNode* MOD_SEP(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TermDQXContext* termDQX();

  class  XModifierContext : public antlr4::ParserRuleContext {
  public:
    XModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    XModKeyContext *xModKey();
    antlr4::tree::TerminalNode *MOD_ARG();
    XModValueContext *xModValue();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  XModifierContext* xModifier();

  class  XModKeyContext : public antlr4::ParserRuleContext {
  public:
    XModKeyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  XModKeyContext* xModKey();

  class  XModValueContext : public antlr4::ParserRuleContext {
  public:
    XModValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<XModValueTContext *> xModValueT();
    XModValueTContext* xModValueT(size_t i);
    std::vector<XModValueVContext *> xModValueV();
    XModValueVContext* xModValueV(size_t i);
    std::vector<XModValueEContext *> xModValueE();
    XModValueEContext* xModValueE(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  XModValueContext* xModValue();

  class  XModValueTContext : public antlr4::ParserRuleContext {
  public:
    XModValueTContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MOD_ARG_VALUE_TEXT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  XModValueTContext* xModValueT();

  class  XModValueVContext : public antlr4::ParserRuleContext {
  public:
    XModValueVContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MOD_ARG_VALUE_VARIABLE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  XModValueVContext* xModValueV();

  class  XModValueEContext : public antlr4::ParserRuleContext {
  public:
    XModValueEContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MOD_ARG_VALUE_EVALUATION();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  XModValueEContext* xModValueE();

  class  XBodyContext : public antlr4::ParserRuleContext {
  public:
    XBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    XBodyIdentifierContext *xBodyIdentifier();
    XBodyStringContext *xBodyString();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  XBodyContext* xBody();

  class  XBodyIdentifierContext : public antlr4::ParserRuleContext {
  public:
    XBodyIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  XBodyIdentifierContext* xBodyIdentifier();

  class  XBodyStringContext : public antlr4::ParserRuleContext {
  public:
    XBodyStringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  XBodyStringContext* xBodyString();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

