
// Generated from /home/pg/1/devtools/ymake/lang/CmdLexer.g4 by ANTLR 4.11.1


#include "CmdLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct CmdLexerStaticData final {
  CmdLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  CmdLexerStaticData(const CmdLexerStaticData&) = delete;
  CmdLexerStaticData(CmdLexerStaticData&&) = delete;
  CmdLexerStaticData& operator=(const CmdLexerStaticData&) = delete;
  CmdLexerStaticData& operator=(CmdLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag cmdlexerLexerOnceFlag;
CmdLexerStaticData *cmdlexerLexerStaticData = nullptr;

void cmdlexerLexerInitialize() {
  assert(cmdlexerLexerStaticData == nullptr);
  auto staticData = std::make_unique<CmdLexerStaticData>(
    std::vector<std::string>{
      "ALPHA", "ALNUM", "ID", "SUBST", "SPACE", "LPAREN", "RPAREN", "TEXT_RAW", 
      "SQSTR_BEGIN", "DQSTR_BEGIN", "TEXT_NOP", "TEXT_VAR", "TEXT_XFM", 
      "CMD_SEP", "ARG_SEP", "SQSTR_END", "SQSTR_RAW", "SQSTR_NOP", "SQSTR_VAR", 
      "SQSTR_XFM", "DQSTR_END", "DQSTR_RAW", "DQSTR_NOP", "DQSTR_VAR", "DQSTR_XFM", 
      "XFM_END", "MOD_ARG", "MOD_SEP", "MOD_END", "STRING", "IDENTIFIER", 
      "MOD_ARG_VALUE_TEXT", "MOD_ARG_VALUE_VARIABLE", "MOD_ARG_VALUE_EVALUATION", 
      "MOD_ARG_MOD_SEP", "MOD_ARG_MOD_END"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE", "SQSTR", "DQSTR", "EVALUATION", "MODARG"
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
  	4,0,29,249,6,-1,6,-1,6,-1,6,-1,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,
  	4,7,4,2,5,7,5,2,6,7,6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,
  	7,12,2,13,7,13,2,14,7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,
  	7,19,2,20,7,20,2,21,7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,
  	7,26,2,27,7,27,2,28,7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,
  	7,33,2,34,7,34,2,35,7,35,1,0,1,0,1,1,1,1,1,2,1,2,5,2,84,8,2,10,2,12,2,
  	87,9,2,1,3,1,3,1,4,1,4,1,5,1,5,1,6,1,6,1,7,1,7,1,7,4,7,100,8,7,11,7,12,
  	7,101,1,7,3,7,105,8,7,1,8,1,8,1,8,1,8,1,9,1,9,1,9,1,9,1,10,1,10,1,10,
  	5,10,118,8,10,10,10,12,10,121,9,10,1,10,1,10,1,11,1,11,1,11,1,12,1,12,
  	1,12,1,12,1,12,1,13,1,13,1,13,1,14,4,14,137,8,14,11,14,12,14,138,1,15,
  	1,15,1,15,1,15,1,16,1,16,1,16,4,16,148,8,16,11,16,12,16,149,1,17,1,17,
  	1,17,5,17,155,8,17,10,17,12,17,158,9,17,1,17,1,17,1,18,1,18,1,18,1,19,
  	1,19,1,19,1,19,1,19,1,20,1,20,1,20,1,20,1,21,1,21,1,21,4,21,177,8,21,
  	11,21,12,21,178,1,22,1,22,1,22,5,22,184,8,22,10,22,12,22,187,9,22,1,22,
  	1,22,1,23,1,23,1,23,1,24,1,24,1,24,1,24,1,24,1,25,1,25,1,25,1,25,1,26,
  	1,26,1,26,1,26,1,27,1,27,1,28,1,28,1,29,1,29,1,29,1,29,5,29,215,8,29,
  	10,29,12,29,218,9,29,1,29,1,29,1,30,1,30,1,31,1,31,1,31,4,31,227,8,31,
  	11,31,12,31,228,1,32,1,32,1,32,1,33,1,33,1,33,1,33,1,33,1,33,1,34,1,34,
  	1,34,1,34,1,34,1,35,1,35,1,35,1,35,1,35,0,0,36,5,0,7,0,9,0,11,0,13,0,
  	15,1,17,2,19,3,21,4,23,5,25,6,27,7,29,8,31,9,33,10,35,11,37,12,39,13,
  	41,14,43,15,45,16,47,17,49,18,51,19,53,20,55,21,57,22,59,23,61,24,63,
  	25,65,26,67,27,69,28,71,29,73,0,75,0,5,0,1,2,3,4,9,3,0,65,90,95,95,97,
  	122,4,0,48,57,65,90,95,95,97,122,10,0,9,13,32,32,133,133,160,160,5760,
  	5760,8192,8202,8232,8233,8239,8239,8287,8287,12288,12288,14,0,9,13,32,
  	32,34,34,36,36,38,41,92,92,133,133,160,160,5760,5760,8192,8202,8232,8233,
  	8239,8239,8287,8287,12288,12288,1,0,40,41,3,0,36,36,39,39,92,92,3,0,34,
  	34,36,36,92,92,2,0,34,34,92,92,3,0,36,36,58,59,92,92,255,0,15,1,0,0,0,
  	0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,
  	1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,1,35,1,0,0,0,1,37,1,0,
  	0,0,1,39,1,0,0,0,1,41,1,0,0,0,1,43,1,0,0,0,2,45,1,0,0,0,2,47,1,0,0,0,
  	2,49,1,0,0,0,2,51,1,0,0,0,2,53,1,0,0,0,3,55,1,0,0,0,3,57,1,0,0,0,3,59,
  	1,0,0,0,3,61,1,0,0,0,3,63,1,0,0,0,3,65,1,0,0,0,4,67,1,0,0,0,4,69,1,0,
  	0,0,4,71,1,0,0,0,4,73,1,0,0,0,4,75,1,0,0,0,5,77,1,0,0,0,7,79,1,0,0,0,
  	9,81,1,0,0,0,11,88,1,0,0,0,13,90,1,0,0,0,15,92,1,0,0,0,17,94,1,0,0,0,
  	19,104,1,0,0,0,21,106,1,0,0,0,23,110,1,0,0,0,25,114,1,0,0,0,27,124,1,
  	0,0,0,29,127,1,0,0,0,31,132,1,0,0,0,33,136,1,0,0,0,35,140,1,0,0,0,37,
  	147,1,0,0,0,39,151,1,0,0,0,41,161,1,0,0,0,43,164,1,0,0,0,45,169,1,0,0,
  	0,47,176,1,0,0,0,49,180,1,0,0,0,51,190,1,0,0,0,53,193,1,0,0,0,55,198,
  	1,0,0,0,57,202,1,0,0,0,59,206,1,0,0,0,61,208,1,0,0,0,63,210,1,0,0,0,65,
  	221,1,0,0,0,67,226,1,0,0,0,69,230,1,0,0,0,71,233,1,0,0,0,73,239,1,0,0,
  	0,75,244,1,0,0,0,77,78,7,0,0,0,78,6,1,0,0,0,79,80,7,1,0,0,80,8,1,0,0,
  	0,81,85,3,5,0,0,82,84,3,7,1,0,83,82,1,0,0,0,84,87,1,0,0,0,85,83,1,0,0,
  	0,85,86,1,0,0,0,86,10,1,0,0,0,87,85,1,0,0,0,88,89,5,36,0,0,89,12,1,0,
  	0,0,90,91,7,2,0,0,91,14,1,0,0,0,92,93,5,40,0,0,93,16,1,0,0,0,94,95,5,
  	41,0,0,95,18,1,0,0,0,96,97,5,92,0,0,97,100,9,0,0,0,98,100,8,3,0,0,99,
  	96,1,0,0,0,99,98,1,0,0,0,100,101,1,0,0,0,101,99,1,0,0,0,101,102,1,0,0,
  	0,102,105,1,0,0,0,103,105,5,36,0,0,104,99,1,0,0,0,104,103,1,0,0,0,105,
  	20,1,0,0,0,106,107,5,39,0,0,107,108,1,0,0,0,108,109,6,8,0,0,109,22,1,
  	0,0,0,110,111,5,34,0,0,111,112,1,0,0,0,112,113,6,9,1,0,113,24,1,0,0,0,
  	114,115,3,11,3,0,115,119,3,15,5,0,116,118,8,4,0,0,117,116,1,0,0,0,118,
  	121,1,0,0,0,119,117,1,0,0,0,119,120,1,0,0,0,120,122,1,0,0,0,121,119,1,
  	0,0,0,122,123,3,17,6,0,123,26,1,0,0,0,124,125,3,11,3,0,125,126,3,9,2,
  	0,126,28,1,0,0,0,127,128,3,11,3,0,128,129,5,123,0,0,129,130,1,0,0,0,130,
  	131,6,12,2,0,131,30,1,0,0,0,132,133,5,38,0,0,133,134,5,38,0,0,134,32,
  	1,0,0,0,135,137,3,13,4,0,136,135,1,0,0,0,137,138,1,0,0,0,138,136,1,0,
  	0,0,138,139,1,0,0,0,139,34,1,0,0,0,140,141,5,39,0,0,141,142,1,0,0,0,142,
  	143,6,15,3,0,143,36,1,0,0,0,144,145,5,92,0,0,145,148,9,0,0,0,146,148,
  	8,5,0,0,147,144,1,0,0,0,147,146,1,0,0,0,148,149,1,0,0,0,149,147,1,0,0,
  	0,149,150,1,0,0,0,150,38,1,0,0,0,151,152,3,11,3,0,152,156,3,15,5,0,153,
  	155,8,4,0,0,154,153,1,0,0,0,155,158,1,0,0,0,156,154,1,0,0,0,156,157,1,
  	0,0,0,157,159,1,0,0,0,158,156,1,0,0,0,159,160,3,17,6,0,160,40,1,0,0,0,
  	161,162,3,11,3,0,162,163,3,9,2,0,163,42,1,0,0,0,164,165,3,11,3,0,165,
  	166,5,123,0,0,166,167,1,0,0,0,167,168,6,19,2,0,168,44,1,0,0,0,169,170,
  	5,34,0,0,170,171,1,0,0,0,171,172,6,20,3,0,172,46,1,0,0,0,173,174,5,92,
  	0,0,174,177,9,0,0,0,175,177,8,6,0,0,176,173,1,0,0,0,176,175,1,0,0,0,177,
  	178,1,0,0,0,178,176,1,0,0,0,178,179,1,0,0,0,179,48,1,0,0,0,180,181,3,
  	11,3,0,181,185,3,15,5,0,182,184,8,4,0,0,183,182,1,0,0,0,184,187,1,0,0,
  	0,185,183,1,0,0,0,185,186,1,0,0,0,186,188,1,0,0,0,187,185,1,0,0,0,188,
  	189,3,17,6,0,189,50,1,0,0,0,190,191,3,11,3,0,191,192,3,9,2,0,192,52,1,
  	0,0,0,193,194,3,11,3,0,194,195,5,123,0,0,195,196,1,0,0,0,196,197,6,24,
  	2,0,197,54,1,0,0,0,198,199,5,125,0,0,199,200,1,0,0,0,200,201,6,25,3,0,
  	201,56,1,0,0,0,202,203,5,61,0,0,203,204,1,0,0,0,204,205,6,26,4,0,205,
  	58,1,0,0,0,206,207,5,59,0,0,207,60,1,0,0,0,208,209,5,58,0,0,209,62,1,
  	0,0,0,210,216,5,34,0,0,211,212,5,92,0,0,212,215,9,0,0,0,213,215,8,7,0,
  	0,214,211,1,0,0,0,214,213,1,0,0,0,215,218,1,0,0,0,216,214,1,0,0,0,216,
  	217,1,0,0,0,217,219,1,0,0,0,218,216,1,0,0,0,219,220,5,34,0,0,220,64,1,
  	0,0,0,221,222,3,9,2,0,222,66,1,0,0,0,223,224,5,92,0,0,224,227,7,8,0,0,
  	225,227,8,8,0,0,226,223,1,0,0,0,226,225,1,0,0,0,227,228,1,0,0,0,228,226,
  	1,0,0,0,228,229,1,0,0,0,229,68,1,0,0,0,230,231,5,36,0,0,231,232,3,9,2,
  	0,232,70,1,0,0,0,233,234,5,36,0,0,234,235,5,123,0,0,235,236,1,0,0,0,236,
  	237,3,9,2,0,237,238,5,125,0,0,238,72,1,0,0,0,239,240,5,59,0,0,240,241,
  	1,0,0,0,241,242,6,34,3,0,242,243,6,34,5,0,243,74,1,0,0,0,244,245,5,58,
  	0,0,245,246,1,0,0,0,246,247,6,35,3,0,247,248,6,35,6,0,248,76,1,0,0,0,
  	21,0,1,2,3,4,85,99,101,104,119,138,147,149,156,176,178,185,214,216,226,
  	228,7,5,1,0,5,2,0,5,3,0,4,0,0,5,4,0,7,23,0,7,24,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  cmdlexerLexerStaticData = staticData.release();
}

}

CmdLexer::CmdLexer(CharStream *input) : Lexer(input) {
  CmdLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *cmdlexerLexerStaticData->atn, cmdlexerLexerStaticData->decisionToDFA, cmdlexerLexerStaticData->sharedContextCache);
}

CmdLexer::~CmdLexer() {
  delete _interpreter;
}

std::string CmdLexer::getGrammarFileName() const {
  return "CmdLexer.g4";
}

const std::vector<std::string>& CmdLexer::getRuleNames() const {
  return cmdlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& CmdLexer::getChannelNames() const {
  return cmdlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& CmdLexer::getModeNames() const {
  return cmdlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& CmdLexer::getVocabulary() const {
  return cmdlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView CmdLexer::getSerializedATN() const {
  return cmdlexerLexerStaticData->serializedATN;
}

const atn::ATN& CmdLexer::getATN() const {
  return *cmdlexerLexerStaticData->atn;
}




void CmdLexer::initialize() {
  ::antlr4::internal::call_once(cmdlexerLexerOnceFlag, cmdlexerLexerInitialize);
}
