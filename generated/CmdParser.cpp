
// Generated from /place/sandbox-data/tasks/8/1/2625932518/__FUSE/mount_path_2c1dce34-9bbf-4bc5-b2ae-da9b834667ac/trunk/arcadia/devtools/ymake/lang/CmdParser.g4 by ANTLR 4.11.1


#include "CmdParserVisitor.h"

#include "CmdParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct CmdParserStaticData final {
  CmdParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  CmdParserStaticData(const CmdParserStaticData&) = delete;
  CmdParserStaticData(CmdParserStaticData&&) = delete;
  CmdParserStaticData& operator=(const CmdParserStaticData&) = delete;
  CmdParserStaticData& operator=(CmdParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag cmdparserParserOnceFlag;
CmdParserStaticData *cmdparserParserStaticData = nullptr;

void cmdparserParserInitialize() {
  assert(cmdparserParserStaticData == nullptr);
  auto staticData = std::make_unique<CmdParserStaticData>(
    std::vector<std::string>{
      "main", "scr", "cmd", "arg", "callArg", "argSep", "cmdSep", "termsRO", 
      "termsRA", "termsSQ", "termsDQ", "termO", "termA", "termC", "termV", 
      "termX", "termSQR", "termSQV", "termSQX", "termDQR", "termDQV", "termDQX", 
      "xModifier", "xModKey", "xModValue", "xModValueT", "xModValueV", "xModValueE", 
      "xBody", "xBodyIdentifier", "xBodyString"
    },
    std::vector<std::string>{
      "", "'('", "')'", "", "", "", "", "", "", "'&&'", "", "", "", "", 
      "", "", "", "", "", "", "", "'}'", "'='"
    },
    std::vector<std::string>{
      "", "LPAREN", "RPAREN", "TEXT_RAW", "SQSTR_BEGIN", "DQSTR_BEGIN", 
      "TEXT_NOP", "TEXT_VAR", "TEXT_XFM", "CMD_SEP", "ARG_SEP", "SQSTR_END", 
      "SQSTR_RAW", "SQSTR_NOP", "SQSTR_VAR", "SQSTR_XFM", "DQSTR_END", "DQSTR_RAW", 
      "DQSTR_NOP", "DQSTR_VAR", "DQSTR_XFM", "XFM_END", "MOD_ARG", "MOD_SEP", 
      "MOD_END", "STRING", "IDENTIFIER", "MOD_ARG_VALUE_TEXT", "MOD_ARG_VALUE_VARIABLE", 
      "MOD_ARG_VALUE_EVALUATION"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,29,297,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,1,0,5,0,64,8,0,10,0,12,0,67,9,0,1,0,5,0,70,8,0,
  	10,0,12,0,73,9,0,1,0,3,0,76,8,0,1,0,1,0,1,1,1,1,4,1,82,8,1,11,1,12,1,
  	83,1,1,1,1,5,1,88,8,1,10,1,12,1,91,9,1,1,1,5,1,94,8,1,10,1,12,1,97,9,
  	1,1,2,1,2,4,2,101,8,2,11,2,12,2,102,1,2,1,2,5,2,107,8,2,10,2,12,2,110,
  	9,2,1,2,5,2,113,8,2,10,2,12,2,116,9,2,1,3,1,3,1,3,4,3,121,8,3,11,3,12,
  	3,122,1,4,1,4,1,4,4,4,128,8,4,11,4,12,4,129,1,5,1,5,1,6,1,6,3,6,136,8,
  	6,1,7,1,7,1,7,1,7,4,7,142,8,7,11,7,12,7,143,1,8,1,8,1,8,1,8,4,8,150,8,
  	8,11,8,12,8,151,1,9,1,9,1,9,1,9,5,9,158,8,9,10,9,12,9,161,9,9,1,9,1,9,
  	1,10,1,10,1,10,1,10,5,10,169,8,10,10,10,12,10,172,9,10,1,10,1,10,1,11,
  	4,11,177,8,11,11,11,12,11,178,1,12,4,12,182,8,12,11,12,12,12,183,1,13,
  	1,13,1,13,3,13,189,8,13,1,13,1,13,1,13,1,13,5,13,195,8,13,10,13,12,13,
  	198,9,13,3,13,200,8,13,1,13,3,13,203,8,13,1,13,1,13,1,14,1,14,1,15,1,
  	15,1,15,1,15,5,15,213,8,15,10,15,12,15,216,9,15,1,15,1,15,1,15,3,15,221,
  	8,15,1,15,1,15,1,15,1,16,1,16,1,17,1,17,1,18,1,18,1,18,1,18,5,18,234,
  	8,18,10,18,12,18,237,9,18,1,18,1,18,1,18,3,18,242,8,18,1,18,1,18,1,18,
  	1,19,1,19,1,20,1,20,1,21,1,21,1,21,1,21,5,21,255,8,21,10,21,12,21,258,
  	9,21,1,21,1,21,1,21,3,21,263,8,21,1,21,1,21,1,21,1,22,1,22,1,22,3,22,
  	271,8,22,1,23,1,23,1,24,1,24,1,24,5,24,278,8,24,10,24,12,24,281,9,24,
  	1,25,1,25,1,26,1,26,1,27,1,27,1,28,1,28,3,28,291,8,28,1,29,1,29,1,30,
  	1,30,1,30,0,0,31,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,
  	38,40,42,44,46,48,50,52,54,56,58,60,0,4,2,0,1,3,6,6,2,0,3,3,6,6,1,0,12,
  	13,1,0,17,18,312,0,65,1,0,0,0,2,79,1,0,0,0,4,98,1,0,0,0,6,120,1,0,0,0,
  	8,127,1,0,0,0,10,131,1,0,0,0,12,133,1,0,0,0,14,141,1,0,0,0,16,149,1,0,
  	0,0,18,153,1,0,0,0,20,164,1,0,0,0,22,176,1,0,0,0,24,181,1,0,0,0,26,185,
  	1,0,0,0,28,206,1,0,0,0,30,208,1,0,0,0,32,225,1,0,0,0,34,227,1,0,0,0,36,
  	229,1,0,0,0,38,246,1,0,0,0,40,248,1,0,0,0,42,250,1,0,0,0,44,267,1,0,0,
  	0,46,272,1,0,0,0,48,279,1,0,0,0,50,282,1,0,0,0,52,284,1,0,0,0,54,286,
  	1,0,0,0,56,290,1,0,0,0,58,292,1,0,0,0,60,294,1,0,0,0,62,64,3,10,5,0,63,
  	62,1,0,0,0,64,67,1,0,0,0,65,63,1,0,0,0,65,66,1,0,0,0,66,71,1,0,0,0,67,
  	65,1,0,0,0,68,70,3,12,6,0,69,68,1,0,0,0,70,73,1,0,0,0,71,69,1,0,0,0,71,
  	72,1,0,0,0,72,75,1,0,0,0,73,71,1,0,0,0,74,76,3,2,1,0,75,74,1,0,0,0,75,
  	76,1,0,0,0,76,77,1,0,0,0,77,78,5,0,0,1,78,1,1,0,0,0,79,89,3,4,2,0,80,
  	82,3,12,6,0,81,80,1,0,0,0,82,83,1,0,0,0,83,81,1,0,0,0,83,84,1,0,0,0,84,
  	85,1,0,0,0,85,86,3,4,2,0,86,88,1,0,0,0,87,81,1,0,0,0,88,91,1,0,0,0,89,
  	87,1,0,0,0,89,90,1,0,0,0,90,95,1,0,0,0,91,89,1,0,0,0,92,94,3,12,6,0,93,
  	92,1,0,0,0,94,97,1,0,0,0,95,93,1,0,0,0,95,96,1,0,0,0,96,3,1,0,0,0,97,
  	95,1,0,0,0,98,108,3,6,3,0,99,101,3,10,5,0,100,99,1,0,0,0,101,102,1,0,
  	0,0,102,100,1,0,0,0,102,103,1,0,0,0,103,104,1,0,0,0,104,105,3,6,3,0,105,
  	107,1,0,0,0,106,100,1,0,0,0,107,110,1,0,0,0,108,106,1,0,0,0,108,109,1,
  	0,0,0,109,114,1,0,0,0,110,108,1,0,0,0,111,113,3,10,5,0,112,111,1,0,0,
  	0,113,116,1,0,0,0,114,112,1,0,0,0,114,115,1,0,0,0,115,5,1,0,0,0,116,114,
  	1,0,0,0,117,121,3,14,7,0,118,121,3,18,9,0,119,121,3,20,10,0,120,117,1,
  	0,0,0,120,118,1,0,0,0,120,119,1,0,0,0,121,122,1,0,0,0,122,120,1,0,0,0,
  	122,123,1,0,0,0,123,7,1,0,0,0,124,128,3,16,8,0,125,128,3,18,9,0,126,128,
  	3,20,10,0,127,124,1,0,0,0,127,125,1,0,0,0,127,126,1,0,0,0,128,129,1,0,
  	0,0,129,127,1,0,0,0,129,130,1,0,0,0,130,9,1,0,0,0,131,132,5,10,0,0,132,
  	11,1,0,0,0,133,135,5,9,0,0,134,136,5,10,0,0,135,134,1,0,0,0,135,136,1,
  	0,0,0,136,13,1,0,0,0,137,142,3,22,11,0,138,142,3,26,13,0,139,142,3,28,
  	14,0,140,142,3,30,15,0,141,137,1,0,0,0,141,138,1,0,0,0,141,139,1,0,0,
  	0,141,140,1,0,0,0,142,143,1,0,0,0,143,141,1,0,0,0,143,144,1,0,0,0,144,
  	15,1,0,0,0,145,150,3,24,12,0,146,150,3,26,13,0,147,150,3,28,14,0,148,
  	150,3,30,15,0,149,145,1,0,0,0,149,146,1,0,0,0,149,147,1,0,0,0,149,148,
  	1,0,0,0,150,151,1,0,0,0,151,149,1,0,0,0,151,152,1,0,0,0,152,17,1,0,0,
  	0,153,159,5,4,0,0,154,158,3,32,16,0,155,158,3,34,17,0,156,158,3,36,18,
  	0,157,154,1,0,0,0,157,155,1,0,0,0,157,156,1,0,0,0,158,161,1,0,0,0,159,
  	157,1,0,0,0,159,160,1,0,0,0,160,162,1,0,0,0,161,159,1,0,0,0,162,163,5,
  	11,0,0,163,19,1,0,0,0,164,170,5,5,0,0,165,169,3,38,19,0,166,169,3,40,
  	20,0,167,169,3,42,21,0,168,165,1,0,0,0,168,166,1,0,0,0,168,167,1,0,0,
  	0,169,172,1,0,0,0,170,168,1,0,0,0,170,171,1,0,0,0,171,173,1,0,0,0,172,
  	170,1,0,0,0,173,174,5,16,0,0,174,21,1,0,0,0,175,177,7,0,0,0,176,175,1,
  	0,0,0,177,178,1,0,0,0,178,176,1,0,0,0,178,179,1,0,0,0,179,23,1,0,0,0,
  	180,182,7,1,0,0,181,180,1,0,0,0,182,183,1,0,0,0,183,181,1,0,0,0,183,184,
  	1,0,0,0,184,25,1,0,0,0,185,186,5,7,0,0,186,188,5,1,0,0,187,189,3,10,5,
  	0,188,187,1,0,0,0,188,189,1,0,0,0,189,199,1,0,0,0,190,196,3,8,4,0,191,
  	192,3,10,5,0,192,193,3,8,4,0,193,195,1,0,0,0,194,191,1,0,0,0,195,198,
  	1,0,0,0,196,194,1,0,0,0,196,197,1,0,0,0,197,200,1,0,0,0,198,196,1,0,0,
  	0,199,190,1,0,0,0,199,200,1,0,0,0,200,202,1,0,0,0,201,203,3,10,5,0,202,
  	201,1,0,0,0,202,203,1,0,0,0,203,204,1,0,0,0,204,205,5,2,0,0,205,27,1,
  	0,0,0,206,207,5,7,0,0,207,29,1,0,0,0,208,220,5,8,0,0,209,210,3,44,22,
  	0,210,211,5,23,0,0,211,213,1,0,0,0,212,209,1,0,0,0,213,216,1,0,0,0,214,
  	212,1,0,0,0,214,215,1,0,0,0,215,217,1,0,0,0,216,214,1,0,0,0,217,218,3,
  	44,22,0,218,219,5,24,0,0,219,221,1,0,0,0,220,214,1,0,0,0,220,221,1,0,
  	0,0,221,222,1,0,0,0,222,223,3,56,28,0,223,224,5,21,0,0,224,31,1,0,0,0,
  	225,226,7,2,0,0,226,33,1,0,0,0,227,228,5,14,0,0,228,35,1,0,0,0,229,241,
  	5,15,0,0,230,231,3,44,22,0,231,232,5,23,0,0,232,234,1,0,0,0,233,230,1,
  	0,0,0,234,237,1,0,0,0,235,233,1,0,0,0,235,236,1,0,0,0,236,238,1,0,0,0,
  	237,235,1,0,0,0,238,239,3,44,22,0,239,240,5,24,0,0,240,242,1,0,0,0,241,
  	235,1,0,0,0,241,242,1,0,0,0,242,243,1,0,0,0,243,244,3,56,28,0,244,245,
  	5,21,0,0,245,37,1,0,0,0,246,247,7,3,0,0,247,39,1,0,0,0,248,249,5,19,0,
  	0,249,41,1,0,0,0,250,262,5,20,0,0,251,252,3,44,22,0,252,253,5,23,0,0,
  	253,255,1,0,0,0,254,251,1,0,0,0,255,258,1,0,0,0,256,254,1,0,0,0,256,257,
  	1,0,0,0,257,259,1,0,0,0,258,256,1,0,0,0,259,260,3,44,22,0,260,261,5,24,
  	0,0,261,263,1,0,0,0,262,256,1,0,0,0,262,263,1,0,0,0,263,264,1,0,0,0,264,
  	265,3,56,28,0,265,266,5,21,0,0,266,43,1,0,0,0,267,270,3,46,23,0,268,269,
  	5,22,0,0,269,271,3,48,24,0,270,268,1,0,0,0,270,271,1,0,0,0,271,45,1,0,
  	0,0,272,273,5,26,0,0,273,47,1,0,0,0,274,278,3,50,25,0,275,278,3,52,26,
  	0,276,278,3,54,27,0,277,274,1,0,0,0,277,275,1,0,0,0,277,276,1,0,0,0,278,
  	281,1,0,0,0,279,277,1,0,0,0,279,280,1,0,0,0,280,49,1,0,0,0,281,279,1,
  	0,0,0,282,283,5,27,0,0,283,51,1,0,0,0,284,285,5,28,0,0,285,53,1,0,0,0,
  	286,287,5,29,0,0,287,55,1,0,0,0,288,291,3,58,29,0,289,291,3,60,30,0,290,
  	288,1,0,0,0,290,289,1,0,0,0,291,57,1,0,0,0,292,293,5,26,0,0,293,59,1,
  	0,0,0,294,295,5,25,0,0,295,61,1,0,0,0,38,65,71,75,83,89,95,102,108,114,
  	120,122,127,129,135,141,143,149,151,157,159,168,170,178,183,188,196,199,
  	202,214,220,235,241,256,262,270,277,279,290
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  cmdparserParserStaticData = staticData.release();
}

}

CmdParser::CmdParser(TokenStream *input) : CmdParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

CmdParser::CmdParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  CmdParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *cmdparserParserStaticData->atn, cmdparserParserStaticData->decisionToDFA, cmdparserParserStaticData->sharedContextCache, options);
}

