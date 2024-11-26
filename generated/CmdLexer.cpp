
// Generated from /place/sandbox-data/tasks/8/1/2625932518/__FUSE/mount_path_2c1dce34-9bbf-4bc5-b2ae-da9b834667ac/trunk/arcadia/devtools/ymake/lang/CmdLexer.g4 by ANTLR 4.11.1


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
  	4,0,29,246,6,-1,6,-1,6,-1,6,-1,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,
  	4,7,4,2,5,7,5,2,6,7,6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,
  	7,12,2,13,7,13,2,14,7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,
  	7,19,2,20,7,20,2,21,7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,
  	7,26,2,27,7,27,2,28,7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,
  	7,33,2,34,7,34,2,35,7,35,1,0,1,0,1,1,1,1,1,2,1,2,5,2,84,8,2,10,2,12,2,
  	87,9,2,1,3,1,3,1,4,1,4,1,5,1,5,1,6,1,6,1,7,1,7,1,7,4,7,100,8,7,11,7,12,
  	7,101,1,8,1,8,1,8,1,8,1,9,1,9,1,9,1,9,1,10,1,10,1,10,5,10,115,8,10,10,
  	10,12,10,118,9,10,1,10,1,10,1,11,1,11,1,11,1,12,1,12,1,12,1,12,1,12,1,
  	13,1,13,1,13,1,14,4,14,134,8,14,11,14,12,14,135,1,15,1,15,1,15,1,15,1,
  	16,1,16,1,16,4,16,145,8,16,11,16,12,16,146,1,17,1,17,1,17,5,17,152,8,
  	17,10,17,12,17,155,9,17,1,17,1,17,1,18,1,18,1,18,1,19,1,19,1,19,1,19,
  	1,19,1,20,1,20,1,20,1,20,1,21,1,21,1,21,4,21,174,8,21,11,21,12,21,175,
  	1,22,1,22,1,22,5,22,181,8,22,10,22,12,22,184,9,22,1,22,1,22,1,23,1,23,
  	1,23,1,24,1,24,1,24,1,24,1,24,1,25,1,25,1,25,1,25,1,26,1,26,1,26,1,26,
  	1,27,1,27,1,28,1,28,1,29,1,29,1,29,1,29,5,29,212,8,29,10,29,12,29,215,
  	9,29,1,29,1,29,1,30,1,30,1,31,1,31,1,31,4,31,224,8,31,11,31,12,31,225,
  	1,32,1,32,1,32,1,33,1,33,1,33,1,33,1,33,1,33,1,34,1,34,1,34,1,34,1,34,
  	1,35,1,35,1,35,1,35,1,35,0,0,36,5,0,7,0,9,0,11,0,13,0,15,1,17,2,19,3,
  	21,4,23,5,25,6,27,7,29,8,31,9,33,10,35,11,37,12,39,13,41,14,43,15,45,
  	16,47,17,49,18,51,19,53,20,55,21,57,22,59,23,61,24,63,25,65,26,67,27,
  	69,28,71,29,73,0,75,0,5,0,1,2,3,4,9,3,0,65,90,95,95,97,122,4,0,48,57,
  	65,90,95,95,97,122,10,0,9,13,32,32,133,133,160,160,5760,5760,8192,8202,
  	8232,8233,8239,8239,8287,8287,12288,12288,14,0,9,13,32,32,34,34,36,36,
  	38,41,92,92,133,133,160,160,5760,5760,8192,8202,8232,8233,8239,8239,8287,
  	8287,12288,12288,1,0,40,41,3,0,36,36,39,39,92,92,3,0,34,34,36,36,92,92,
  	2,0,34,34,92,92,3,0,36,36,58,59,92,92,251,0,15,1,0,0,0,0,17,1,0,0,0,0,
  	19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,
  	0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,1,35,1,0,0,0,1,37,1,0,0,0,1,39,1,0,0,
  	0,1,41,1,0,0,0,1,43,1,0,0,0,2,45,1,0,0,0,2,47,1,0,0,0,2,49,1,0,0,0,2,
  	51,1,0,0,0,2,53,1,0,0,0,3,55,1,0,0,0,3,57,1,0,0,0,3,59,1,0,0,0,3,61,1,
  	0,0,0,3,63,1,0,0,0,3,65,1,0,0,0,4,67,1,0,0,0,4,69,1,0,0,0,4,71,1,0,0,
  	0,4,73,1,0,0,0,4,75,1,0,0,0,5,77,1,0,0,0,7,79,1,0,0,0,9,81,1,0,0,0,11,
  	88,1,0,0,0,13,90,1,0,0,0,15,92,1,0,0,0,17,94,1,0,0,0,19,99,1,0,0,0,21,
  	103,1,0,0,0,23,107,1,0,0,0,25,111,1,0,0,0,27,121,1,0,0,0,29,124,1,0,0,
  	0,31,129,1,0,0,0,33,133,1,0,0,0,35,137,1,0,0,0,37,144,1,0,0,0,39,148,
  	1,0,0,0,41,158,1,0,0,0,43,161,1,0,0,0,45,166,1,0,0,0,47,173,1,0,0,0,49,
  	177,1,0,0,0,51,187,1,0,0,0,53,190,1,0,0,0,55,195,1,0,0,0,57,199,1,0,0,
  	0,59,203,1,0,0,0,61,205,1,0,0,0,63,207,1,0,0,0,65,218,1,0,0,0,67,223,
  	1,0,0,0,69,227,1,0,0,0,71,230,1,0,0,0,73,236,1,0,0,0,75,241,1,0,0,0,77,
  	78,7,0,0,0,78,6,1,0,0,0,79,80,7,1,0,0,80,8,1,0,0,0,81,85,3,5,0,0,82,84,
  	3,7,1,0,83,82,1,0,0,0,84,87,1,0,0,0,85,83,1,0,0,0,85,86,1,0,0,0,86,10,
  	1,0,0,0,87,85,1,0,0,0,88,89,5,36,0,0,89,12,1,0,0,0,90,91,7,2,0,0,91,14,
  	1,0,0,0,92,93,5,40,0,0,93,16,1,0,0,0,94,95,5,41,0,0,95,18,1,0,0,0,96,
  	97,5,92,0,0,97,100,9,0,0,0,98,100,8,3,0,0,99,96,1,0,0,0,99,98,1,0,0,0,
  	100,101,1,0,0,0,101,99,1,0,0,0,101,102,1,0,0,0,102,20,1,0,0,0,103,104,
  	5,39,0,0,104,105,1,0,0,0,105,106,6,8,0,0,106,22,1,0,0,0,107,108,5,34,
  	0,0,108,109,1,0,0,0,109,110,6,9,1,0,110,24,1,0,0,0,111,112,3,11,3,0,112,
  	116,3,15,5,0,113,115,8,4,0,0,114,113,1,0,0,0,115,118,1,0,0,0,116,114,
  	1,0,0,0,116,117,1,0,0,0,117,119,1,0,0,0,118,116,1,0,0,0,119,120,3,17,
  	6,0,120,26,1,0,0,0,121,122,3,11,3,0,122,123,3,9,2,0,123,28,1,0,0,0,124,
  	125,3,11,3,0,125,126,5,123,0,0,126,127,1,0,0,0,127,128,6,12,2,0,128,30,
  	1,0,0,0,129,130,5,38,0,0,130,131,5,38,0,0,131,32,1,0,0,0,132,134,3,13,
  	4,0,133,132,1,0,0,0,134,135,1,0,0,0,135,133,1,0,0,0,135,136,1,0,0,0,136,
  	34,1,0,0,0,137,138,5,39,0,0,138,139,1,0,0,0,139,140,6,15,3,0,140,36,1,
  	0,0,0,141,142,5,92,0,0,142,145,9,0,0,0,143,145,8,5,0,0,144,141,1,0,0,
  	0,144,143,1,0,0,0,145,146,1,0,0,0,146,144,1,0,0,0,146,147,1,0,0,0,147,
  	38,1,0,0,0,148,149,3,11,3,0,149,153,3,15,5,0,150,152,8,4,0,0,151,150,
  	1,0,0,0,152,155,1,0,0,0,153,151,1,0,0,0,153,154,1,0,0,0,154,156,1,0,0,
  	0,155,153,1,0,0,0,156,157,3,17,6,0,157,40,1,0,0,0,158,159,3,11,3,0,159,
  	160,3,9,2,0,160,42,1,0,0,0,161,162,3,11,3,0,162,163,5,123,0,0,163,164,
  	1,0,0,0,164,165,6,19,2,0,165,44,1,0,0,0,166,167,5,34,0,0,167,168,1,0,
  	0,0,168,169,6,20,3,0,169,46,1,0,0,0,170,171,5,92,0,0,171,174,9,0,0,0,
  	172,174,8,6,0,0,173,170,1,0,0,0,173,172,1,0,0,0,174,175,1,0,0,0,175,173,
  	1,0,0,0,175,176,1,0,0,0,176,48,1,0,0,0,177,178,3,11,3,0,178,182,3,15,
  	5,0,179,181,8,4,0,0,180,179,1,0,0,0,181,184,1,0,0,0,182,180,1,0,0,0,182,
  	183,1,0,0,0,183,185,1,0,0,0,184,182,1,0,0,0,185,186,3,17,6,0,186,50,1,
  	0,0,0,187,188,3,11,3,0,188,189,3,9,2,0,189,52,1,0,0,0,190,191,3,11,3,
  	0,191,192,5,123,0,0,192,193,1,0,0,0,193,194,6,24,2,0,194,54,1,0,0,0,195,
  	196,5,125,0,0,196,197,1,0,0,0,197,198,6,25,3,0,198,56,1,0,0,0,199,200,
  	5,61,0,0,200,201,1,0,0,0,201,202,6,26,4,0,202,58,1,0,0,0,203,204,5,59,
  	0,0,204,60,1,0,0,0,205,206,5,58,0,0,206,62,1,0,0,0,207,213,5,34,0,0,208,
  	209,5,92,0,0,209,212,9,0,0,0,210,212,8,7,0,0,211,208,1,0,0,0,211,210,
  	1,0,0,0,212,215,1,0,0,0,213,211,1,0,0,0,213,214,1,0,0,0,214,216,1,0,0,
  	0,215,213,1,0,0,0,216,217,5,34,0,0,217,64,1,0,0,0,218,219,3,9,2,0,219,
  	66,1,0,0,0,220,221,5,92,0,0,221,224,7,8,0,0,222,224,8,8,0,0,223,220,1,
  	0,0,0,223,222,1,0,0,0,224,225,1,0,0,0,225,223,1,0,0,0,225,226,1,0,0,0,
  	226,68,1,0,0,0,227,228,5,36,0,0,228,229,3,9,2,0,229,70,1,0,0,0,230,231,
  	5,36,0,0,231,232,5,123,0,0,232,233,1,0,0,0,233,234,3,9,2,0,234,235,5,
  	125,0,0,235,72,1,0,0,0,236,237,5,59,0,0,237,238,1,0,0,0,238,239,6,34,
  	3,0,239,240,6,34,5,0,240,74,1,0,0,0,241,242,5,58,0,0,242,243,1,0,0,0,
  	243,244,6,35,3,0,244,245,6,35,6,0,245,76,1,0,0,0,20,0,1,2,3,4,85,99,101,
  	116,135,144,146,153,173,175,182,211,213,223,225,7,5,1,0,5,2,0,5,3,0,4,
  	0,0,5,4,0,7,23,0,7,24,0
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