CmdParser::~CmdParser() {
  delete _interpreter;
}

const atn::ATN& CmdParser::getATN() const {
  return *cmdparserParserStaticData->atn;
}

std::string CmdParser::getGrammarFileName() const {
  return "CmdParser.g4";
}

const std::vector<std::string>& CmdParser::getRuleNames() const {
  return cmdparserParserStaticData->ruleNames;
}

const dfa::Vocabulary& CmdParser::getVocabulary() const {
  return cmdparserParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView CmdParser::getSerializedATN() const {
  return cmdparserParserStaticData->serializedATN;
}


//----------------- MainContext ------------------------------------------------------------------

CmdParser::MainContext::MainContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CmdParser::MainContext::EOF() {
  return getToken(CmdParser::EOF, 0);
}

std::vector<CmdParser::ArgSepContext *> CmdParser::MainContext::argSep() {
  return getRuleContexts<CmdParser::ArgSepContext>();
}

CmdParser::ArgSepContext* CmdParser::MainContext::argSep(size_t i) {
  return getRuleContext<CmdParser::ArgSepContext>(i);
}

std::vector<CmdParser::CmdSepContext *> CmdParser::MainContext::cmdSep() {
  return getRuleContexts<CmdParser::CmdSepContext>();
}

CmdParser::CmdSepContext* CmdParser::MainContext::cmdSep(size_t i) {
  return getRuleContext<CmdParser::CmdSepContext>(i);
}

CmdParser::ScrContext* CmdParser::MainContext::scr() {
  return getRuleContext<CmdParser::ScrContext>(0);
}


size_t CmdParser::MainContext::getRuleIndex() const {
  return CmdParser::RuleMain;
}


std::any CmdParser::MainContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CmdParserVisitor*>(visitor))
    return parserVisitor->visitMain(this);
  else
    return visitor->visitChildren(this);
}

CmdParser::MainContext* CmdParser::main() {
  MainContext *_localctx = _tracker.createInstance<MainContext>(_ctx, getState());
  enterRule(_localctx, 0, CmdParser::RuleMain);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(65);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CmdParser::ARG_SEP) {
      setState(62);
      argSep();
      setState(67);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(71);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CmdParser::CMD_SEP) {
      setState(68);
      cmdSep();
      setState(73);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(75);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 510) != 0) {
      setState(74);
      scr();
    }
    setState(77);
    match(CmdParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ScrContext ------------------------------------------------------------------

CmdParser::ScrContext::ScrContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CmdParser::CmdContext *> CmdParser::ScrContext::cmd() {
  return getRuleContexts<CmdParser::CmdContext>();
}

CmdParser::CmdContext* CmdParser::ScrContext::cmd(size_t i) {
  return getRuleContext<CmdParser::CmdContext>(i);
}

std::vector<CmdParser::CmdSepContext *> CmdParser::ScrContext::cmdSep() {
  return getRuleContexts<CmdParser::CmdSepContext>();
}

CmdParser::CmdSepContext* CmdParser::ScrContext::cmdSep(size_t i) {
  return getRuleContext<CmdParser::CmdSepContext>(i);
}


size_t CmdParser::ScrContext::getRuleIndex() const {
  return CmdParser::RuleScr;
}


std::any CmdParser::ScrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CmdParserVisitor*>(visitor))
    return parserVisitor->visitScr(this);
  else
    return visitor->visitChildren(this);
}

CmdParser::ScrContext* CmdParser::scr() {
  ScrContext *_localctx = _tracker.createInstance<ScrContext>(_ctx, getState());
  enterRule(_localctx, 2, CmdParser::RuleScr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(79);
    cmd();
    setState(89);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(81); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(80);
          cmdSep();
          setState(83); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == CmdParser::CMD_SEP);
        setState(85);
        cmd(); 
      }
      setState(91);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    }
    setState(95);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CmdParser::CMD_SEP) {
      setState(92);
      cmdSep();
      setState(97);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CmdContext ------------------------------------------------------------------

CmdParser::CmdContext::CmdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CmdParser::ArgContext *> CmdParser::CmdContext::arg() {
  return getRuleContexts<CmdParser::ArgContext>();
}

CmdParser::ArgContext* CmdParser::CmdContext::arg(size_t i) {
  return getRuleContext<CmdParser::ArgContext>(i);
}

std::vector<CmdParser::ArgSepContext *> CmdParser::CmdContext::argSep() {
  return getRuleContexts<CmdParser::ArgSepContext>();
}

CmdParser::ArgSepContext* CmdParser::CmdContext::argSep(size_t i) {
  return getRuleContext<CmdParser::ArgSepContext>(i);
}


size_t CmdParser::CmdContext::getRuleIndex() const {
  return CmdParser::RuleCmd;
}


std::any CmdParser::CmdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CmdParserVisitor*>(visitor))
    return parserVisitor->visitCmd(this);
  else
    return visitor->visitChildren(this);
}

CmdParser::CmdContext* CmdParser::cmd() {
  CmdContext *_localctx = _tracker.createInstance<CmdContext>(_ctx, getState());
  enterRule(_localctx, 4, CmdParser::RuleCmd);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(98);
    arg();
    setState(108);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(100); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(99);
          argSep();
          setState(102); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == CmdParser::ARG_SEP);
        setState(104);
        arg(); 
      }
      setState(110);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    }
    setState(114);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CmdParser::ARG_SEP) {
      setState(111);
      argSep();
      setState(116);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgContext ------------------------------------------------------------------

CmdParser::ArgContext::ArgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CmdParser::TermsROContext *> CmdParser::ArgContext::termsRO() {
  return getRuleContexts<CmdParser::TermsROContext>();
}

CmdParser::TermsROContext* CmdParser::ArgContext::termsRO(size_t i) {
  return getRuleContext<CmdParser::TermsROContext>(i);
}

std::vector<CmdParser::TermsSQContext *> CmdParser::ArgContext::termsSQ() {
  return getRuleContexts<CmdParser::TermsSQContext>();
}

CmdParser::TermsSQContext* CmdParser::ArgContext::termsSQ(size_t i) {
  return getRuleContext<CmdParser::TermsSQContext>(i);
}

std::vector<CmdParser::TermsDQContext *> CmdParser::ArgContext::termsDQ() {
  return getRuleContexts<CmdParser::TermsDQContext>();
}

CmdParser::TermsDQContext* CmdParser::ArgContext::termsDQ(size_t i) {
  return getRuleContext<CmdParser::TermsDQContext>(i);
}


size_t CmdParser::ArgContext::getRuleIndex() const {
  return CmdParser::RuleArg;
}


std::any CmdParser::ArgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CmdParserVisitor*>(visitor))
    return parserVisitor->visitArg(this);
  else
    return visitor->visitChildren(this);
}

CmdParser::ArgContext* CmdParser::arg() {
  ArgContext *_localctx = _tracker.createInstance<ArgContext>(_ctx, getState());
  enterRule(_localctx, 6, CmdParser::RuleArg);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(120); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(120);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case CmdParser::LPAREN:
        case CmdParser::RPAREN:
        case CmdParser::TEXT_RAW:
        case CmdParser::TEXT_NOP:
        case CmdParser::TEXT_VAR:
        case CmdParser::TEXT_XFM: {
          setState(117);
          termsRO();
          break;
        }

        case CmdParser::SQSTR_BEGIN: {
          setState(118);
          termsSQ();
          break;
        }

        case CmdParser::DQSTR_BEGIN: {
          setState(119);
          termsDQ();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(122); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 510) != 0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CallArgContext ------------------------------------------------------------------

CmdParser::CallArgContext::CallArgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CmdParser::TermsRAContext *> CmdParser::CallArgContext::termsRA() {
  return getRuleContexts<CmdParser::TermsRAContext>();
}

CmdParser::TermsRAContext* CmdParser::CallArgContext::termsRA(size_t i) {
  return getRuleContext<CmdParser::TermsRAContext>(i);
}

std::vector<CmdParser::TermsSQContext *> CmdParser::CallArgContext::termsSQ() {
  return getRuleContexts<CmdParser::TermsSQContext>();
}

CmdParser::TermsSQContext* CmdParser::CallArgContext::termsSQ(size_t i) {
  return getRuleContext<CmdParser::TermsSQContext>(i);
}

std::vector<CmdParser::TermsDQContext *> CmdParser::CallArgContext::termsDQ() {
  return getRuleContexts<CmdParser::TermsDQContext>();
}

CmdParser::TermsDQContext* CmdParser::CallArgContext::termsDQ(size_t i) {
  return getRuleContext<CmdParser::TermsDQContext>(i);
}


size_t CmdParser::CallArgContext::getRuleIndex() const {
  return CmdParser::RuleCallArg;
}


std::any CmdParser::CallArgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CmdParserVisitor*>(visitor))
    return parserVisitor->visitCallArg(this);
  else
    return visitor->visitChildren(this);
}

CmdParser::CallArgContext* CmdParser::callArg() {
  CallArgContext *_localctx = _tracker.createInstance<CallArgContext>(_ctx, getState());
  enterRule(_localctx, 8, CmdParser::RuleCallArg);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(127); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(127);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case CmdParser::TEXT_RAW:
        case CmdParser::TEXT_NOP:
        case CmdParser::TEXT_VAR:
        case CmdParser::TEXT_XFM: {
          setState(124);
          termsRA();
          break;
        }

        case CmdParser::SQSTR_BEGIN: {
          setState(125);
          termsSQ();
          break;
        }

        case CmdParser::DQSTR_BEGIN: {
          setState(126);
          termsDQ();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(129); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 504) != 0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgSepContext ------------------------------------------------------------------

CmdParser::ArgSepContext::ArgSepContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CmdParser::ArgSepContext::ARG_SEP() {
  return getToken(CmdParser::ARG_SEP, 0);
}


size_t CmdParser::ArgSepContext::getRuleIndex() const {
  return CmdParser::RuleArgSep;
}


std::any CmdParser::ArgSepContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CmdParserVisitor*>(visitor))
    return parserVisitor->visitArgSep(this);
  else
    return visitor->visitChildren(this);
}

CmdParser::ArgSepContext* CmdParser::argSep() {
  ArgSepContext *_localctx = _tracker.createInstance<ArgSepContext>(_ctx, getState());
  enterRule(_localctx, 10, CmdParser::RuleArgSep);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(131);
    match(CmdParser::ARG_SEP);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CmdSepContext ------------------------------------------------------------------

CmdParser::CmdSepContext::CmdSepContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CmdParser::CmdSepContext::CMD_SEP() {
  return getToken(CmdParser::CMD_SEP, 0);
}

tree::TerminalNode* CmdParser::CmdSepContext::ARG_SEP() {
  return getToken(CmdParser::ARG_SEP, 0);
}


size_t CmdParser::CmdSepContext::getRuleIndex() const {
  return CmdParser::RuleCmdSep;
}


std::any CmdParser::CmdSepContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CmdParserVisitor*>(visitor))
    return parserVisitor->visitCmdSep(this);
  else
    return visitor->visitChildren(this);
}

CmdParser::CmdSepContext* CmdParser::cmdSep() {
  CmdSepContext *_localctx = _tracker.createInstance<CmdSepContext>(_ctx, getState());
  enterRule(_localctx, 12, CmdParser::RuleCmdSep);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(133);
    match(CmdParser::CMD_SEP);
    setState(135);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CmdParser::ARG_SEP) {
      setState(134);
      match(CmdParser::ARG_SEP);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TermsROContext ------------------------------------------------------------------

CmdParser::TermsROContext::TermsROContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CmdParser::TermOContext *> CmdParser::TermsROContext::termO() {
  return getRuleContexts<CmdParser::TermOContext>();
}

CmdParser::TermOContext* CmdParser::TermsROContext::termO(size_t i) {
  return getRuleContext<CmdParser::TermOContext>(i);
}

std::vector<CmdParser::TermCContext *> CmdParser::TermsROContext::termC() {
  return getRuleContexts<CmdParser::TermCContext>();
}

CmdParser::TermCContext* CmdParser::TermsROContext::termC(size_t i) {
  return getRuleContext<CmdParser::TermCContext>(i);
}

std::vector<CmdParser::TermVContext *> CmdParser::TermsROContext::termV() {
  return getRuleContexts<CmdParser::TermVContext>();
}

CmdParser::TermVContext* CmdParser::TermsROContext::termV(size_t i) {
  return getRuleContext<CmdParser::TermVContext>(i);
}

std::vector<CmdParser::TermXContext *> CmdParser::TermsROContext::termX() {
  return getRuleContexts<CmdParser::TermXContext>();
}

CmdParser::TermXContext* CmdParser::TermsROContext::termX(size_t i) {
  return getRuleContext<CmdParser::TermXContext>(i);
}


size_t CmdParser::TermsROContext::getRuleIndex() const {
  return CmdParser::RuleTermsRO;
}


std::any CmdParser::TermsROContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CmdParserVisitor*>(visitor))
    return parserVisitor->visitTermsRO(this);
  else
    return visitor->visitChildren(this);
}

CmdParser::TermsROContext* CmdParser::termsRO() {
  TermsROContext *_localctx = _tracker.createInstance<TermsROContext>(_ctx, getState());
  enterRule(_localctx, 14, CmdParser::RuleTermsRO);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(141); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(141);
              _errHandler->sync(this);
              switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
              case 1: {
                setState(137);
                termO();
                break;
              }

              case 2: {
                setState(138);
                termC();
                break;
              }

              case 3: {
                setState(139);
                termV();
                break;
              }

              case 4: {
                setState(140);
                termX();
                break;
              }

              default:
                break;
              }
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(143); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TermsRAContext ------------------------------------------------------------------

CmdParser::TermsRAContext::TermsRAContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CmdParser::TermAContext *> CmdParser::TermsRAContext::termA() {
  return getRuleContexts<CmdParser::TermAContext>();
}

CmdParser::TermAContext* CmdParser::TermsRAContext::termA(size_t i) {
  return getRuleContext<CmdParser::TermAContext>(i);
}

std::vector<CmdParser::TermCContext *> CmdParser::TermsRAContext::termC() {
  return getRuleContexts<CmdParser::TermCContext>();
}

CmdParser::TermCContext* CmdParser::TermsRAContext::termC(size_t i) {
  return getRuleContext<CmdParser::TermCContext>(i);
}

std::vector<CmdParser::TermVContext *> CmdParser::TermsRAContext::termV() {
  return getRuleContexts<CmdParser::TermVContext>();
}

CmdParser::TermVContext* CmdParser::TermsRAContext::termV(size_t i) {
  return getRuleContext<CmdParser::TermVContext>(i);
}

std::vector<CmdParser::TermXContext *> CmdParser::TermsRAContext::termX() {
  return getRuleContexts<CmdParser::TermXContext>();
}

CmdParser::TermXContext* CmdParser::TermsRAContext::termX(size_t i) {
  return getRuleContext<CmdParser::TermXContext>(i);
}


size_t CmdParser::TermsRAContext::getRuleIndex() const {
  return CmdParser::RuleTermsRA;
}


std::any CmdParser::TermsRAContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CmdParserVisitor*>(visitor))
    return parserVisitor->visitTermsRA(this);
  else
    return visitor->visitChildren(this);
}

CmdParser::TermsRAContext* CmdParser::termsRA() {
  TermsRAContext *_localctx = _tracker.createInstance<TermsRAContext>(_ctx, getState());
  enterRule(_localctx, 16, CmdParser::RuleTermsRA);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(149); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(149);
              _errHandler->sync(this);
              switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
              case 1: {
                setState(145);
                termA();
                break;
              }

              case 2: {
                setState(146);
                termC();
                break;
              }

              case 3: {
                setState(147);
                termV();
                break;
              }

              case 4: {
                setState(148);
                termX();
                break;
              }

              default:
                break;
              }
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(151); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TermsSQContext ------------------------------------------------------------------

CmdParser::TermsSQContext::TermsSQContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CmdParser::TermsSQContext::SQSTR_BEGIN() {
  return getToken(CmdParser::SQSTR_BEGIN, 0);
}

tree::TerminalNode* CmdParser::TermsSQContext::SQSTR_END() {
  return getToken(CmdParser::SQSTR_END, 0);
}

std::vector<CmdParser::TermSQRContext *> CmdParser::TermsSQContext::termSQR() {
  return getRuleContexts<CmdParser::TermSQRContext>();
}

CmdParser::TermSQRContext* CmdParser::TermsSQContext::termSQR(size_t i) {
  return getRuleContext<CmdParser::TermSQRContext>(i);
}

std::vector<CmdParser::TermSQVContext *> CmdParser::TermsSQContext::termSQV() {
  return getRuleContexts<CmdParser::TermSQVContext>();
}

CmdParser::TermSQVContext* CmdParser::TermsSQContext::termSQV(size_t i) {
  return getRuleContext<CmdParser::TermSQVContext>(i);
}

std::vector<CmdParser::TermSQXContext *> CmdParser::TermsSQContext::termSQX() {
  return getRuleContexts<CmdParser::TermSQXContext>();
}

CmdParser::TermSQXContext* CmdParser::TermsSQContext::termSQX(size_t i) {
  return getRuleContext<CmdParser::TermSQXContext>(i);
}


size_t CmdParser::TermsSQContext::getRuleIndex() const {
  return CmdParser::RuleTermsSQ;
}


std::any CmdParser::TermsSQContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CmdParserVisitor*>(visitor))
    return parserVisitor->visitTermsSQ(this);
  else
    return visitor->visitChildren(this);
}

CmdParser::TermsSQContext* CmdParser::termsSQ() {
  TermsSQContext *_localctx = _tracker.createInstance<TermsSQContext>(_ctx, getState());
  enterRule(_localctx, 18, CmdParser::RuleTermsSQ);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(153);
    match(CmdParser::SQSTR_BEGIN);
    setState(159);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 61440) != 0) {
      setState(157);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case CmdParser::SQSTR_RAW:
        case CmdParser::SQSTR_NOP: {
          setState(154);
          termSQR();
          break;
        }

        case CmdParser::SQSTR_VAR: {
          setState(155);
          termSQV();
          break;
        }

        case CmdParser::SQSTR_XFM: {
          setState(156);
          termSQX();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(161);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(162);
    match(CmdParser::SQSTR_END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TermsDQContext ------------------------------------------------------------------

CmdParser::TermsDQContext::TermsDQContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CmdParser::TermsDQContext::DQSTR_BEGIN() {
  return getToken(CmdParser::DQSTR_BEGIN, 0);
}

tree::TerminalNode* CmdParser::TermsDQContext::DQSTR_END() {
  return getToken(CmdParser::DQSTR_END, 0);
}

std::vector<CmdParser::TermDQRContext *> CmdParser::TermsDQContext::termDQR() {
  return getRuleContexts<CmdParser::TermDQRContext>();
}

CmdParser::TermDQRContext* CmdParser::TermsDQContext::termDQR(size_t i) {
  return getRuleContext<CmdParser::TermDQRContext>(i);
}

std::vector<CmdParser::TermDQVContext *> CmdParser::TermsDQContext::termDQV() {
  return getRuleContexts<CmdParser::TermDQVContext>();
}

CmdParser::TermDQVContext* CmdParser::TermsDQContext::termDQV(size_t i) {
  return getRuleContext<CmdParser::TermDQVContext>(i);
}

std::vector<CmdParser::TermDQXContext *> CmdParser::TermsDQContext::termDQX() {
  return getRuleContexts<CmdParser::TermDQXContext>();
}

CmdParser::TermDQXContext* CmdParser::TermsDQContext::termDQX(size_t i) {
  return getRuleContext<CmdParser::TermDQXContext>(i);
}


size_t CmdParser::TermsDQContext::getRuleIndex() const {
  return CmdParser::RuleTermsDQ;
}


std::any CmdParser::TermsDQContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CmdParserVisitor*>(visitor))
    return parserVisitor->visitTermsDQ(this);
  else
    return visitor->visitChildren(this);
}

CmdParser::TermsDQContext* CmdParser::termsDQ() {
  TermsDQContext *_localctx = _tracker.createInstance<TermsDQContext>(_ctx, getState());
  enterRule(_localctx, 20, CmdParser::RuleTermsDQ);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(164);
    match(CmdParser::DQSTR_BEGIN);
    setState(170);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1966080) != 0) {
      setState(168);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case CmdParser::DQSTR_RAW:
        case CmdParser::DQSTR_NOP: {
          setState(165);
          termDQR();
          break;
        }

        case CmdParser::DQSTR_VAR: {
          setState(166);
          termDQV();
          break;
        }

        case CmdParser::DQSTR_XFM: {
          setState(167);
          termDQX();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(172);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(173);
    match(CmdParser::DQSTR_END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TermOContext ------------------------------------------------------------------

CmdParser::TermOContext::TermOContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> CmdParser::TermOContext::TEXT_RAW() {
  return getTokens(CmdParser::TEXT_RAW);
}

tree::TerminalNode* CmdParser::TermOContext::TEXT_RAW(size_t i) {
  return getToken(CmdParser::TEXT_RAW, i);
}

std::vector<tree::TerminalNode *> CmdParser::TermOContext::TEXT_NOP() {
  return getTokens(CmdParser::TEXT_NOP);
}

tree::TerminalNode* CmdParser::TermOContext::TEXT_NOP(size_t i) {
  return getToken(CmdParser::TEXT_NOP, i);
}

std::vector<tree::TerminalNode *> CmdParser::TermOContext::LPAREN() {
  return getTokens(CmdParser::LPAREN);
}

tree::TerminalNode* CmdParser::TermOContext::LPAREN(size_t i) {
  return getToken(CmdParser::LPAREN, i);
}

std::vector<tree::TerminalNode *> CmdParser::TermOContext::RPAREN() {
  return getTokens(CmdParser::RPAREN);
}

tree::TerminalNode* CmdParser::TermOContext::RPAREN(size_t i) {
  return getToken(CmdParser::RPAREN, i);
}


size_t CmdParser::TermOContext::getRuleIndex() const {
  return CmdParser::RuleTermO;
}


std::any CmdParser::TermOContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CmdParserVisitor*>(visitor))
    return parserVisitor->visitTermO(this);
  else
    return visitor->visitChildren(this);
}

CmdParser::TermOContext* CmdParser::termO() {
  TermOContext *_localctx = _tracker.createInstance<TermOContext>(_ctx, getState());
  enterRule(_localctx, 22, CmdParser::RuleTermO);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(176); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(175);
              _la = _input->LA(1);
              if (!(((_la & ~ 0x3fULL) == 0) &&
                ((1ULL << _la) & 78) != 0)) {
              _errHandler->recoverInline(this);
              }
              else {
                _errHandler->reportMatch(this);
                consume();
              }
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(178); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TermAContext ------------------------------------------------------------------

CmdParser::TermAContext::TermAContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> CmdParser::TermAContext::TEXT_RAW() {
  return getTokens(CmdParser::TEXT_RAW);
}

tree::TerminalNode* CmdParser::TermAContext::TEXT_RAW(size_t i) {
  return getToken(CmdParser::TEXT_RAW, i);
}

std::vector<tree::TerminalNode *> CmdParser::TermAContext::TEXT_NOP() {
  return getTokens(CmdParser::TEXT_NOP);
}

tree::TerminalNode* CmdParser::TermAContext::TEXT_NOP(size_t i) {
  return getToken(CmdParser::TEXT_NOP, i);
}


size_t CmdParser::TermAContext::getRuleIndex() const {
  return CmdParser::RuleTermA;
}


std::any CmdParser::TermAContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CmdParserVisitor*>(visitor))
    return parserVisitor->visitTermA(this);
  else
    return visitor->visitChildren(this);
}

CmdParser::TermAContext* CmdParser::termA() {
  TermAContext *_localctx = _tracker.createInstance<TermAContext>(_ctx, getState());
  enterRule(_localctx, 24, CmdParser::RuleTermA);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(181); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(180);
              _la = _input->LA(1);
              if (!(_la == CmdParser::TEXT_RAW

              || _la == CmdParser::TEXT_NOP)) {
              _errHandler->recoverInline(this);
              }
              else {
                _errHandler->reportMatch(this);
                consume();
              }
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(183); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TermCContext ------------------------------------------------------------------

CmdParser::TermCContext::TermCContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CmdParser::TermCContext::TEXT_VAR() {
  return getToken(CmdParser::TEXT_VAR, 0);
}

tree::TerminalNode* CmdParser::TermCContext::LPAREN() {
  return getToken(CmdParser::LPAREN, 0);
}

tree::TerminalNode* CmdParser::TermCContext::RPAREN() {
  return getToken(CmdParser::RPAREN, 0);
}

std::vector<CmdParser::ArgSepContext *> CmdParser::TermCContext::argSep() {
  return getRuleContexts<CmdParser::ArgSepContext>();
}

CmdParser::ArgSepContext* CmdParser::TermCContext::argSep(size_t i) {
  return getRuleContext<CmdParser::ArgSepContext>(i);
}

std::vector<CmdParser::CallArgContext *> CmdParser::TermCContext::callArg() {
  return getRuleContexts<CmdParser::CallArgContext>();
}

CmdParser::CallArgContext* CmdParser::TermCContext::callArg(size_t i) {
  return getRuleContext<CmdParser::CallArgContext>(i);
}


size_t CmdParser::TermCContext::getRuleIndex() const {
  return CmdParser::RuleTermC;
}


std::any CmdParser::TermCContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CmdParserVisitor*>(visitor))
    return parserVisitor->visitTermC(this);
  else
    return visitor->visitChildren(this);
}

CmdParser::TermCContext* CmdParser::termC() {
  TermCContext *_localctx = _tracker.createInstance<TermCContext>(_ctx, getState());
  enterRule(_localctx, 26, CmdParser::RuleTermC);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(185);
    match(CmdParser::TEXT_VAR);
    setState(186);
    match(CmdParser::LPAREN);
    setState(188);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
    case 1: {
      setState(187);
      argSep();
      break;
    }

    default:
      break;
    }
    setState(199);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 504) != 0) {
      setState(190);
      callArg();
      setState(196);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(191);
          argSep();
          setState(192);
          callArg(); 
        }
        setState(198);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
      }
    }
    setState(202);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CmdParser::ARG_SEP) {
      setState(201);
      argSep();
    }
    setState(204);
    match(CmdParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TermVContext ------------------------------------------------------------------

CmdParser::TermVContext::TermVContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CmdParser::TermVContext::TEXT_VAR() {
  return getToken(CmdParser::TEXT_VAR, 0);
}


size_t CmdParser::TermVContext::getRuleIndex() const {
  return CmdParser::RuleTermV;
}


std::any CmdParser::TermVContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CmdParserVisitor*>(visitor))
    return parserVisitor->visitTermV(this);
  else
    return visitor->visitChildren(this);
}

CmdParser::TermVContext* CmdParser::termV() {
  TermVContext *_localctx = _tracker.createInstance<TermVContext>(_ctx, getState());
  enterRule(_localctx, 28, CmdParser::RuleTermV);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(206);
    match(CmdParser::TEXT_VAR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TermXContext ------------------------------------------------------------------

CmdParser::TermXContext::TermXContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CmdParser::TermXContext::TEXT_XFM() {
  return getToken(CmdParser::TEXT_XFM, 0);
}

CmdParser::XBodyContext* CmdParser::TermXContext::xBody() {
  return getRuleContext<CmdParser::XBodyContext>(0);
}

tree::TerminalNode* CmdParser::TermXContext::XFM_END() {
  return getToken(CmdParser::XFM_END, 0);
}

std::vector<CmdParser::XModifierContext *> CmdParser::TermXContext::xModifier() {
  return getRuleContexts<CmdParser::XModifierContext>();
}

CmdParser::XModifierContext* CmdParser::TermXContext::xModifier(size_t i) {
  return getRuleContext<CmdParser::XModifierContext>(i);
}

tree::TerminalNode* CmdParser::TermXContext::MOD_END() {
  return getToken(CmdParser::MOD_END, 0);
}

std::vector<tree::TerminalNode *> CmdParser::TermXContext::MOD_SEP() {
  return getTokens(CmdParser::MOD_SEP);
}

tree::TerminalNode* CmdParser::TermXContext::MOD_SEP(size_t i) {
  return getToken(CmdParser::MOD_SEP, i);
}


size_t CmdParser::TermXContext::getRuleIndex() const {
  return CmdParser::RuleTermX;
}


std::any CmdParser::TermXContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CmdParserVisitor*>(visitor))
    return parserVisitor->visitTermX(this);
  else
    return visitor->visitChildren(this);
}

CmdParser::TermXContext* CmdParser::termX() {
  TermXContext *_localctx = _tracker.createInstance<TermXContext>(_ctx, getState());
  enterRule(_localctx, 30, CmdParser::RuleTermX);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(208);
    match(CmdParser::TEXT_XFM);
    setState(220);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx)) {
    case 1: {
      setState(214);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(209);
          xModifier();
          setState(210);
          match(CmdParser::MOD_SEP); 
        }
        setState(216);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
      }
      setState(217);
      xModifier();
      setState(218);
      match(CmdParser::MOD_END);
      break;
    }

    default:
      break;
    }
    setState(222);
    xBody();
    setState(223);
    match(CmdParser::XFM_END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TermSQRContext ------------------------------------------------------------------

CmdParser::TermSQRContext::TermSQRContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CmdParser::TermSQRContext::SQSTR_RAW() {
  return getToken(CmdParser::SQSTR_RAW, 0);
}

tree::TerminalNode* CmdParser::TermSQRContext::SQSTR_NOP() {
  return getToken(CmdParser::SQSTR_NOP, 0);
}


size_t CmdParser::TermSQRContext::getRuleIndex() const {
  return CmdParser::RuleTermSQR;
}


std::any CmdParser::TermSQRContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CmdParserVisitor*>(visitor))
    return parserVisitor->visitTermSQR(this);
  else
    return visitor->visitChildren(this);
}

CmdParser::TermSQRContext* CmdParser::termSQR() {
  TermSQRContext *_localctx = _tracker.createInstance<TermSQRContext>(_ctx, getState());
  enterRule(_localctx, 32, CmdParser::RuleTermSQR);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(225);
    _la = _input->LA(1);
    if (!(_la == CmdParser::SQSTR_RAW

    || _la == CmdParser::SQSTR_NOP)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TermSQVContext ------------------------------------------------------------------

CmdParser::TermSQVContext::TermSQVContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CmdParser::TermSQVContext::SQSTR_VAR() {
  return getToken(CmdParser::SQSTR_VAR, 0);
}


size_t CmdParser::TermSQVContext::getRuleIndex() const {
  return CmdParser::RuleTermSQV;
}


std::any CmdParser::TermSQVContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CmdParserVisitor*>(visitor))
    return parserVisitor->visitTermSQV(this);
  else
    return visitor->visitChildren(this);
}

CmdParser::TermSQVContext* CmdParser::termSQV() {
  TermSQVContext *_localctx = _tracker.createInstance<TermSQVContext>(_ctx, getState());
  enterRule(_localctx, 34, CmdParser::RuleTermSQV);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(227);
    match(CmdParser::SQSTR_VAR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TermSQXContext ------------------------------------------------------------------

CmdParser::TermSQXContext::TermSQXContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CmdParser::TermSQXContext::SQSTR_XFM() {
  return getToken(CmdParser::SQSTR_XFM, 0);
}

CmdParser::XBodyContext* CmdParser::TermSQXContext::xBody() {
  return getRuleContext<CmdParser::XBodyContext>(0);
}

tree::TerminalNode* CmdParser::TermSQXContext::XFM_END() {
  return getToken(CmdParser::XFM_END, 0);
}

std::vector<CmdParser::XModifierContext *> CmdParser::TermSQXContext::xModifier() {
  return getRuleContexts<CmdParser::XModifierContext>();
}

CmdParser::XModifierContext* CmdParser::TermSQXContext::xModifier(size_t i) {
  return getRuleContext<CmdParser::XModifierContext>(i);
}

tree::TerminalNode* CmdParser::TermSQXContext::MOD_END() {
  return getToken(CmdParser::MOD_END, 0);
}

std::vector<tree::TerminalNode *> CmdParser::TermSQXContext::MOD_SEP() {
  return getTokens(CmdParser::MOD_SEP);
}

tree::TerminalNode* CmdParser::TermSQXContext::MOD_SEP(size_t i) {
  return getToken(CmdParser::MOD_SEP, i);
}


size_t CmdParser::TermSQXContext::getRuleIndex() const {
  return CmdParser::RuleTermSQX;
}


std::any CmdParser::TermSQXContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CmdParserVisitor*>(visitor))
    return parserVisitor->visitTermSQX(this);
  else
    return visitor->visitChildren(this);
}

CmdParser::TermSQXContext* CmdParser::termSQX() {
  TermSQXContext *_localctx = _tracker.createInstance<TermSQXContext>(_ctx, getState());
  enterRule(_localctx, 36, CmdParser::RuleTermSQX);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(229);
    match(CmdParser::SQSTR_XFM);
    setState(241);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx)) {
    case 1: {
      setState(235);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(230);
          xModifier();
          setState(231);
          match(CmdParser::MOD_SEP); 
        }
        setState(237);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx);
      }
      setState(238);
      xModifier();
      setState(239);
      match(CmdParser::MOD_END);
      break;
    }

    default:
      break;
    }
    setState(243);
    xBody();
    setState(244);
    match(CmdParser::XFM_END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TermDQRContext ------------------------------------------------------------------

CmdParser::TermDQRContext::TermDQRContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CmdParser::TermDQRContext::DQSTR_RAW() {
  return getToken(CmdParser::DQSTR_RAW, 0);
}

tree::TerminalNode* CmdParser::TermDQRContext::DQSTR_NOP() {
  return getToken(CmdParser::DQSTR_NOP, 0);
}


size_t CmdParser::TermDQRContext::getRuleIndex() const {
  return CmdParser::RuleTermDQR;
}


std::any CmdParser::TermDQRContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CmdParserVisitor*>(visitor))
    return parserVisitor->visitTermDQR(this);
  else
    return visitor->visitChildren(this);
}

CmdParser::TermDQRContext* CmdParser::termDQR() {
  TermDQRContext *_localctx = _tracker.createInstance<TermDQRContext>(_ctx, getState());
  enterRule(_localctx, 38, CmdParser::RuleTermDQR);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(246);
    _la = _input->LA(1);
    if (!(_la == CmdParser::DQSTR_RAW

    || _la == CmdParser::DQSTR_NOP)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TermDQVContext ------------------------------------------------------------------

CmdParser::TermDQVContext::TermDQVContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CmdParser::TermDQVContext::DQSTR_VAR() {
  return getToken(CmdParser::DQSTR_VAR, 0);
}


size_t CmdParser::TermDQVContext::getRuleIndex() const {
  return CmdParser::RuleTermDQV;
}


std::any CmdParser::TermDQVContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CmdParserVisitor*>(visitor))
    return parserVisitor->visitTermDQV(this);
  else
    return visitor->visitChildren(this);
}

CmdParser::TermDQVContext* CmdParser::termDQV() {
  TermDQVContext *_localctx = _tracker.createInstance<TermDQVContext>(_ctx, getState());
  enterRule(_localctx, 40, CmdParser::RuleTermDQV);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(248);
    match(CmdParser::DQSTR_VAR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TermDQXContext ------------------------------------------------------------------

CmdParser::TermDQXContext::TermDQXContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CmdParser::TermDQXContext::DQSTR_XFM() {
  return getToken(CmdParser::DQSTR_XFM, 0);
}

CmdParser::XBodyContext* CmdParser::TermDQXContext::xBody() {
  return getRuleContext<CmdParser::XBodyContext>(0);
}

tree::TerminalNode* CmdParser::TermDQXContext::XFM_END() {
  return getToken(CmdParser::XFM_END, 0);
}

std::vector<CmdParser::XModifierContext *> CmdParser::TermDQXContext::xModifier() {
  return getRuleContexts<CmdParser::XModifierContext>();
}

CmdParser::XModifierContext* CmdParser::TermDQXContext::xModifier(size_t i) {
  return getRuleContext<CmdParser::XModifierContext>(i);
}

tree::TerminalNode* CmdParser::TermDQXContext::MOD_END() {
  return getToken(CmdParser::MOD_END, 0);
}

std::vector<tree::TerminalNode *> CmdParser::TermDQXContext::MOD_SEP() {
  return getTokens(CmdParser::MOD_SEP);
}

tree::TerminalNode* CmdParser::TermDQXContext::MOD_SEP(size_t i) {
  return getToken(CmdParser::MOD_SEP, i);
}


size_t CmdParser::TermDQXContext::getRuleIndex() const {
  return CmdParser::RuleTermDQX;
}


std::any CmdParser::TermDQXContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CmdParserVisitor*>(visitor))
    return parserVisitor->visitTermDQX(this);
  else
    return visitor->visitChildren(this);
}

CmdParser::TermDQXContext* CmdParser::termDQX() {
  TermDQXContext *_localctx = _tracker.createInstance<TermDQXContext>(_ctx, getState());
  enterRule(_localctx, 42, CmdParser::RuleTermDQX);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(250);
    match(CmdParser::DQSTR_XFM);
    setState(262);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
    case 1: {
      setState(256);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(251);
          xModifier();
          setState(252);
          match(CmdParser::MOD_SEP); 
        }
        setState(258);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx);
      }
      setState(259);
      xModifier();
      setState(260);
      match(CmdParser::MOD_END);
      break;
    }

    default:
      break;
    }
    setState(264);
    xBody();
    setState(265);
    match(CmdParser::XFM_END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- XModifierContext ------------------------------------------------------------------

CmdParser::XModifierContext::XModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CmdParser::XModKeyContext* CmdParser::XModifierContext::xModKey() {
  return getRuleContext<CmdParser::XModKeyContext>(0);
}

tree::TerminalNode* CmdParser::XModifierContext::MOD_ARG() {
  return getToken(CmdParser::MOD_ARG, 0);
}

CmdParser::XModValueContext* CmdParser::XModifierContext::xModValue() {
  return getRuleContext<CmdParser::XModValueContext>(0);
}


size_t CmdParser::XModifierContext::getRuleIndex() const {
  return CmdParser::RuleXModifier;
}


std::any CmdParser::XModifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CmdParserVisitor*>(visitor))
    return parserVisitor->visitXModifier(this);
  else
    return visitor->visitChildren(this);
}

CmdParser::XModifierContext* CmdParser::xModifier() {
  XModifierContext *_localctx = _tracker.createInstance<XModifierContext>(_ctx, getState());
  enterRule(_localctx, 44, CmdParser::RuleXModifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(267);
    xModKey();
    setState(270);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CmdParser::MOD_ARG) {
      setState(268);
      match(CmdParser::MOD_ARG);
      setState(269);
      xModValue();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- XModKeyContext ------------------------------------------------------------------

CmdParser::XModKeyContext::XModKeyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CmdParser::XModKeyContext::IDENTIFIER() {
  return getToken(CmdParser::IDENTIFIER, 0);
}


size_t CmdParser::XModKeyContext::getRuleIndex() const {
  return CmdParser::RuleXModKey;
}


std::any CmdParser::XModKeyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CmdParserVisitor*>(visitor))
    return parserVisitor->visitXModKey(this);
  else
    return visitor->visitChildren(this);
}

CmdParser::XModKeyContext* CmdParser::xModKey() {
  XModKeyContext *_localctx = _tracker.createInstance<XModKeyContext>(_ctx, getState());
  enterRule(_localctx, 46, CmdParser::RuleXModKey);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(272);
    match(CmdParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- XModValueContext ------------------------------------------------------------------

CmdParser::XModValueContext::XModValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CmdParser::XModValueTContext *> CmdParser::XModValueContext::xModValueT() {
  return getRuleContexts<CmdParser::XModValueTContext>();
}

CmdParser::XModValueTContext* CmdParser::XModValueContext::xModValueT(size_t i) {
  return getRuleContext<CmdParser::XModValueTContext>(i);
}

std::vector<CmdParser::XModValueVContext *> CmdParser::XModValueContext::xModValueV() {
  return getRuleContexts<CmdParser::XModValueVContext>();
}

CmdParser::XModValueVContext* CmdParser::XModValueContext::xModValueV(size_t i) {
  return getRuleContext<CmdParser::XModValueVContext>(i);
}

std::vector<CmdParser::XModValueEContext *> CmdParser::XModValueContext::xModValueE() {
  return getRuleContexts<CmdParser::XModValueEContext>();
}

CmdParser::XModValueEContext* CmdParser::XModValueContext::xModValueE(size_t i) {
  return getRuleContext<CmdParser::XModValueEContext>(i);
}


size_t CmdParser::XModValueContext::getRuleIndex() const {
  return CmdParser::RuleXModValue;
}


std::any CmdParser::XModValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CmdParserVisitor*>(visitor))
    return parserVisitor->visitXModValue(this);
  else
    return visitor->visitChildren(this);
}

CmdParser::XModValueContext* CmdParser::xModValue() {
  XModValueContext *_localctx = _tracker.createInstance<XModValueContext>(_ctx, getState());
  enterRule(_localctx, 48, CmdParser::RuleXModValue);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(279);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 939524096) != 0) {
      setState(277);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case CmdParser::MOD_ARG_VALUE_TEXT: {
          setState(274);
          xModValueT();
          break;
        }

        case CmdParser::MOD_ARG_VALUE_VARIABLE: {
          setState(275);
          xModValueV();
          break;
        }

        case CmdParser::MOD_ARG_VALUE_EVALUATION: {
          setState(276);
          xModValueE();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(281);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- XModValueTContext ------------------------------------------------------------------

CmdParser::XModValueTContext::XModValueTContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CmdParser::XModValueTContext::MOD_ARG_VALUE_TEXT() {
  return getToken(CmdParser::MOD_ARG_VALUE_TEXT, 0);
}


size_t CmdParser::XModValueTContext::getRuleIndex() const {
  return CmdParser::RuleXModValueT;
}


std::any CmdParser::XModValueTContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CmdParserVisitor*>(visitor))
    return parserVisitor->visitXModValueT(this);
  else
    return visitor->visitChildren(this);
}

CmdParser::XModValueTContext* CmdParser::xModValueT() {
  XModValueTContext *_localctx = _tracker.createInstance<XModValueTContext>(_ctx, getState());
  enterRule(_localctx, 50, CmdParser::RuleXModValueT);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(282);
    match(CmdParser::MOD_ARG_VALUE_TEXT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- XModValueVContext ------------------------------------------------------------------

CmdParser::XModValueVContext::XModValueVContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CmdParser::XModValueVContext::MOD_ARG_VALUE_VARIABLE() {
  return getToken(CmdParser::MOD_ARG_VALUE_VARIABLE, 0);
}


size_t CmdParser::XModValueVContext::getRuleIndex() const {
  return CmdParser::RuleXModValueV;
}


std::any CmdParser::XModValueVContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CmdParserVisitor*>(visitor))
    return parserVisitor->visitXModValueV(this);
  else
    return visitor->visitChildren(this);
}

CmdParser::XModValueVContext* CmdParser::xModValueV() {
  XModValueVContext *_localctx = _tracker.createInstance<XModValueVContext>(_ctx, getState());
  enterRule(_localctx, 52, CmdParser::RuleXModValueV);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(284);
    match(CmdParser::MOD_ARG_VALUE_VARIABLE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- XModValueEContext ------------------------------------------------------------------

CmdParser::XModValueEContext::XModValueEContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CmdParser::XModValueEContext::MOD_ARG_VALUE_EVALUATION() {
  return getToken(CmdParser::MOD_ARG_VALUE_EVALUATION, 0);
}


size_t CmdParser::XModValueEContext::getRuleIndex() const {
  return CmdParser::RuleXModValueE;
}


std::any CmdParser::XModValueEContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CmdParserVisitor*>(visitor))
    return parserVisitor->visitXModValueE(this);
  else
    return visitor->visitChildren(this);
}

CmdParser::XModValueEContext* CmdParser::xModValueE() {
  XModValueEContext *_localctx = _tracker.createInstance<XModValueEContext>(_ctx, getState());
  enterRule(_localctx, 54, CmdParser::RuleXModValueE);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(286);
    match(CmdParser::MOD_ARG_VALUE_EVALUATION);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- XBodyContext ------------------------------------------------------------------

CmdParser::XBodyContext::XBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CmdParser::XBodyIdentifierContext* CmdParser::XBodyContext::xBodyIdentifier() {
  return getRuleContext<CmdParser::XBodyIdentifierContext>(0);
}

CmdParser::XBodyStringContext* CmdParser::XBodyContext::xBodyString() {
  return getRuleContext<CmdParser::XBodyStringContext>(0);
}


size_t CmdParser::XBodyContext::getRuleIndex() const {
  return CmdParser::RuleXBody;
}


std::any CmdParser::XBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CmdParserVisitor*>(visitor))
    return parserVisitor->visitXBody(this);
  else
    return visitor->visitChildren(this);
}

CmdParser::XBodyContext* CmdParser::xBody() {
  XBodyContext *_localctx = _tracker.createInstance<XBodyContext>(_ctx, getState());
  enterRule(_localctx, 56, CmdParser::RuleXBody);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(290);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CmdParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(288);
        xBodyIdentifier();
        break;
      }

      case CmdParser::STRING: {
        enterOuterAlt(_localctx, 2);
        setState(289);
        xBodyString();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- XBodyIdentifierContext ------------------------------------------------------------------

CmdParser::XBodyIdentifierContext::XBodyIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CmdParser::XBodyIdentifierContext::IDENTIFIER() {
  return getToken(CmdParser::IDENTIFIER, 0);
}


size_t CmdParser::XBodyIdentifierContext::getRuleIndex() const {
  return CmdParser::RuleXBodyIdentifier;
}


std::any CmdParser::XBodyIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CmdParserVisitor*>(visitor))
    return parserVisitor->visitXBodyIdentifier(this);
  else
    return visitor->visitChildren(this);
}

CmdParser::XBodyIdentifierContext* CmdParser::xBodyIdentifier() {
  XBodyIdentifierContext *_localctx = _tracker.createInstance<XBodyIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 58, CmdParser::RuleXBodyIdentifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(292);
    match(CmdParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- XBodyStringContext ------------------------------------------------------------------

CmdParser::XBodyStringContext::XBodyStringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CmdParser::XBodyStringContext::STRING() {
  return getToken(CmdParser::STRING, 0);
}


size_t CmdParser::XBodyStringContext::getRuleIndex() const {
  return CmdParser::RuleXBodyString;
}


std::any CmdParser::XBodyStringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CmdParserVisitor*>(visitor))
    return parserVisitor->visitXBodyString(this);
  else
    return visitor->visitChildren(this);
}

CmdParser::XBodyStringContext* CmdParser::xBodyString() {
  XBodyStringContext *_localctx = _tracker.createInstance<XBodyStringContext>(_ctx, getState());
  enterRule(_localctx, 60, CmdParser::RuleXBodyString);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(294);
    match(CmdParser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void CmdParser::initialize() {
  ::antlr4::internal::call_once(cmdparserParserOnceFlag, cmdparserParserInitialize);
}
