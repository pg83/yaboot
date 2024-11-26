
#include "TConfLexer.h"
#include <util/generic/string.h>
#include <util/stream/output.h>


// Generated from /place/sandbox-data/tasks/8/1/2625932518/__FUSE/mount_path_2c1dce34-9bbf-4bc5-b2ae-da9b834667ac/trunk/arcadia/devtools/ymake/lang/TConf.g4 by ANTLR 4.11.1


#include "TConfVisitor.h"

#include "TConfParser.h"


using namespace antlrcpp;
using namespace NConfReader;

using namespace antlr4;

namespace {

struct TConfParserStaticData final {
  TConfParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  TConfParserStaticData(const TConfParserStaticData&) = delete;
  TConfParserStaticData(TConfParserStaticData&&) = delete;
  TConfParserStaticData& operator=(const TConfParserStaticData&) = delete;
  TConfParserStaticData& operator=(TConfParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag tconfParserOnceFlag;
TConfParserStaticData *tconfParserStaticData = nullptr;

void tconfParserInitialize() {
  assert(tconfParserStaticData == nullptr);
  auto staticData = std::make_unique<TConfParserStaticData>(
    std::vector<std::string>{
      "entries", "entry", "stmt", "importStmt", "propStmt", "propName", 
      "propValue", "comment", "docComment", "simpleStmt", "simpleBlockStmt", 
      "simpleBlock", "assignStmt", "assignOp", "rvalue", "callStmt", "actualArgs", 
      "blockStmt", "block", "whenStmt", "whenClause", "elseWhenClause", 
      "otherwiseClause", "selectStmt", "alternativeClause", "defaultClause", 
      "foreachStmt", "extStmt", "ext", "extName", "macroDefSignature", "macroDef", 
      "macroName", "formalArgs", "vararg", "formalArg", "deepReplace", "modifiers", 
      "modifier", "arraySpec", "boolSpec", "boolInit", "defaultInit", "specArg", 
      "argName", "multiModuleDefSignature", "multiModuleDef", "moduleDefStmt", 
      "moduleDefSignature", "moduleDef", "moduleName", "ancestor", "logicExpr", 
      "logicOr", "logicAnd", "logicRel", "logicNot", "logicTerm", "logicIn", 
      "stringArray", "logicVarRef", "relationOp", "negationOp", "inOp", 
      "varRef", "varName", "ident", "string", "stringContent"
    },
    std::vector<std::string>{
      "", "'@import'", "'.'", "'{'", "'}'", "'='", "':='", "'+='", "'-='", 
      "'\\'", "'('", "')'", "'when'", "'elsewhen'", "'otherwise'", "'select'", 
      "'|'", "'\\u003F'", "'default'", "'foreach'", "':'", "'['", "','", 
      "']'", "'*'", "'macro'", "'...'", "';'", "'input'", "'output'", "'tool'", 
      "'[]'", "'multimodule'", "'module'", "'||'", "'&&'", "'!='", "'=='", 
      "'!'", "'in'", "'$'", "'param'", "'\"'", "", "", "", "", "", "'\\n'", 
      "'\\r'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "ID", "RVAL_SYMBOL", "DOC_COMMENT", 
      "COMMENT", "SP", "EOL", "RC"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,49,834,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,7,
  	42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,2,49,7,
  	49,2,50,7,50,2,51,7,51,2,52,7,52,2,53,7,53,2,54,7,54,2,55,7,55,2,56,7,
  	56,2,57,7,57,2,58,7,58,2,59,7,59,2,60,7,60,2,61,7,61,2,62,7,62,2,63,7,
  	63,2,64,7,64,2,65,7,65,2,66,7,66,2,67,7,67,2,68,7,68,1,0,3,0,140,8,0,
  	1,0,1,0,1,0,3,0,145,8,0,1,0,5,0,148,8,0,10,0,12,0,151,9,0,1,0,1,0,1,1,
  	1,1,1,1,1,1,1,1,3,1,160,8,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,
  	2,1,2,1,2,3,2,175,8,2,1,2,1,2,1,2,1,2,1,2,1,2,3,2,183,8,2,1,2,1,2,3,2,
  	187,8,2,1,3,1,3,1,3,1,3,1,4,1,4,1,4,3,4,196,8,4,1,4,1,4,1,4,1,5,1,5,1,
  	6,5,6,204,8,6,10,6,12,6,207,9,6,1,7,1,7,1,8,1,8,1,9,1,9,1,10,1,10,1,10,
  	1,10,1,11,1,11,3,11,221,8,11,1,11,1,11,3,11,225,8,11,1,11,1,11,1,11,1,
  	11,3,11,231,8,11,5,11,233,8,11,10,11,12,11,236,9,11,1,11,1,11,3,11,240,
  	8,11,1,11,1,11,3,11,244,8,11,1,12,1,12,3,12,248,8,12,1,12,1,12,1,12,1,
  	13,1,13,1,14,1,14,1,14,1,14,3,14,259,8,14,1,14,5,14,262,8,14,10,14,12,
  	14,265,9,14,1,15,1,15,3,15,269,8,15,1,15,1,15,3,15,273,8,15,1,15,1,15,
  	3,15,277,8,15,1,15,1,15,3,15,281,8,15,1,16,5,16,284,8,16,10,16,12,16,
  	287,9,16,1,17,1,17,1,18,1,18,1,18,3,18,294,8,18,1,18,1,18,3,18,298,8,
  	18,1,18,5,18,301,8,18,10,18,12,18,304,9,18,1,18,1,18,3,18,308,8,18,1,
  	18,1,18,1,18,3,18,313,8,18,1,19,1,19,1,19,3,19,318,8,19,1,19,3,19,321,
  	8,19,4,19,323,8,19,11,19,12,19,324,1,19,5,19,328,8,19,10,19,12,19,331,
  	9,19,1,19,1,19,3,19,335,8,19,1,19,3,19,338,8,19,4,19,340,8,19,11,19,12,
  	19,341,1,19,3,19,345,8,19,1,20,1,20,3,20,349,8,20,1,20,1,20,3,20,353,
  	8,20,1,20,1,20,3,20,357,8,20,1,20,1,20,3,20,361,8,20,1,20,1,20,1,21,1,
  	21,3,21,367,8,21,1,21,1,21,3,21,371,8,21,1,21,1,21,3,21,375,8,21,1,21,
  	1,21,3,21,379,8,21,1,21,1,21,1,22,1,22,3,22,385,8,22,1,22,1,22,1,23,1,
  	23,3,23,391,8,23,1,23,1,23,3,23,395,8,23,1,23,1,23,3,23,399,8,23,1,23,
  	1,23,3,23,403,8,23,1,23,1,23,3,23,407,8,23,1,23,1,23,3,23,411,8,23,1,
  	23,3,23,414,8,23,4,23,416,8,23,11,23,12,23,417,1,23,4,23,421,8,23,11,
  	23,12,23,422,1,23,1,23,3,23,427,8,23,1,23,3,23,430,8,23,4,23,432,8,23,
  	11,23,12,23,433,1,23,3,23,437,8,23,1,23,1,23,3,23,441,8,23,1,23,1,23,
  	3,23,445,8,23,1,24,1,24,3,24,449,8,24,1,24,1,24,3,24,453,8,24,1,24,5,
  	24,456,8,24,10,24,12,24,459,9,24,1,24,3,24,462,8,24,1,24,1,24,3,24,466,
  	8,24,1,24,1,24,1,25,1,25,3,25,472,8,25,1,25,1,25,3,25,476,8,25,1,25,1,
  	25,1,26,1,26,3,26,482,8,26,1,26,1,26,3,26,486,8,26,1,26,1,26,3,26,490,
  	8,26,1,26,1,26,3,26,494,8,26,1,26,1,26,3,26,498,8,26,1,26,1,26,3,26,502,
  	8,26,1,26,1,26,1,26,1,26,1,27,1,27,3,27,510,8,27,1,27,1,27,3,27,514,8,
  	27,1,27,1,27,3,27,518,8,27,1,27,5,27,521,8,27,10,27,12,27,524,9,27,1,
  	27,3,27,527,8,27,1,27,1,27,3,27,531,8,27,1,27,1,27,1,27,1,28,1,28,1,28,
  	1,29,1,29,3,29,541,8,29,1,30,1,30,3,30,545,8,30,1,30,1,30,3,30,549,8,
  	30,1,30,1,30,3,30,553,8,30,1,30,1,30,3,30,557,8,30,3,30,559,8,30,1,30,
  	1,30,1,31,1,31,1,31,3,31,566,8,31,1,31,1,31,1,31,1,32,1,32,1,33,1,33,
  	1,33,3,33,576,8,33,1,33,1,33,3,33,580,8,33,1,33,5,33,583,8,33,10,33,12,
  	33,586,9,33,1,33,3,33,589,8,33,1,33,1,33,3,33,593,8,33,1,33,3,33,596,
  	8,33,3,33,598,8,33,1,34,1,34,1,34,1,35,1,35,1,35,3,35,606,8,35,1,35,1,
  	35,1,35,3,35,611,8,35,1,35,3,35,614,8,35,1,35,3,35,617,8,35,1,35,3,35,
  	620,8,35,3,35,622,8,35,1,36,1,36,1,36,1,36,1,37,1,37,1,37,5,37,631,8,
  	37,10,37,12,37,634,9,37,1,38,1,38,1,39,1,39,1,40,1,40,1,41,1,41,3,41,
  	644,8,41,1,41,1,41,3,41,648,8,41,1,41,1,41,1,42,1,42,3,42,654,8,42,1,
  	42,1,42,1,43,1,43,1,44,1,44,1,45,1,45,3,45,664,8,45,1,45,1,45,1,46,1,
  	46,1,46,3,46,671,8,46,1,46,1,46,1,46,1,47,1,47,1,48,1,48,3,48,680,8,48,
  	1,48,1,48,3,48,684,8,48,1,48,1,48,3,48,688,8,48,3,48,690,8,48,1,49,1,
  	49,1,49,1,49,1,49,1,50,1,50,1,51,1,51,3,51,701,8,51,1,51,1,51,1,52,1,
  	52,3,52,707,8,52,1,53,1,53,3,53,711,8,53,1,53,1,53,3,53,715,8,53,1,53,
  	5,53,718,8,53,10,53,12,53,721,9,53,1,54,1,54,3,54,725,8,54,1,54,1,54,
  	3,54,729,8,54,1,54,5,54,732,8,54,10,54,12,54,735,9,54,1,55,1,55,3,55,
  	739,8,55,1,55,1,55,3,55,743,8,55,1,55,1,55,3,55,747,8,55,1,56,1,56,3,
  	56,751,8,56,3,56,753,8,56,1,56,1,56,1,57,1,57,1,57,1,57,3,57,761,8,57,
  	1,57,1,57,3,57,765,8,57,1,57,1,57,3,57,769,8,57,1,58,1,58,3,58,773,8,
  	58,1,58,1,58,1,58,1,58,1,58,3,58,780,8,58,1,59,1,59,3,59,784,8,59,1,59,
  	1,59,3,59,788,8,59,1,59,1,59,3,59,792,8,59,1,59,5,59,795,8,59,10,59,12,
  	59,798,9,59,1,59,3,59,801,8,59,3,59,803,8,59,1,59,1,59,1,60,1,60,1,61,
  	1,61,1,62,1,62,1,63,1,63,1,64,1,64,1,64,1,65,1,65,1,66,1,66,1,67,1,67,
  	1,67,1,67,1,68,1,68,1,68,5,68,829,8,68,10,68,12,68,832,9,68,1,68,0,0,
  	69,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,
  	48,50,52,54,56,58,60,62,64,66,68,70,72,74,76,78,80,82,84,86,88,90,92,
  	94,96,98,100,102,104,106,108,110,112,114,116,118,120,122,124,126,128,
  	130,132,134,136,0,6,1,0,48,48,1,0,5,8,1,0,28,30,1,0,36,37,6,0,25,25,28,
  	30,33,33,39,39,41,41,43,43,2,0,42,42,48,48,920,0,139,1,0,0,0,2,159,1,
  	0,0,0,4,186,1,0,0,0,6,188,1,0,0,0,8,192,1,0,0,0,10,200,1,0,0,0,12,205,
  	1,0,0,0,14,208,1,0,0,0,16,210,1,0,0,0,18,212,1,0,0,0,20,214,1,0,0,0,22,
  	218,1,0,0,0,24,245,1,0,0,0,26,252,1,0,0,0,28,263,1,0,0,0,30,266,1,0,0,
  	0,32,285,1,0,0,0,34,288,1,0,0,0,36,290,1,0,0,0,38,314,1,0,0,0,40,346,
  	1,0,0,0,42,364,1,0,0,0,44,382,1,0,0,0,46,388,1,0,0,0,48,446,1,0,0,0,50,
  	469,1,0,0,0,52,479,1,0,0,0,54,507,1,0,0,0,56,535,1,0,0,0,58,540,1,0,0,
  	0,60,542,1,0,0,0,62,562,1,0,0,0,64,570,1,0,0,0,66,597,1,0,0,0,68,599,
  	1,0,0,0,70,621,1,0,0,0,72,623,1,0,0,0,74,627,1,0,0,0,76,635,1,0,0,0,78,
  	637,1,0,0,0,80,639,1,0,0,0,82,641,1,0,0,0,84,651,1,0,0,0,86,657,1,0,0,
  	0,88,659,1,0,0,0,90,661,1,0,0,0,92,667,1,0,0,0,94,675,1,0,0,0,96,677,
  	1,0,0,0,98,691,1,0,0,0,100,696,1,0,0,0,102,698,1,0,0,0,104,706,1,0,0,
  	0,106,708,1,0,0,0,108,722,1,0,0,0,110,736,1,0,0,0,112,752,1,0,0,0,114,
  	768,1,0,0,0,116,772,1,0,0,0,118,781,1,0,0,0,120,806,1,0,0,0,122,808,1,
  	0,0,0,124,810,1,0,0,0,126,812,1,0,0,0,128,814,1,0,0,0,130,817,1,0,0,0,
  	132,819,1,0,0,0,134,821,1,0,0,0,136,830,1,0,0,0,138,140,5,47,0,0,139,
  	138,1,0,0,0,139,140,1,0,0,0,140,141,1,0,0,0,141,149,3,2,1,0,142,144,5,
  	48,0,0,143,145,5,47,0,0,144,143,1,0,0,0,144,145,1,0,0,0,145,146,1,0,0,
  	0,146,148,3,2,1,0,147,142,1,0,0,0,148,151,1,0,0,0,149,147,1,0,0,0,149,
  	150,1,0,0,0,150,152,1,0,0,0,151,149,1,0,0,0,152,153,5,0,0,1,153,1,1,0,
  	0,0,154,160,3,6,3,0,155,160,3,4,2,0,156,160,3,62,31,0,157,160,3,98,49,
  	0,158,160,3,92,46,0,159,154,1,0,0,0,159,155,1,0,0,0,159,156,1,0,0,0,159,
  	157,1,0,0,0,159,158,1,0,0,0,160,3,1,0,0,0,161,162,4,2,0,0,162,187,3,8,
  	4,0,163,164,4,2,1,0,164,187,3,8,4,0,165,166,4,2,2,0,166,187,3,94,47,0,
  	167,168,4,2,3,0,168,187,3,30,15,0,169,170,4,2,4,0,170,187,3,52,26,0,171,
  	174,4,2,5,0,172,175,3,30,15,0,173,175,3,54,27,0,174,172,1,0,0,0,174,173,
  	1,0,0,0,175,187,1,0,0,0,176,177,4,2,6,0,177,187,3,54,27,0,178,182,4,2,
  	7,0,179,183,3,18,9,0,180,183,3,38,19,0,181,183,3,46,23,0,182,179,1,0,
  	0,0,182,180,1,0,0,0,182,181,1,0,0,0,183,187,1,0,0,0,184,187,3,14,7,0,
  	185,187,3,16,8,0,186,161,1,0,0,0,186,163,1,0,0,0,186,165,1,0,0,0,186,
  	167,1,0,0,0,186,169,1,0,0,0,186,171,1,0,0,0,186,176,1,0,0,0,186,178,1,
  	0,0,0,186,184,1,0,0,0,186,185,1,0,0,0,186,187,1,0,0,0,187,5,1,0,0,0,188,
  	189,5,1,0,0,189,190,5,47,0,0,190,191,3,134,67,0,191,7,1,0,0,0,192,193,
  	5,2,0,0,193,195,3,10,5,0,194,196,5,47,0,0,195,194,1,0,0,0,195,196,1,0,
  	0,0,196,197,1,0,0,0,197,198,3,26,13,0,198,199,3,12,6,0,199,9,1,0,0,0,
  	200,201,3,132,66,0,201,11,1,0,0,0,202,204,8,0,0,0,203,202,1,0,0,0,204,
  	207,1,0,0,0,205,203,1,0,0,0,205,206,1,0,0,0,206,13,1,0,0,0,207,205,1,
  	0,0,0,208,209,5,46,0,0,209,15,1,0,0,0,210,211,5,45,0,0,211,17,1,0,0,0,
  	212,213,3,24,12,0,213,19,1,0,0,0,214,215,6,10,-1,0,215,216,3,22,11,0,
  	216,217,6,10,-1,0,217,21,1,0,0,0,218,220,5,3,0,0,219,221,5,47,0,0,220,
  	219,1,0,0,0,220,221,1,0,0,0,221,234,1,0,0,0,222,224,5,48,0,0,223,225,
  	5,47,0,0,224,223,1,0,0,0,224,225,1,0,0,0,225,230,1,0,0,0,226,231,3,14,
  	7,0,227,231,3,18,9,0,228,231,3,38,19,0,229,231,3,46,23,0,230,226,1,0,
  	0,0,230,227,1,0,0,0,230,228,1,0,0,0,230,229,1,0,0,0,230,231,1,0,0,0,231,
  	233,1,0,0,0,232,222,1,0,0,0,233,236,1,0,0,0,234,232,1,0,0,0,234,235,1,
  	0,0,0,235,237,1,0,0,0,236,234,1,0,0,0,237,239,5,48,0,0,238,240,5,47,0,
  	0,239,238,1,0,0,0,239,240,1,0,0,0,240,241,1,0,0,0,241,243,5,4,0,0,242,
  	244,5,47,0,0,243,242,1,0,0,0,243,244,1,0,0,0,244,23,1,0,0,0,245,247,3,
  	132,66,0,246,248,5,47,0,0,247,246,1,0,0,0,247,248,1,0,0,0,248,249,1,0,
  	0,0,249,250,3,26,13,0,250,251,3,28,14,0,251,25,1,0,0,0,252,253,7,1,0,
  	0,253,27,1,0,0,0,254,262,8,0,0,0,255,262,5,44,0,0,256,258,5,9,0,0,257,
  	259,5,49,0,0,258,257,1,0,0,0,258,259,1,0,0,0,259,260,1,0,0,0,260,262,
  	5,48,0,0,261,254,1,0,0,0,261,255,1,0,0,0,261,256,1,0,0,0,262,265,1,0,
  	0,0,263,261,1,0,0,0,263,264,1,0,0,0,264,29,1,0,0,0,265,263,1,0,0,0,266,
  	268,3,64,32,0,267,269,5,47,0,0,268,267,1,0,0,0,268,269,1,0,0,0,269,270,
  	1,0,0,0,270,272,5,10,0,0,271,273,5,47,0,0,272,271,1,0,0,0,272,273,1,0,
  	0,0,273,274,1,0,0,0,274,276,3,32,16,0,275,277,5,47,0,0,276,275,1,0,0,
  	0,276,277,1,0,0,0,277,278,1,0,0,0,278,280,5,11,0,0,279,281,5,47,0,0,280,
  	279,1,0,0,0,280,281,1,0,0,0,281,31,1,0,0,0,282,284,8,0,0,0,283,282,1,
  	0,0,0,284,287,1,0,0,0,285,283,1,0,0,0,285,286,1,0,0,0,286,33,1,0,0,0,
  	287,285,1,0,0,0,288,289,3,36,18,0,289,35,1,0,0,0,290,291,6,18,-1,0,291,
  	293,5,3,0,0,292,294,5,47,0,0,293,292,1,0,0,0,293,294,1,0,0,0,294,302,
  	1,0,0,0,295,297,5,48,0,0,296,298,5,47,0,0,297,296,1,0,0,0,297,298,1,0,
  	0,0,298,299,1,0,0,0,299,301,3,4,2,0,300,295,1,0,0,0,301,304,1,0,0,0,302,
  	300,1,0,0,0,302,303,1,0,0,0,303,305,1,0,0,0,304,302,1,0,0,0,305,307,5,
  	48,0,0,306,308,5,47,0,0,307,306,1,0,0,0,307,308,1,0,0,0,308,309,1,0,0,
  	0,309,310,5,4,0,0,310,312,6,18,-1,0,311,313,5,47,0,0,312,311,1,0,0,0,
  	312,313,1,0,0,0,313,37,1,0,0,0,314,329,3,40,20,0,315,317,5,48,0,0,316,
  	318,5,47,0,0,317,316,1,0,0,0,317,318,1,0,0,0,318,320,1,0,0,0,319,321,
  	3,14,7,0,320,319,1,0,0,0,320,321,1,0,0,0,321,323,1,0,0,0,322,315,1,0,
  	0,0,323,324,1,0,0,0,324,322,1,0,0,0,324,325,1,0,0,0,325,326,1,0,0,0,326,
  	328,3,42,21,0,327,322,1,0,0,0,328,331,1,0,0,0,329,327,1,0,0,0,329,330,
  	1,0,0,0,330,344,1,0,0,0,331,329,1,0,0,0,332,334,5,48,0,0,333,335,5,47,
  	0,0,334,333,1,0,0,0,334,335,1,0,0,0,335,337,1,0,0,0,336,338,3,14,7,0,
  	337,336,1,0,0,0,337,338,1,0,0,0,338,340,1,0,0,0,339,332,1,0,0,0,340,341,
  	1,0,0,0,341,339,1,0,0,0,341,342,1,0,0,0,342,343,1,0,0,0,343,345,3,44,
  	22,0,344,339,1,0,0,0,344,345,1,0,0,0,345,39,1,0,0,0,346,348,5,12,0,0,
  	347,349,5,47,0,0,348,347,1,0,0,0,348,349,1,0,0,0,349,350,1,0,0,0,350,
  	352,5,10,0,0,351,353,5,47,0,0,352,351,1,0,0,0,352,353,1,0,0,0,353,354,
  	1,0,0,0,354,356,3,104,52,0,355,357,5,47,0,0,356,355,1,0,0,0,356,357,1,
  	0,0,0,357,358,1,0,0,0,358,360,5,11,0,0,359,361,5,47,0,0,360,359,1,0,0,
  	0,360,361,1,0,0,0,361,362,1,0,0,0,362,363,3,20,10,0,363,41,1,0,0,0,364,
  	366,5,13,0,0,365,367,5,47,0,0,366,365,1,0,0,0,366,367,1,0,0,0,367,368,
  	1,0,0,0,368,370,5,10,0,0,369,371,5,47,0,0,370,369,1,0,0,0,370,371,1,0,
  	0,0,371,372,1,0,0,0,372,374,3,104,52,0,373,375,5,47,0,0,374,373,1,0,0,
  	0,374,375,1,0,0,0,375,376,1,0,0,0,376,378,5,11,0,0,377,379,5,47,0,0,378,
  	377,1,0,0,0,378,379,1,0,0,0,379,380,1,0,0,0,380,381,3,20,10,0,381,43,
  	1,0,0,0,382,384,5,14,0,0,383,385,5,47,0,0,384,383,1,0,0,0,384,385,1,0,
  	0,0,385,386,1,0,0,0,386,387,3,20,10,0,387,45,1,0,0,0,388,390,5,15,0,0,
  	389,391,5,47,0,0,390,389,1,0,0,0,390,391,1,0,0,0,391,392,1,0,0,0,392,
  	394,5,10,0,0,393,395,5,47,0,0,394,393,1,0,0,0,394,395,1,0,0,0,395,396,
  	1,0,0,0,396,398,3,128,64,0,397,399,5,47,0,0,398,397,1,0,0,0,398,399,1,
  	0,0,0,399,400,1,0,0,0,400,402,5,11,0,0,401,403,5,47,0,0,402,401,1,0,0,
  	0,402,403,1,0,0,0,403,404,1,0,0,0,404,406,5,3,0,0,405,407,5,47,0,0,406,
  	405,1,0,0,0,406,407,1,0,0,0,407,420,1,0,0,0,408,410,5,48,0,0,409,411,
  	5,47,0,0,410,409,1,0,0,0,410,411,1,0,0,0,411,413,1,0,0,0,412,414,3,14,
  	7,0,413,412,1,0,0,0,413,414,1,0,0,0,414,416,1,0,0,0,415,408,1,0,0,0,416,
  	417,1,0,0,0,417,415,1,0,0,0,417,418,1,0,0,0,418,419,1,0,0,0,419,421,3,
  	48,24,0,420,415,1,0,0,0,421,422,1,0,0,0,422,420,1,0,0,0,422,423,1,0,0,
  	0,423,436,1,0,0,0,424,426,5,48,0,0,425,427,5,47,0,0,426,425,1,0,0,0,426,
  	427,1,0,0,0,427,429,1,0,0,0,428,430,3,14,7,0,429,428,1,0,0,0,429,430,
  	1,0,0,0,430,432,1,0,0,0,431,424,1,0,0,0,432,433,1,0,0,0,433,431,1,0,0,
  	0,433,434,1,0,0,0,434,435,1,0,0,0,435,437,3,50,25,0,436,431,1,0,0,0,436,
  	437,1,0,0,0,437,438,1,0,0,0,438,440,5,48,0,0,439,441,5,47,0,0,440,439,
  	1,0,0,0,440,441,1,0,0,0,441,442,1,0,0,0,442,444,5,4,0,0,443,445,5,47,
  	0,0,444,443,1,0,0,0,444,445,1,0,0,0,445,47,1,0,0,0,446,457,3,134,67,0,
  	447,449,5,47,0,0,448,447,1,0,0,0,448,449,1,0,0,0,449,450,1,0,0,0,450,
  	452,5,16,0,0,451,453,5,47,0,0,452,451,1,0,0,0,452,453,1,0,0,0,453,454,
  	1,0,0,0,454,456,3,134,67,0,455,448,1,0,0,0,456,459,1,0,0,0,457,455,1,
  	0,0,0,457,458,1,0,0,0,458,461,1,0,0,0,459,457,1,0,0,0,460,462,5,47,0,
  	0,461,460,1,0,0,0,461,462,1,0,0,0,462,463,1,0,0,0,463,465,5,17,0,0,464,
  	466,5,47,0,0,465,464,1,0,0,0,465,466,1,0,0,0,466,467,1,0,0,0,467,468,
  	3,20,10,0,468,49,1,0,0,0,469,471,5,18,0,0,470,472,5,47,0,0,471,470,1,
  	0,0,0,471,472,1,0,0,0,472,473,1,0,0,0,473,475,5,17,0,0,474,476,5,47,0,
  	0,475,474,1,0,0,0,475,476,1,0,0,0,476,477,1,0,0,0,477,478,3,20,10,0,478,
  	51,1,0,0,0,479,481,5,19,0,0,480,482,5,47,0,0,481,480,1,0,0,0,481,482,
  	1,0,0,0,482,483,1,0,0,0,483,485,5,10,0,0,484,486,5,47,0,0,485,484,1,0,
  	0,0,485,486,1,0,0,0,486,487,1,0,0,0,487,489,3,132,66,0,488,490,5,47,0,
  	0,489,488,1,0,0,0,489,490,1,0,0,0,490,491,1,0,0,0,491,493,5,20,0,0,492,
  	494,5,47,0,0,493,492,1,0,0,0,493,494,1,0,0,0,494,495,1,0,0,0,495,497,
  	3,128,64,0,496,498,5,47,0,0,497,496,1,0,0,0,497,498,1,0,0,0,498,499,1,
  	0,0,0,499,501,5,11,0,0,500,502,5,47,0,0,501,500,1,0,0,0,501,502,1,0,0,
  	0,502,503,1,0,0,0,503,504,6,26,-1,0,504,505,3,34,17,0,505,506,6,26,-1,
  	0,506,53,1,0,0,0,507,509,5,21,0,0,508,510,5,47,0,0,509,508,1,0,0,0,509,
  	510,1,0,0,0,510,511,1,0,0,0,511,522,3,56,28,0,512,514,5,47,0,0,513,512,
  	1,0,0,0,513,514,1,0,0,0,514,515,1,0,0,0,515,517,5,22,0,0,516,518,5,47,
  	0,0,517,516,1,0,0,0,517,518,1,0,0,0,518,519,1,0,0,0,519,521,3,56,28,0,
  	520,513,1,0,0,0,521,524,1,0,0,0,522,520,1,0,0,0,522,523,1,0,0,0,523,526,
  	1,0,0,0,524,522,1,0,0,0,525,527,5,47,0,0,526,525,1,0,0,0,526,527,1,0,
  	0,0,527,528,1,0,0,0,528,530,5,23,0,0,529,531,5,47,0,0,530,529,1,0,0,0,
  	530,531,1,0,0,0,531,532,1,0,0,0,532,533,5,5,0,0,533,534,3,28,14,0,534,
  	55,1,0,0,0,535,536,5,2,0,0,536,537,3,58,29,0,537,57,1,0,0,0,538,541,5,
  	24,0,0,539,541,3,132,66,0,540,538,1,0,0,0,540,539,1,0,0,0,541,59,1,0,
  	0,0,542,544,6,30,-1,0,543,545,5,47,0,0,544,543,1,0,0,0,544,545,1,0,0,
  	0,545,546,1,0,0,0,546,548,3,64,32,0,547,549,5,47,0,0,548,547,1,0,0,0,
  	548,549,1,0,0,0,549,550,1,0,0,0,550,552,5,10,0,0,551,553,5,47,0,0,552,
  	551,1,0,0,0,552,553,1,0,0,0,553,558,1,0,0,0,554,556,3,66,33,0,555,557,
  	5,47,0,0,556,555,1,0,0,0,556,557,1,0,0,0,557,559,1,0,0,0,558,554,1,0,
  	0,0,558,559,1,0,0,0,559,560,1,0,0,0,560,561,5,11,0,0,561,61,1,0,0,0,562,
  	563,5,25,0,0,563,565,3,60,30,0,564,566,5,47,0,0,565,564,1,0,0,0,565,566,
  	1,0,0,0,566,567,1,0,0,0,567,568,3,36,18,0,568,569,6,31,-1,0,569,63,1,
  	0,0,0,570,571,3,132,66,0,571,65,1,0,0,0,572,598,3,68,34,0,573,584,3,70,
  	35,0,574,576,5,47,0,0,575,574,1,0,0,0,575,576,1,0,0,0,576,577,1,0,0,0,
  	577,579,5,22,0,0,578,580,5,47,0,0,579,578,1,0,0,0,579,580,1,0,0,0,580,
  	581,1,0,0,0,581,583,3,70,35,0,582,575,1,0,0,0,583,586,1,0,0,0,584,582,
  	1,0,0,0,584,585,1,0,0,0,585,595,1,0,0,0,586,584,1,0,0,0,587,589,5,47,
  	0,0,588,587,1,0,0,0,588,589,1,0,0,0,589,590,1,0,0,0,590,592,5,22,0,0,
  	591,593,5,47,0,0,592,591,1,0,0,0,592,593,1,0,0,0,593,594,1,0,0,0,594,
  	596,3,68,34,0,595,588,1,0,0,0,595,596,1,0,0,0,596,598,1,0,0,0,597,572,
  	1,0,0,0,597,573,1,0,0,0,598,67,1,0,0,0,599,600,3,88,44,0,600,601,5,26,
  	0,0,601,69,1,0,0,0,602,622,3,86,43,0,603,605,3,88,44,0,604,606,3,72,36,
  	0,605,604,1,0,0,0,605,606,1,0,0,0,606,619,1,0,0,0,607,620,3,78,39,0,608,
  	613,3,80,40,0,609,611,5,47,0,0,610,609,1,0,0,0,610,611,1,0,0,0,611,612,
  	1,0,0,0,612,614,3,82,41,0,613,610,1,0,0,0,613,614,1,0,0,0,614,620,1,0,
  	0,0,615,617,5,47,0,0,616,615,1,0,0,0,616,617,1,0,0,0,617,618,1,0,0,0,
  	618,620,3,84,42,0,619,607,1,0,0,0,619,608,1,0,0,0,619,616,1,0,0,0,619,
  	620,1,0,0,0,620,622,1,0,0,0,621,602,1,0,0,0,621,603,1,0,0,0,622,71,1,
  	0,0,0,623,624,5,3,0,0,624,625,3,74,37,0,625,626,5,4,0,0,626,73,1,0,0,
  	0,627,632,3,76,38,0,628,629,5,27,0,0,629,631,3,76,38,0,630,628,1,0,0,
  	0,631,634,1,0,0,0,632,630,1,0,0,0,632,633,1,0,0,0,633,75,1,0,0,0,634,
  	632,1,0,0,0,635,636,7,2,0,0,636,77,1,0,0,0,637,638,5,31,0,0,638,79,1,
  	0,0,0,639,640,5,17,0,0,640,81,1,0,0,0,641,643,3,134,67,0,642,644,5,47,
  	0,0,643,642,1,0,0,0,643,644,1,0,0,0,644,645,1,0,0,0,645,647,5,20,0,0,
  	646,648,5,47,0,0,647,646,1,0,0,0,647,648,1,0,0,0,648,649,1,0,0,0,649,
  	650,3,134,67,0,650,83,1,0,0,0,651,653,5,5,0,0,652,654,5,47,0,0,653,652,
  	1,0,0,0,653,654,1,0,0,0,654,655,1,0,0,0,655,656,3,134,67,0,656,85,1,0,
  	0,0,657,658,3,134,67,0,658,87,1,0,0,0,659,660,3,132,66,0,660,89,1,0,0,
  	0,661,663,6,45,-1,0,662,664,5,47,0,0,663,662,1,0,0,0,663,664,1,0,0,0,
  	664,665,1,0,0,0,665,666,3,100,50,0,666,91,1,0,0,0,667,668,5,32,0,0,668,
  	670,3,90,45,0,669,671,5,47,0,0,670,669,1,0,0,0,670,671,1,0,0,0,671,672,
  	1,0,0,0,672,673,3,36,18,0,673,674,6,46,-1,0,674,93,1,0,0,0,675,676,3,
  	98,49,0,676,95,1,0,0,0,677,679,6,48,-1,0,678,680,5,47,0,0,679,678,1,0,
  	0,0,679,680,1,0,0,0,680,681,1,0,0,0,681,683,3,100,50,0,682,684,5,47,0,
  	0,683,682,1,0,0,0,683,684,1,0,0,0,684,689,1,0,0,0,685,687,3,102,51,0,
  	686,688,5,47,0,0,687,686,1,0,0,0,687,688,1,0,0,0,688,690,1,0,0,0,689,
  	685,1,0,0,0,689,690,1,0,0,0,690,97,1,0,0,0,691,692,5,33,0,0,692,693,3,
  	96,48,0,693,694,3,36,18,0,694,695,6,49,-1,0,695,99,1,0,0,0,696,697,3,
  	132,66,0,697,101,1,0,0,0,698,700,5,20,0,0,699,701,5,47,0,0,700,699,1,
  	0,0,0,700,701,1,0,0,0,701,702,1,0,0,0,702,703,3,100,50,0,703,103,1,0,
  	0,0,704,707,3,106,53,0,705,707,3,116,58,0,706,704,1,0,0,0,706,705,1,0,
  	0,0,707,105,1,0,0,0,708,719,3,108,54,0,709,711,5,47,0,0,710,709,1,0,0,
  	0,710,711,1,0,0,0,711,712,1,0,0,0,712,714,5,34,0,0,713,715,5,47,0,0,714,
  	713,1,0,0,0,714,715,1,0,0,0,715,716,1,0,0,0,716,718,3,108,54,0,717,710,
  	1,0,0,0,718,721,1,0,0,0,719,717,1,0,0,0,719,720,1,0,0,0,720,107,1,0,0,
  	0,721,719,1,0,0,0,722,733,3,110,55,0,723,725,5,47,0,0,724,723,1,0,0,0,
  	724,725,1,0,0,0,725,726,1,0,0,0,726,728,5,35,0,0,727,729,5,47,0,0,728,
  	727,1,0,0,0,728,729,1,0,0,0,729,730,1,0,0,0,730,732,3,110,55,0,731,724,
  	1,0,0,0,732,735,1,0,0,0,733,731,1,0,0,0,733,734,1,0,0,0,734,109,1,0,0,
  	0,735,733,1,0,0,0,736,746,3,112,56,0,737,739,5,47,0,0,738,737,1,0,0,0,
  	738,739,1,0,0,0,739,740,1,0,0,0,740,742,3,122,61,0,741,743,5,47,0,0,742,
  	741,1,0,0,0,742,743,1,0,0,0,743,744,1,0,0,0,744,745,3,112,56,0,745,747,
  	1,0,0,0,746,738,1,0,0,0,746,747,1,0,0,0,747,111,1,0,0,0,748,750,3,124,
  	62,0,749,751,5,47,0,0,750,749,1,0,0,0,750,751,1,0,0,0,751,753,1,0,0,0,
  	752,748,1,0,0,0,752,753,1,0,0,0,753,754,1,0,0,0,754,755,3,114,57,0,755,
  	113,1,0,0,0,756,769,3,120,60,0,757,769,3,134,67,0,758,760,5,10,0,0,759,
  	761,5,47,0,0,760,759,1,0,0,0,760,761,1,0,0,0,761,762,1,0,0,0,762,764,
  	3,104,52,0,763,765,5,47,0,0,764,763,1,0,0,0,764,765,1,0,0,0,765,766,1,
  	0,0,0,766,767,5,11,0,0,767,769,1,0,0,0,768,756,1,0,0,0,768,757,1,0,0,
  	0,768,758,1,0,0,0,769,115,1,0,0,0,770,773,3,120,60,0,771,773,3,134,67,
  	0,772,770,1,0,0,0,772,771,1,0,0,0,773,774,1,0,0,0,774,775,5,47,0,0,775,
  	776,3,126,63,0,776,779,5,47,0,0,777,780,3,118,59,0,778,780,3,128,64,0,
  	779,777,1,0,0,0,779,778,1,0,0,0,780,117,1,0,0,0,781,783,5,21,0,0,782,
  	784,5,47,0,0,783,782,1,0,0,0,783,784,1,0,0,0,784,802,1,0,0,0,785,796,
  	3,134,67,0,786,788,5,47,0,0,787,786,1,0,0,0,787,788,1,0,0,0,788,789,1,
  	0,0,0,789,791,5,22,0,0,790,792,5,47,0,0,791,790,1,0,0,0,791,792,1,0,0,
  	0,792,793,1,0,0,0,793,795,3,134,67,0,794,787,1,0,0,0,795,798,1,0,0,0,
  	796,794,1,0,0,0,796,797,1,0,0,0,797,800,1,0,0,0,798,796,1,0,0,0,799,801,
  	5,47,0,0,800,799,1,0,0,0,800,801,1,0,0,0,801,803,1,0,0,0,802,785,1,0,
  	0,0,802,803,1,0,0,0,803,804,1,0,0,0,804,805,5,23,0,0,805,119,1,0,0,0,
  	806,807,3,128,64,0,807,121,1,0,0,0,808,809,7,3,0,0,809,123,1,0,0,0,810,
  	811,5,38,0,0,811,125,1,0,0,0,812,813,5,39,0,0,813,127,1,0,0,0,814,815,
  	5,40,0,0,815,816,3,130,65,0,816,129,1,0,0,0,817,818,3,132,66,0,818,131,
  	1,0,0,0,819,820,7,4,0,0,820,133,1,0,0,0,821,822,5,42,0,0,822,823,3,136,
  	68,0,823,824,5,42,0,0,824,135,1,0,0,0,825,826,5,9,0,0,826,829,8,0,0,0,
  	827,829,8,5,0,0,828,825,1,0,0,0,828,827,1,0,0,0,829,832,1,0,0,0,830,828,
  	1,0,0,0,830,831,1,0,0,0,831,137,1,0,0,0,832,830,1,0,0,0,136,139,144,149,
  	159,174,182,186,195,205,220,224,230,234,239,243,247,258,261,263,268,272,
  	276,280,285,293,297,302,307,312,317,320,324,329,334,337,341,344,348,352,
  	356,360,366,370,374,378,384,390,394,398,402,406,410,413,417,422,426,429,
  	433,436,440,444,448,452,457,461,465,471,475,481,485,489,493,497,501,509,
  	513,517,522,526,530,540,544,548,552,556,558,565,575,579,584,588,592,595,
  	597,605,610,613,616,619,621,632,643,647,653,663,670,679,683,687,689,700,
  	706,710,714,719,724,728,733,738,742,746,750,752,760,764,768,772,779,783,
  	787,791,796,800,802,828,830
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  tconfParserStaticData = staticData.release();
}

}

TConfParser::TConfParser(TokenStream *input) : TConfParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

TConfParser::TConfParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  TConfParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *tconfParserStaticData->atn, tconfParserStaticData->decisionToDFA, tconfParserStaticData->sharedContextCache, options);
}

TConfParser::~TConfParser() {
  delete _interpreter;
}

const atn::ATN& TConfParser::getATN() const {
  return *tconfParserStaticData->atn;
}

std::string TConfParser::getGrammarFileName() const {
  return "TConf.g4";
}

const std::vector<std::string>& TConfParser::getRuleNames() const {
  return tconfParserStaticData->ruleNames;
}

const dfa::Vocabulary& TConfParser::getVocabulary() const {
  return tconfParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView TConfParser::getSerializedATN() const {
  return tconfParserStaticData->serializedATN;
}


//----------------- EntriesContext ------------------------------------------------------------------

TConfParser::EntriesContext::EntriesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TConfParser::EntryContext *> TConfParser::EntriesContext::entry() {
  return getRuleContexts<TConfParser::EntryContext>();
}

TConfParser::EntryContext* TConfParser::EntriesContext::entry(size_t i) {
  return getRuleContext<TConfParser::EntryContext>(i);
}

tree::TerminalNode* TConfParser::EntriesContext::EOF() {
  return getToken(TConfParser::EOF, 0);
}

std::vector<tree::TerminalNode *> TConfParser::EntriesContext::SP() {
  return getTokens(TConfParser::SP);
}

tree::TerminalNode* TConfParser::EntriesContext::SP(size_t i) {
  return getToken(TConfParser::SP, i);
}

std::vector<tree::TerminalNode *> TConfParser::EntriesContext::EOL() {
  return getTokens(TConfParser::EOL);
}

tree::TerminalNode* TConfParser::EntriesContext::EOL(size_t i) {
  return getToken(TConfParser::EOL, i);
}


size_t TConfParser::EntriesContext::getRuleIndex() const {
  return TConfParser::RuleEntries;
}


std::any TConfParser::EntriesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TConfVisitor*>(visitor))
    return parserVisitor->visitEntries(this);
  else
    return visitor->visitChildren(this);
}

TConfParser::EntriesContext* TConfParser::entries() {
  EntriesContext *_localctx = _tracker.createInstance<EntriesContext>(_ctx, getState());
  enterRule(_localctx, 0, TConfParser::RuleEntries);
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
    setState(139);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      setState(138);
      match(TConfParser::SP);
      break;
    }

    default:
      break;
    }
    setState(141);
    entry();
    setState(149);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TConfParser::EOL) {
      setState(142);
      match(TConfParser::EOL);
      setState(144);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
      case 1: {
        setState(143);
        match(TConfParser::SP);
        break;
      }

      default:
        break;
      }
      setState(146);
      entry();
      setState(151);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(152);
    match(TConfParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EntryContext ------------------------------------------------------------------

TConfParser::EntryContext::EntryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TConfParser::ImportStmtContext* TConfParser::EntryContext::importStmt() {
  return getRuleContext<TConfParser::ImportStmtContext>(0);
}

TConfParser::StmtContext* TConfParser::EntryContext::stmt() {
  return getRuleContext<TConfParser::StmtContext>(0);
}

TConfParser::MacroDefContext* TConfParser::EntryContext::macroDef() {
  return getRuleContext<TConfParser::MacroDefContext>(0);
}

TConfParser::ModuleDefContext* TConfParser::EntryContext::moduleDef() {
  return getRuleContext<TConfParser::ModuleDefContext>(0);
}

TConfParser::MultiModuleDefContext* TConfParser::EntryContext::multiModuleDef() {
  return getRuleContext<TConfParser::MultiModuleDefContext>(0);
}


size_t TConfParser::EntryContext::getRuleIndex() const {
  return TConfParser::RuleEntry;
}


std::any TConfParser::EntryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TConfVisitor*>(visitor))
    return parserVisitor->visitEntry(this);
  else
    return visitor->visitChildren(this);
}

TConfParser::EntryContext* TConfParser::entry() {
  EntryContext *_localctx = _tracker.createInstance<EntryContext>(_ctx, getState());
  enterRule(_localctx, 2, TConfParser::RuleEntry);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(159);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      setState(154);
      importStmt();
      break;
    }

    case 2: {
      setState(155);
      stmt();
      break;
    }

    case 3: {
      setState(156);
      macroDef();
      break;
    }

    case 4: {
      setState(157);
      moduleDef();
      break;
    }

    case 5: {
      setState(158);
      multiModuleDef();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtContext ------------------------------------------------------------------

TConfParser::StmtContext::StmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TConfParser::PropStmtContext* TConfParser::StmtContext::propStmt() {
  return getRuleContext<TConfParser::PropStmtContext>(0);
}

TConfParser::ModuleDefStmtContext* TConfParser::StmtContext::moduleDefStmt() {
  return getRuleContext<TConfParser::ModuleDefStmtContext>(0);
}

TConfParser::CallStmtContext* TConfParser::StmtContext::callStmt() {
  return getRuleContext<TConfParser::CallStmtContext>(0);
}

TConfParser::ForeachStmtContext* TConfParser::StmtContext::foreachStmt() {
  return getRuleContext<TConfParser::ForeachStmtContext>(0);
}

TConfParser::ExtStmtContext* TConfParser::StmtContext::extStmt() {
  return getRuleContext<TConfParser::ExtStmtContext>(0);
}

TConfParser::CommentContext* TConfParser::StmtContext::comment() {
  return getRuleContext<TConfParser::CommentContext>(0);
}

TConfParser::DocCommentContext* TConfParser::StmtContext::docComment() {
  return getRuleContext<TConfParser::DocCommentContext>(0);
}

TConfParser::SimpleStmtContext* TConfParser::StmtContext::simpleStmt() {
  return getRuleContext<TConfParser::SimpleStmtContext>(0);
}

TConfParser::WhenStmtContext* TConfParser::StmtContext::whenStmt() {
  return getRuleContext<TConfParser::WhenStmtContext>(0);
}

TConfParser::SelectStmtContext* TConfParser::StmtContext::selectStmt() {
  return getRuleContext<TConfParser::SelectStmtContext>(0);
}


size_t TConfParser::StmtContext::getRuleIndex() const {
  return TConfParser::RuleStmt;
}


std::any TConfParser::StmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TConfVisitor*>(visitor))
    return parserVisitor->visitStmt(this);
  else
    return visitor->visitChildren(this);
}

TConfParser::StmtContext* TConfParser::stmt() {
  StmtContext *_localctx = _tracker.createInstance<StmtContext>(_ctx, getState());
  enterRule(_localctx, 4, TConfParser::RuleStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(186);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      setState(161);

      if (!( BlockLevel == 1 && (IsMacro(ScopeKind) || IsModule(ScopeKind) || IsMultiModule(ScopeKind)) )) throw FailedPredicateException(this, " BlockLevel == 1 && (IsMacro(ScopeKind) || IsModule(ScopeKind) || IsMultiModule(ScopeKind)) ");
      setState(162);
      propStmt();
      break;
    }

    case 2: {
      setState(163);

      if (!( BlockLevel == 2 && InMultiModule && IsModule(ScopeKind) )) throw FailedPredicateException(this, " BlockLevel == 2 && InMultiModule && IsModule(ScopeKind) ");
      setState(164);
      propStmt();
      break;
    }

    case 3: {
      setState(165);

      if (!( IsMultiModule(ScopeKind) )) throw FailedPredicateException(this, " IsMultiModule(ScopeKind) ");
      setState(166);
      moduleDefStmt();
      break;
    }

    case 4: {
      setState(167);

      if (!( IsMacro(ScopeKind) || IsModule(ScopeKind) )) throw FailedPredicateException(this, " IsMacro(ScopeKind) || IsModule(ScopeKind) ");
      setState(168);
      callStmt();
      break;
    }

    case 5: {
      setState(169);

      if (!( IsMacro(ScopeKind) )) throw FailedPredicateException(this, " IsMacro(ScopeKind) ");
      setState(170);
      foreachStmt();
      break;
    }

    case 6: {
      setState(171);

      if (!( IsForeach(ScopeKind) && IsForeachNone(ForeachBlockKind) )) throw FailedPredicateException(this, " IsForeach(ScopeKind) && IsForeachNone(ForeachBlockKind) ");
      setState(174);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case TConfParser::T__24:
        case TConfParser::T__27:
        case TConfParser::T__28:
        case TConfParser::T__29:
        case TConfParser::T__32:
        case TConfParser::T__38:
        case TConfParser::T__40:
        case TConfParser::ID: {
          setState(172);
          callStmt();
          break;
        }

        case TConfParser::T__20: {
          setState(173);
          extStmt();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      break;
    }

    case 7: {
      setState(176);

      if (!( IsForeach(ScopeKind) && IsForeachSections(ForeachBlockKind) )) throw FailedPredicateException(this, " IsForeach(ScopeKind) && IsForeachSections(ForeachBlockKind) ");
      setState(177);
      extStmt();
      break;
    }

    case 8: {
      setState(178);

      if (!( !IsForeach(ScopeKind) && !IsMultiModule(ScopeKind) )) throw FailedPredicateException(this, " !IsForeach(ScopeKind) && !IsMultiModule(ScopeKind) ");
      setState(182);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case TConfParser::T__24:
        case TConfParser::T__27:
        case TConfParser::T__28:
        case TConfParser::T__29:
        case TConfParser::T__32:
        case TConfParser::T__38:
        case TConfParser::T__40:
        case TConfParser::ID: {
          setState(179);
          simpleStmt();
          break;
        }

        case TConfParser::T__11: {
          setState(180);
          whenStmt();
          break;
        }

        case TConfParser::T__14: {
          setState(181);
          selectStmt();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      break;
    }

    case 9: {
      setState(184);
      comment();
      break;
    }

    case 10: {
      setState(185);
      docComment();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ImportStmtContext ------------------------------------------------------------------

TConfParser::ImportStmtContext::ImportStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TConfParser::ImportStmtContext::SP() {
  return getToken(TConfParser::SP, 0);
}

TConfParser::StringContext* TConfParser::ImportStmtContext::string() {
  return getRuleContext<TConfParser::StringContext>(0);
}


size_t TConfParser::ImportStmtContext::getRuleIndex() const {
  return TConfParser::RuleImportStmt;
}


std::any TConfParser::ImportStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TConfVisitor*>(visitor))
    return parserVisitor->visitImportStmt(this);
  else
    return visitor->visitChildren(this);
}

TConfParser::ImportStmtContext* TConfParser::importStmt() {
  ImportStmtContext *_localctx = _tracker.createInstance<ImportStmtContext>(_ctx, getState());
  enterRule(_localctx, 6, TConfParser::RuleImportStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(188);
    match(TConfParser::T__0);
    setState(189);
    match(TConfParser::SP);
    setState(190);
    string();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PropStmtContext ------------------------------------------------------------------

TConfParser::PropStmtContext::PropStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TConfParser::PropNameContext* TConfParser::PropStmtContext::propName() {
  return getRuleContext<TConfParser::PropNameContext>(0);
}

TConfParser::AssignOpContext* TConfParser::PropStmtContext::assignOp() {
  return getRuleContext<TConfParser::AssignOpContext>(0);
}

TConfParser::PropValueContext* TConfParser::PropStmtContext::propValue() {
  return getRuleContext<TConfParser::PropValueContext>(0);
}

tree::TerminalNode* TConfParser::PropStmtContext::SP() {
  return getToken(TConfParser::SP, 0);
}


size_t TConfParser::PropStmtContext::getRuleIndex() const {
  return TConfParser::RulePropStmt;
}


std::any TConfParser::PropStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TConfVisitor*>(visitor))
    return parserVisitor->visitPropStmt(this);
  else
    return visitor->visitChildren(this);
}

TConfParser::PropStmtContext* TConfParser::propStmt() {
  PropStmtContext *_localctx = _tracker.createInstance<PropStmtContext>(_ctx, getState());
  enterRule(_localctx, 8, TConfParser::RulePropStmt);
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
    setState(192);
    match(TConfParser::T__1);
    setState(193);
    propName();
    setState(195);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TConfParser::SP) {
      setState(194);
      match(TConfParser::SP);
    }
    setState(197);
    assignOp();
    setState(198);
    propValue();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PropNameContext ------------------------------------------------------------------

TConfParser::PropNameContext::PropNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TConfParser::IdentContext* TConfParser::PropNameContext::ident() {
  return getRuleContext<TConfParser::IdentContext>(0);
}


size_t TConfParser::PropNameContext::getRuleIndex() const {
  return TConfParser::RulePropName;
}


std::any TConfParser::PropNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TConfVisitor*>(visitor))
    return parserVisitor->visitPropName(this);
  else
    return visitor->visitChildren(this);
}

TConfParser::PropNameContext* TConfParser::propName() {
  PropNameContext *_localctx = _tracker.createInstance<PropNameContext>(_ctx, getState());
  enterRule(_localctx, 10, TConfParser::RulePropName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(200);
    ident();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PropValueContext ------------------------------------------------------------------

TConfParser::PropValueContext::PropValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> TConfParser::PropValueContext::EOL() {
  return getTokens(TConfParser::EOL);
}

tree::TerminalNode* TConfParser::PropValueContext::EOL(size_t i) {
  return getToken(TConfParser::EOL, i);
}


size_t TConfParser::PropValueContext::getRuleIndex() const {
  return TConfParser::RulePropValue;
}


std::any TConfParser::PropValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TConfVisitor*>(visitor))
    return parserVisitor->visitPropValue(this);
  else
    return visitor->visitChildren(this);
}

TConfParser::PropValueContext* TConfParser::propValue() {
  PropValueContext *_localctx = _tracker.createInstance<PropValueContext>(_ctx, getState());
  enterRule(_localctx, 12, TConfParser::RulePropValue);
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
    setState(205);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 844424930131966) != 0) {
      setState(202);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == TConfParser::EOL)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(207);
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

//----------------- CommentContext ------------------------------------------------------------------

TConfParser::CommentContext::CommentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TConfParser::CommentContext::COMMENT() {
  return getToken(TConfParser::COMMENT, 0);
}


size_t TConfParser::CommentContext::getRuleIndex() const {
  return TConfParser::RuleComment;
}


std::any TConfParser::CommentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TConfVisitor*>(visitor))
    return parserVisitor->visitComment(this);
  else
    return visitor->visitChildren(this);
}

TConfParser::CommentContext* TConfParser::comment() {
  CommentContext *_localctx = _tracker.createInstance<CommentContext>(_ctx, getState());
  enterRule(_localctx, 14, TConfParser::RuleComment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(208);
    match(TConfParser::COMMENT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DocCommentContext ------------------------------------------------------------------

TConfParser::DocCommentContext::DocCommentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TConfParser::DocCommentContext::DOC_COMMENT() {
  return getToken(TConfParser::DOC_COMMENT, 0);
}


size_t TConfParser::DocCommentContext::getRuleIndex() const {
  return TConfParser::RuleDocComment;
}


std::any TConfParser::DocCommentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TConfVisitor*>(visitor))
    return parserVisitor->visitDocComment(this);
  else
    return visitor->visitChildren(this);
}

TConfParser::DocCommentContext* TConfParser::docComment() {
  DocCommentContext *_localctx = _tracker.createInstance<DocCommentContext>(_ctx, getState());
  enterRule(_localctx, 16, TConfParser::RuleDocComment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(210);
    match(TConfParser::DOC_COMMENT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpleStmtContext ------------------------------------------------------------------

TConfParser::SimpleStmtContext::SimpleStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TConfParser::AssignStmtContext* TConfParser::SimpleStmtContext::assignStmt() {
  return getRuleContext<TConfParser::AssignStmtContext>(0);
}


size_t TConfParser::SimpleStmtContext::getRuleIndex() const {
  return TConfParser::RuleSimpleStmt;
}


std::any TConfParser::SimpleStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TConfVisitor*>(visitor))
    return parserVisitor->visitSimpleStmt(this);
  else
    return visitor->visitChildren(this);
}

TConfParser::SimpleStmtContext* TConfParser::simpleStmt() {
  SimpleStmtContext *_localctx = _tracker.createInstance<SimpleStmtContext>(_ctx, getState());
  enterRule(_localctx, 18, TConfParser::RuleSimpleStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(212);
    assignStmt();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpleBlockStmtContext ------------------------------------------------------------------

TConfParser::SimpleBlockStmtContext::SimpleBlockStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TConfParser::SimpleBlockContext* TConfParser::SimpleBlockStmtContext::simpleBlock() {
  return getRuleContext<TConfParser::SimpleBlockContext>(0);
}


size_t TConfParser::SimpleBlockStmtContext::getRuleIndex() const {
  return TConfParser::RuleSimpleBlockStmt;
}


std::any TConfParser::SimpleBlockStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TConfVisitor*>(visitor))
    return parserVisitor->visitSimpleBlockStmt(this);
  else
    return visitor->visitChildren(this);
}

TConfParser::SimpleBlockStmtContext* TConfParser::simpleBlockStmt() {
  SimpleBlockStmtContext *_localctx = _tracker.createInstance<SimpleBlockStmtContext>(_ctx, getState());
  enterRule(_localctx, 20, TConfParser::RuleSimpleBlockStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
     ++BlockLevel; 
    setState(215);
    simpleBlock();
     --BlockLevel; 
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpleBlockContext ------------------------------------------------------------------

TConfParser::SimpleBlockContext::SimpleBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> TConfParser::SimpleBlockContext::EOL() {
  return getTokens(TConfParser::EOL);
}

tree::TerminalNode* TConfParser::SimpleBlockContext::EOL(size_t i) {
  return getToken(TConfParser::EOL, i);
}

std::vector<tree::TerminalNode *> TConfParser::SimpleBlockContext::SP() {
  return getTokens(TConfParser::SP);
}

tree::TerminalNode* TConfParser::SimpleBlockContext::SP(size_t i) {
  return getToken(TConfParser::SP, i);
}

std::vector<TConfParser::CommentContext *> TConfParser::SimpleBlockContext::comment() {
  return getRuleContexts<TConfParser::CommentContext>();
}

TConfParser::CommentContext* TConfParser::SimpleBlockContext::comment(size_t i) {
  return getRuleContext<TConfParser::CommentContext>(i);
}

std::vector<TConfParser::SimpleStmtContext *> TConfParser::SimpleBlockContext::simpleStmt() {
  return getRuleContexts<TConfParser::SimpleStmtContext>();
}

TConfParser::SimpleStmtContext* TConfParser::SimpleBlockContext::simpleStmt(size_t i) {
  return getRuleContext<TConfParser::SimpleStmtContext>(i);
}

std::vector<TConfParser::WhenStmtContext *> TConfParser::SimpleBlockContext::whenStmt() {
  return getRuleContexts<TConfParser::WhenStmtContext>();
}

TConfParser::WhenStmtContext* TConfParser::SimpleBlockContext::whenStmt(size_t i) {
  return getRuleContext<TConfParser::WhenStmtContext>(i);
}

std::vector<TConfParser::SelectStmtContext *> TConfParser::SimpleBlockContext::selectStmt() {
  return getRuleContexts<TConfParser::SelectStmtContext>();
}

TConfParser::SelectStmtContext* TConfParser::SimpleBlockContext::selectStmt(size_t i) {
  return getRuleContext<TConfParser::SelectStmtContext>(i);
}


size_t TConfParser::SimpleBlockContext::getRuleIndex() const {
  return TConfParser::RuleSimpleBlock;
}


std::any TConfParser::SimpleBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TConfVisitor*>(visitor))
    return parserVisitor->visitSimpleBlock(this);
  else
    return visitor->visitChildren(this);
}

TConfParser::SimpleBlockContext* TConfParser::simpleBlock() {
  SimpleBlockContext *_localctx = _tracker.createInstance<SimpleBlockContext>(_ctx, getState());
  enterRule(_localctx, 22, TConfParser::RuleSimpleBlock);
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
    setState(218);
    match(TConfParser::T__2);
    setState(220);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TConfParser::SP) {
      setState(219);
      match(TConfParser::SP);
    }
    setState(234);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(222);
        match(TConfParser::EOL);
        setState(224);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TConfParser::SP) {
          setState(223);
          match(TConfParser::SP);
        }
        setState(230);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case TConfParser::COMMENT: {
            setState(226);
            comment();
            break;
          }

          case TConfParser::T__24:
          case TConfParser::T__27:
          case TConfParser::T__28:
          case TConfParser::T__29:
          case TConfParser::T__32:
          case TConfParser::T__38:
          case TConfParser::T__40:
          case TConfParser::ID: {
            setState(227);
            simpleStmt();
            break;
          }

          case TConfParser::T__11: {
            setState(228);
            whenStmt();
            break;
          }

          case TConfParser::T__14: {
            setState(229);
            selectStmt();
            break;
          }

          case TConfParser::EOL: {
            break;
          }

        default:
          break;
        } 
      }
      setState(236);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    }
    setState(237);
    match(TConfParser::EOL);
    setState(239);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TConfParser::SP) {
      setState(238);
      match(TConfParser::SP);
    }
    setState(241);
    match(TConfParser::T__3);
    setState(243);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TConfParser::SP) {
      setState(242);
      match(TConfParser::SP);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignStmtContext ------------------------------------------------------------------

TConfParser::AssignStmtContext::AssignStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TConfParser::IdentContext* TConfParser::AssignStmtContext::ident() {
  return getRuleContext<TConfParser::IdentContext>(0);
}

TConfParser::AssignOpContext* TConfParser::AssignStmtContext::assignOp() {
  return getRuleContext<TConfParser::AssignOpContext>(0);
}

TConfParser::RvalueContext* TConfParser::AssignStmtContext::rvalue() {
  return getRuleContext<TConfParser::RvalueContext>(0);
}

tree::TerminalNode* TConfParser::AssignStmtContext::SP() {
  return getToken(TConfParser::SP, 0);
}


size_t TConfParser::AssignStmtContext::getRuleIndex() const {
  return TConfParser::RuleAssignStmt;
}


std::any TConfParser::AssignStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TConfVisitor*>(visitor))
    return parserVisitor->visitAssignStmt(this);
  else
    return visitor->visitChildren(this);
}

TConfParser::AssignStmtContext* TConfParser::assignStmt() {
  AssignStmtContext *_localctx = _tracker.createInstance<AssignStmtContext>(_ctx, getState());
  enterRule(_localctx, 24, TConfParser::RuleAssignStmt);
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
    setState(245);
    ident();
    setState(247);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TConfParser::SP) {
      setState(246);
      match(TConfParser::SP);
    }
    setState(249);
    assignOp();
    setState(250);
    rvalue();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignOpContext ------------------------------------------------------------------

TConfParser::AssignOpContext::AssignOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t TConfParser::AssignOpContext::getRuleIndex() const {
  return TConfParser::RuleAssignOp;
}


std::any TConfParser::AssignOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TConfVisitor*>(visitor))
    return parserVisitor->visitAssignOp(this);
  else
    return visitor->visitChildren(this);
}

TConfParser::AssignOpContext* TConfParser::assignOp() {
  AssignOpContext *_localctx = _tracker.createInstance<AssignOpContext>(_ctx, getState());
  enterRule(_localctx, 26, TConfParser::RuleAssignOp);
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
    setState(252);
    _la = _input->LA(1);
    if (!(((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 480) != 0)) {
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

//----------------- RvalueContext ------------------------------------------------------------------

TConfParser::RvalueContext::RvalueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> TConfParser::RvalueContext::RVAL_SYMBOL() {
  return getTokens(TConfParser::RVAL_SYMBOL);
}

tree::TerminalNode* TConfParser::RvalueContext::RVAL_SYMBOL(size_t i) {
  return getToken(TConfParser::RVAL_SYMBOL, i);
}

std::vector<tree::TerminalNode *> TConfParser::RvalueContext::EOL() {
  return getTokens(TConfParser::EOL);
}

tree::TerminalNode* TConfParser::RvalueContext::EOL(size_t i) {
  return getToken(TConfParser::EOL, i);
}

std::vector<tree::TerminalNode *> TConfParser::RvalueContext::RC() {
  return getTokens(TConfParser::RC);
}

tree::TerminalNode* TConfParser::RvalueContext::RC(size_t i) {
  return getToken(TConfParser::RC, i);
}


size_t TConfParser::RvalueContext::getRuleIndex() const {
  return TConfParser::RuleRvalue;
}


std::any TConfParser::RvalueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TConfVisitor*>(visitor))
    return parserVisitor->visitRvalue(this);
  else
    return visitor->visitChildren(this);
}

TConfParser::RvalueContext* TConfParser::rvalue() {
  RvalueContext *_localctx = _tracker.createInstance<RvalueContext>(_ctx, getState());
  enterRule(_localctx, 28, TConfParser::RuleRvalue);
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
    setState(263);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 844424930131966) != 0) {
      setState(261);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
      case 1: {
        setState(254);
        _la = _input->LA(1);
        if (_la == 0 || _la == Token::EOF || (_la == TConfParser::EOL)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      case 2: {
        setState(255);
        match(TConfParser::RVAL_SYMBOL);
        break;
      }

      case 3: {
        setState(256);
        match(TConfParser::T__8);
        setState(258);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TConfParser::RC) {
          setState(257);
          match(TConfParser::RC);
        }
        setState(260);
        match(TConfParser::EOL);
        break;
      }

      default:
        break;
      }
      setState(265);
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

//----------------- CallStmtContext ------------------------------------------------------------------

TConfParser::CallStmtContext::CallStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TConfParser::MacroNameContext* TConfParser::CallStmtContext::macroName() {
  return getRuleContext<TConfParser::MacroNameContext>(0);
}

TConfParser::ActualArgsContext* TConfParser::CallStmtContext::actualArgs() {
  return getRuleContext<TConfParser::ActualArgsContext>(0);
}

std::vector<tree::TerminalNode *> TConfParser::CallStmtContext::SP() {
  return getTokens(TConfParser::SP);
}

tree::TerminalNode* TConfParser::CallStmtContext::SP(size_t i) {
  return getToken(TConfParser::SP, i);
}


size_t TConfParser::CallStmtContext::getRuleIndex() const {
  return TConfParser::RuleCallStmt;
}


std::any TConfParser::CallStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TConfVisitor*>(visitor))
    return parserVisitor->visitCallStmt(this);
  else
    return visitor->visitChildren(this);
}

TConfParser::CallStmtContext* TConfParser::callStmt() {
  CallStmtContext *_localctx = _tracker.createInstance<CallStmtContext>(_ctx, getState());
  enterRule(_localctx, 30, TConfParser::RuleCallStmt);
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
    setState(266);
    macroName();
    setState(268);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TConfParser::SP) {
      setState(267);
      match(TConfParser::SP);
    }
    setState(270);
    match(TConfParser::T__9);
    setState(272);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
    case 1: {
      setState(271);
      match(TConfParser::SP);
      break;
    }

    default:
      break;
    }
    setState(274);
    actualArgs();
    setState(276);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TConfParser::SP) {
      setState(275);
      match(TConfParser::SP);
    }
    setState(278);
    match(TConfParser::T__10);
    setState(280);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TConfParser::SP) {
      setState(279);
      match(TConfParser::SP);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ActualArgsContext ------------------------------------------------------------------

TConfParser::ActualArgsContext::ActualArgsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> TConfParser::ActualArgsContext::EOL() {
  return getTokens(TConfParser::EOL);
}

tree::TerminalNode* TConfParser::ActualArgsContext::EOL(size_t i) {
  return getToken(TConfParser::EOL, i);
}


size_t TConfParser::ActualArgsContext::getRuleIndex() const {
  return TConfParser::RuleActualArgs;
}


std::any TConfParser::ActualArgsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TConfVisitor*>(visitor))
    return parserVisitor->visitActualArgs(this);
  else
    return visitor->visitChildren(this);
}

TConfParser::ActualArgsContext* TConfParser::actualArgs() {
  ActualArgsContext *_localctx = _tracker.createInstance<ActualArgsContext>(_ctx, getState());
  enterRule(_localctx, 32, TConfParser::RuleActualArgs);
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
    setState(285);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(282);
        _la = _input->LA(1);
        if (_la == 0 || _la == Token::EOF || (_la == TConfParser::EOL)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        } 
      }
      setState(287);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockStmtContext ------------------------------------------------------------------

TConfParser::BlockStmtContext::BlockStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TConfParser::BlockContext* TConfParser::BlockStmtContext::block() {
  return getRuleContext<TConfParser::BlockContext>(0);
}


size_t TConfParser::BlockStmtContext::getRuleIndex() const {
  return TConfParser::RuleBlockStmt;
}


std::any TConfParser::BlockStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TConfVisitor*>(visitor))
    return parserVisitor->visitBlockStmt(this);
  else
    return visitor->visitChildren(this);
}

TConfParser::BlockStmtContext* TConfParser::blockStmt() {
  BlockStmtContext *_localctx = _tracker.createInstance<BlockStmtContext>(_ctx, getState());
  enterRule(_localctx, 34, TConfParser::RuleBlockStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(288);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

TConfParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> TConfParser::BlockContext::EOL() {
  return getTokens(TConfParser::EOL);
}

tree::TerminalNode* TConfParser::BlockContext::EOL(size_t i) {
  return getToken(TConfParser::EOL, i);
}

std::vector<tree::TerminalNode *> TConfParser::BlockContext::SP() {
  return getTokens(TConfParser::SP);
}

tree::TerminalNode* TConfParser::BlockContext::SP(size_t i) {
  return getToken(TConfParser::SP, i);
}

std::vector<TConfParser::StmtContext *> TConfParser::BlockContext::stmt() {
  return getRuleContexts<TConfParser::StmtContext>();
}

TConfParser::StmtContext* TConfParser::BlockContext::stmt(size_t i) {
  return getRuleContext<TConfParser::StmtContext>(i);
}


size_t TConfParser::BlockContext::getRuleIndex() const {
  return TConfParser::RuleBlock;
}


std::any TConfParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TConfVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

TConfParser::BlockContext* TConfParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 36, TConfParser::RuleBlock);
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
     ++BlockLevel; 
    setState(291);
    match(TConfParser::T__2);
    setState(293);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TConfParser::SP) {
      setState(292);
      match(TConfParser::SP);
    }
    setState(302);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(295);
        match(TConfParser::EOL);
        setState(297);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
        case 1: {
          setState(296);
          match(TConfParser::SP);
          break;
        }

        default:
          break;
        }
        setState(299);
        stmt(); 
      }
      setState(304);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx);
    }
    setState(305);
    match(TConfParser::EOL);
    setState(307);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TConfParser::SP) {
      setState(306);
      match(TConfParser::SP);
    }
    setState(309);
    match(TConfParser::T__3);
     --BlockLevel; 
    setState(312);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TConfParser::SP) {
      setState(311);
      match(TConfParser::SP);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhenStmtContext ------------------------------------------------------------------

TConfParser::WhenStmtContext::WhenStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TConfParser::WhenClauseContext* TConfParser::WhenStmtContext::whenClause() {
  return getRuleContext<TConfParser::WhenClauseContext>(0);
}

std::vector<TConfParser::ElseWhenClauseContext *> TConfParser::WhenStmtContext::elseWhenClause() {
  return getRuleContexts<TConfParser::ElseWhenClauseContext>();
}

TConfParser::ElseWhenClauseContext* TConfParser::WhenStmtContext::elseWhenClause(size_t i) {
  return getRuleContext<TConfParser::ElseWhenClauseContext>(i);
}

TConfParser::OtherwiseClauseContext* TConfParser::WhenStmtContext::otherwiseClause() {
  return getRuleContext<TConfParser::OtherwiseClauseContext>(0);
}

std::vector<tree::TerminalNode *> TConfParser::WhenStmtContext::EOL() {
  return getTokens(TConfParser::EOL);
}

tree::TerminalNode* TConfParser::WhenStmtContext::EOL(size_t i) {
  return getToken(TConfParser::EOL, i);
}

std::vector<tree::TerminalNode *> TConfParser::WhenStmtContext::SP() {
  return getTokens(TConfParser::SP);
}

tree::TerminalNode* TConfParser::WhenStmtContext::SP(size_t i) {
  return getToken(TConfParser::SP, i);
}

std::vector<TConfParser::CommentContext *> TConfParser::WhenStmtContext::comment() {
  return getRuleContexts<TConfParser::CommentContext>();
}

TConfParser::CommentContext* TConfParser::WhenStmtContext::comment(size_t i) {
  return getRuleContext<TConfParser::CommentContext>(i);
}


size_t TConfParser::WhenStmtContext::getRuleIndex() const {
  return TConfParser::RuleWhenStmt;
}


std::any TConfParser::WhenStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TConfVisitor*>(visitor))
    return parserVisitor->visitWhenStmt(this);
  else
    return visitor->visitChildren(this);
}

TConfParser::WhenStmtContext* TConfParser::whenStmt() {
  WhenStmtContext *_localctx = _tracker.createInstance<WhenStmtContext>(_ctx, getState());
  enterRule(_localctx, 38, TConfParser::RuleWhenStmt);
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
    setState(314);
    whenClause();
    setState(329);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(322); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(315);
          match(TConfParser::EOL);
          setState(317);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == TConfParser::SP) {
            setState(316);
            match(TConfParser::SP);
          }
          setState(320);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == TConfParser::COMMENT) {
            setState(319);
            comment();
          }
          setState(324); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == TConfParser::EOL);
        setState(326);
        elseWhenClause(); 
      }
      setState(331);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx);
    }
    setState(344);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx)) {
    case 1: {
      setState(339); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(332);
        match(TConfParser::EOL);
        setState(334);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TConfParser::SP) {
          setState(333);
          match(TConfParser::SP);
        }
        setState(337);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TConfParser::COMMENT) {
          setState(336);
          comment();
        }
        setState(341); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == TConfParser::EOL);
      setState(343);
      otherwiseClause();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhenClauseContext ------------------------------------------------------------------

TConfParser::WhenClauseContext::WhenClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TConfParser::LogicExprContext* TConfParser::WhenClauseContext::logicExpr() {
  return getRuleContext<TConfParser::LogicExprContext>(0);
}

TConfParser::SimpleBlockStmtContext* TConfParser::WhenClauseContext::simpleBlockStmt() {
  return getRuleContext<TConfParser::SimpleBlockStmtContext>(0);
}

std::vector<tree::TerminalNode *> TConfParser::WhenClauseContext::SP() {
  return getTokens(TConfParser::SP);
}

tree::TerminalNode* TConfParser::WhenClauseContext::SP(size_t i) {
  return getToken(TConfParser::SP, i);
}


size_t TConfParser::WhenClauseContext::getRuleIndex() const {
  return TConfParser::RuleWhenClause;
}


std::any TConfParser::WhenClauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TConfVisitor*>(visitor))
    return parserVisitor->visitWhenClause(this);
  else
    return visitor->visitChildren(this);
}

TConfParser::WhenClauseContext* TConfParser::whenClause() {
  WhenClauseContext *_localctx = _tracker.createInstance<WhenClauseContext>(_ctx, getState());
  enterRule(_localctx, 40, TConfParser::RuleWhenClause);
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
    setState(346);
    match(TConfParser::T__11);
    setState(348);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TConfParser::SP) {
      setState(347);
      match(TConfParser::SP);
    }
    setState(350);
    match(TConfParser::T__9);
    setState(352);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TConfParser::SP) {
      setState(351);
      match(TConfParser::SP);
    }
    setState(354);
    logicExpr();
    setState(356);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TConfParser::SP) {
      setState(355);
      match(TConfParser::SP);
    }
    setState(358);
    match(TConfParser::T__10);
    setState(360);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TConfParser::SP) {
      setState(359);
      match(TConfParser::SP);
    }
    setState(362);
    simpleBlockStmt();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElseWhenClauseContext ------------------------------------------------------------------

TConfParser::ElseWhenClauseContext::ElseWhenClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TConfParser::LogicExprContext* TConfParser::ElseWhenClauseContext::logicExpr() {
  return getRuleContext<TConfParser::LogicExprContext>(0);
}

TConfParser::SimpleBlockStmtContext* TConfParser::ElseWhenClauseContext::simpleBlockStmt() {
  return getRuleContext<TConfParser::SimpleBlockStmtContext>(0);
}

std::vector<tree::TerminalNode *> TConfParser::ElseWhenClauseContext::SP() {
  return getTokens(TConfParser::SP);
}

tree::TerminalNode* TConfParser::ElseWhenClauseContext::SP(size_t i) {
  return getToken(TConfParser::SP, i);
}


size_t TConfParser::ElseWhenClauseContext::getRuleIndex() const {
  return TConfParser::RuleElseWhenClause;
}


std::any TConfParser::ElseWhenClauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TConfVisitor*>(visitor))
    return parserVisitor->visitElseWhenClause(this);
  else
    return visitor->visitChildren(this);
}

TConfParser::ElseWhenClauseContext* TConfParser::elseWhenClause() {
  ElseWhenClauseContext *_localctx = _tracker.createInstance<ElseWhenClauseContext>(_ctx, getState());
  enterRule(_localctx, 42, TConfParser::RuleElseWhenClause);
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
    setState(364);
    match(TConfParser::T__12);
    setState(366);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TConfParser::SP) {
      setState(365);
      match(TConfParser::SP);
    }
    setState(368);
    match(TConfParser::T__9);
    setState(370);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TConfParser::SP) {
      setState(369);
      match(TConfParser::SP);
    }
    setState(372);
    logicExpr();
    setState(374);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TConfParser::SP) {
      setState(373);
      match(TConfParser::SP);
    }
    setState(376);
    match(TConfParser::T__10);
    setState(378);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TConfParser::SP) {
      setState(377);
      match(TConfParser::SP);
    }
    setState(380);
    simpleBlockStmt();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OtherwiseClauseContext ------------------------------------------------------------------

TConfParser::OtherwiseClauseContext::OtherwiseClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TConfParser::SimpleBlockStmtContext* TConfParser::OtherwiseClauseContext::simpleBlockStmt() {
  return getRuleContext<TConfParser::SimpleBlockStmtContext>(0);
}

tree::TerminalNode* TConfParser::OtherwiseClauseContext::SP() {
  return getToken(TConfParser::SP, 0);
}


size_t TConfParser::OtherwiseClauseContext::getRuleIndex() const {
  return TConfParser::RuleOtherwiseClause;
}


std::any TConfParser::OtherwiseClauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TConfVisitor*>(visitor))
    return parserVisitor->visitOtherwiseClause(this);
  else
    return visitor->visitChildren(this);
}

TConfParser::OtherwiseClauseContext* TConfParser::otherwiseClause() {
  OtherwiseClauseContext *_localctx = _tracker.createInstance<OtherwiseClauseContext>(_ctx, getState());
  enterRule(_localctx, 44, TConfParser::RuleOtherwiseClause);
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
    setState(382);
    match(TConfParser::T__13);
    setState(384);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TConfParser::SP) {
      setState(383);
      match(TConfParser::SP);
    }
    setState(386);
    simpleBlockStmt();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SelectStmtContext ------------------------------------------------------------------

TConfParser::SelectStmtContext::SelectStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TConfParser::VarRefContext* TConfParser::SelectStmtContext::varRef() {
  return getRuleContext<TConfParser::VarRefContext>(0);
}

std::vector<tree::TerminalNode *> TConfParser::SelectStmtContext::EOL() {
  return getTokens(TConfParser::EOL);
}

tree::TerminalNode* TConfParser::SelectStmtContext::EOL(size_t i) {
  return getToken(TConfParser::EOL, i);
}

std::vector<tree::TerminalNode *> TConfParser::SelectStmtContext::SP() {
  return getTokens(TConfParser::SP);
}

tree::TerminalNode* TConfParser::SelectStmtContext::SP(size_t i) {
  return getToken(TConfParser::SP, i);
}

std::vector<TConfParser::AlternativeClauseContext *> TConfParser::SelectStmtContext::alternativeClause() {
  return getRuleContexts<TConfParser::AlternativeClauseContext>();
}

TConfParser::AlternativeClauseContext* TConfParser::SelectStmtContext::alternativeClause(size_t i) {
  return getRuleContext<TConfParser::AlternativeClauseContext>(i);
}

TConfParser::DefaultClauseContext* TConfParser::SelectStmtContext::defaultClause() {
  return getRuleContext<TConfParser::DefaultClauseContext>(0);
}

std::vector<TConfParser::CommentContext *> TConfParser::SelectStmtContext::comment() {
  return getRuleContexts<TConfParser::CommentContext>();
}

TConfParser::CommentContext* TConfParser::SelectStmtContext::comment(size_t i) {
  return getRuleContext<TConfParser::CommentContext>(i);
}


size_t TConfParser::SelectStmtContext::getRuleIndex() const {
  return TConfParser::RuleSelectStmt;
}


std::any TConfParser::SelectStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TConfVisitor*>(visitor))
    return parserVisitor->visitSelectStmt(this);
  else
    return visitor->visitChildren(this);
}

TConfParser::SelectStmtContext* TConfParser::selectStmt() {
  SelectStmtContext *_localctx = _tracker.createInstance<SelectStmtContext>(_ctx, getState());
  enterRule(_localctx, 46, TConfParser::RuleSelectStmt);
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
    setState(388);
    match(TConfParser::T__14);
    setState(390);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TConfParser::SP) {
      setState(389);
      match(TConfParser::SP);
    }
    setState(392);
    match(TConfParser::T__9);
    setState(394);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TConfParser::SP) {
      setState(393);
      match(TConfParser::SP);
    }
    setState(396);
    varRef();
    setState(398);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TConfParser::SP) {
      setState(397);
      match(TConfParser::SP);
    }
    setState(400);
    match(TConfParser::T__10);
    setState(402);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TConfParser::SP) {
      setState(401);
      match(TConfParser::SP);
    }
    setState(404);
    match(TConfParser::T__2);
    setState(406);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TConfParser::SP) {
      setState(405);
      match(TConfParser::SP);
    }
    setState(420); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(415); 
              _errHandler->sync(this);
              _la = _input->LA(1);
              do {
                setState(408);
                match(TConfParser::EOL);
                setState(410);
                _errHandler->sync(this);

                _la = _input->LA(1);
                if (_la == TConfParser::SP) {
                  setState(409);
                  match(TConfParser::SP);
                }
                setState(413);
                _errHandler->sync(this);

                _la = _input->LA(1);
                if (_la == TConfParser::COMMENT) {
                  setState(412);
                  comment();
                }
                setState(417); 
                _errHandler->sync(this);
                _la = _input->LA(1);
              } while (_la == TConfParser::EOL);
              setState(419);
              alternativeClause();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(422); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(436);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 58, _ctx)) {
    case 1: {
      setState(431); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(424);
        match(TConfParser::EOL);
        setState(426);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TConfParser::SP) {
          setState(425);
          match(TConfParser::SP);
        }
        setState(429);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TConfParser::COMMENT) {
          setState(428);
          comment();
        }
        setState(433); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == TConfParser::EOL);
      setState(435);
      defaultClause();
      break;
    }

    default:
      break;
    }
    setState(438);
    match(TConfParser::EOL);
    setState(440);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TConfParser::SP) {
      setState(439);
      match(TConfParser::SP);
    }
    setState(442);
    match(TConfParser::T__3);
    setState(444);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TConfParser::SP) {
      setState(443);
      match(TConfParser::SP);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AlternativeClauseContext ------------------------------------------------------------------

TConfParser::AlternativeClauseContext::AlternativeClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TConfParser::StringContext *> TConfParser::AlternativeClauseContext::string() {
  return getRuleContexts<TConfParser::StringContext>();
}

TConfParser::StringContext* TConfParser::AlternativeClauseContext::string(size_t i) {
  return getRuleContext<TConfParser::StringContext>(i);
}

TConfParser::SimpleBlockStmtContext* TConfParser::AlternativeClauseContext::simpleBlockStmt() {
  return getRuleContext<TConfParser::SimpleBlockStmtContext>(0);
}

std::vector<tree::TerminalNode *> TConfParser::AlternativeClauseContext::SP() {
  return getTokens(TConfParser::SP);
}

tree::TerminalNode* TConfParser::AlternativeClauseContext::SP(size_t i) {
  return getToken(TConfParser::SP, i);
}


size_t TConfParser::AlternativeClauseContext::getRuleIndex() const {
  return TConfParser::RuleAlternativeClause;
}


std::any TConfParser::AlternativeClauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TConfVisitor*>(visitor))
    return parserVisitor->visitAlternativeClause(this);
  else
    return visitor->visitChildren(this);
}

TConfParser::AlternativeClauseContext* TConfParser::alternativeClause() {
  AlternativeClauseContext *_localctx = _tracker.createInstance<AlternativeClauseContext>(_ctx, getState());
  enterRule(_localctx, 48, TConfParser::RuleAlternativeClause);
   antlrcpp::downCast<AlternativeClauseContext *>(_localctx)->selectVar =  nullptr; 
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
    setState(446);
    string();
    setState(457);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(448);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TConfParser::SP) {
          setState(447);
          match(TConfParser::SP);
        }
        setState(450);
        match(TConfParser::T__15);
        setState(452);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TConfParser::SP) {
          setState(451);
          match(TConfParser::SP);
        }
        setState(454);
        string(); 
      }
      setState(459);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx);
    }
    setState(461);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TConfParser::SP) {
      setState(460);
      match(TConfParser::SP);
    }
    setState(463);
    match(TConfParser::T__16);
    setState(465);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TConfParser::SP) {
      setState(464);
      match(TConfParser::SP);
    }
    setState(467);
    simpleBlockStmt();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefaultClauseContext ------------------------------------------------------------------

TConfParser::DefaultClauseContext::DefaultClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TConfParser::SimpleBlockStmtContext* TConfParser::DefaultClauseContext::simpleBlockStmt() {
  return getRuleContext<TConfParser::SimpleBlockStmtContext>(0);
}

std::vector<tree::TerminalNode *> TConfParser::DefaultClauseContext::SP() {
  return getTokens(TConfParser::SP);
}

tree::TerminalNode* TConfParser::DefaultClauseContext::SP(size_t i) {
  return getToken(TConfParser::SP, i);
}


size_t TConfParser::DefaultClauseContext::getRuleIndex() const {
  return TConfParser::RuleDefaultClause;
}


std::any TConfParser::DefaultClauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TConfVisitor*>(visitor))
    return parserVisitor->visitDefaultClause(this);
  else
    return visitor->visitChildren(this);
}

TConfParser::DefaultClauseContext* TConfParser::defaultClause() {
  DefaultClauseContext *_localctx = _tracker.createInstance<DefaultClauseContext>(_ctx, getState());
  enterRule(_localctx, 50, TConfParser::RuleDefaultClause);
   antlrcpp::downCast<DefaultClauseContext *>(_localctx)->defaultCondition =  nullptr; 
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
    setState(469);
    match(TConfParser::T__17);
    setState(471);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TConfParser::SP) {
      setState(470);
      match(TConfParser::SP);
    }
    setState(473);
    match(TConfParser::T__16);
    setState(475);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TConfParser::SP) {
      setState(474);
      match(TConfParser::SP);
    }
    setState(477);
    simpleBlockStmt();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForeachStmtContext ------------------------------------------------------------------

TConfParser::ForeachStmtContext::ForeachStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TConfParser::IdentContext* TConfParser::ForeachStmtContext::ident() {
  return getRuleContext<TConfParser::IdentContext>(0);
}

TConfParser::VarRefContext* TConfParser::ForeachStmtContext::varRef() {
  return getRuleContext<TConfParser::VarRefContext>(0);
}

TConfParser::BlockStmtContext* TConfParser::ForeachStmtContext::blockStmt() {
  return getRuleContext<TConfParser::BlockStmtContext>(0);
}

std::vector<tree::TerminalNode *> TConfParser::ForeachStmtContext::SP() {
  return getTokens(TConfParser::SP);
}

tree::TerminalNode* TConfParser::ForeachStmtContext::SP(size_t i) {
  return getToken(TConfParser::SP, i);
}


size_t TConfParser::ForeachStmtContext::getRuleIndex() const {
  return TConfParser::RuleForeachStmt;
}


std::any TConfParser::ForeachStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TConfVisitor*>(visitor))
    return parserVisitor->visitForeachStmt(this);
  else
    return visitor->visitChildren(this);
}

TConfParser::ForeachStmtContext* TConfParser::foreachStmt() {
  ForeachStmtContext *_localctx = _tracker.createInstance<ForeachStmtContext>(_ctx, getState());
  enterRule(_localctx, 52, TConfParser::RuleForeachStmt);
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
    setState(479);
    match(TConfParser::T__18);
    setState(481);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TConfParser::SP) {
      setState(480);
      match(TConfParser::SP);
    }
    setState(483);
    match(TConfParser::T__9);
    setState(485);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TConfParser::SP) {
      setState(484);
      match(TConfParser::SP);
    }
    setState(487);
    ident();
    setState(489);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TConfParser::SP) {
      setState(488);
      match(TConfParser::SP);
    }
    setState(491);
    match(TConfParser::T__19);
    setState(493);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TConfParser::SP) {
      setState(492);
      match(TConfParser::SP);
    }
    setState(495);
    varRef();
    setState(497);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TConfParser::SP) {
      setState(496);
      match(TConfParser::SP);
    }
    setState(499);
    match(TConfParser::T__10);
    setState(501);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TConfParser::SP) {
      setState(500);
      match(TConfParser::SP);
    }
     auto saveScopeKind = ScopeKind; ScopeKind = EScopeKind::Foreach; ForeachBlockKind = EForeachBlockKind::None; 
    setState(504);
    blockStmt();
     ScopeKind = saveScopeKind; 
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExtStmtContext ------------------------------------------------------------------

TConfParser::ExtStmtContext::ExtStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TConfParser::ExtContext *> TConfParser::ExtStmtContext::ext() {
  return getRuleContexts<TConfParser::ExtContext>();
}

TConfParser::ExtContext* TConfParser::ExtStmtContext::ext(size_t i) {
  return getRuleContext<TConfParser::ExtContext>(i);
}

TConfParser::RvalueContext* TConfParser::ExtStmtContext::rvalue() {
  return getRuleContext<TConfParser::RvalueContext>(0);
}

std::vector<tree::TerminalNode *> TConfParser::ExtStmtContext::SP() {
  return getTokens(TConfParser::SP);
}

tree::TerminalNode* TConfParser::ExtStmtContext::SP(size_t i) {
  return getToken(TConfParser::SP, i);
}


size_t TConfParser::ExtStmtContext::getRuleIndex() const {
  return TConfParser::RuleExtStmt;
}


std::any TConfParser::ExtStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TConfVisitor*>(visitor))
    return parserVisitor->visitExtStmt(this);
  else
    return visitor->visitChildren(this);
}

TConfParser::ExtStmtContext* TConfParser::extStmt() {
  ExtStmtContext *_localctx = _tracker.createInstance<ExtStmtContext>(_ctx, getState());
  enterRule(_localctx, 54, TConfParser::RuleExtStmt);
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
    setState(507);
    match(TConfParser::T__20);
    setState(509);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TConfParser::SP) {
      setState(508);
      match(TConfParser::SP);
    }
    setState(511);
    ext();
    setState(522);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 77, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(513);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TConfParser::SP) {
          setState(512);
          match(TConfParser::SP);
        }
        setState(515);
        match(TConfParser::T__21);
        setState(517);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TConfParser::SP) {
          setState(516);
          match(TConfParser::SP);
        }
        setState(519);
        ext(); 
      }
      setState(524);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 77, _ctx);
    }
    setState(526);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TConfParser::SP) {
      setState(525);
      match(TConfParser::SP);
    }
    setState(528);
    match(TConfParser::T__22);
    setState(530);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TConfParser::SP) {
      setState(529);
      match(TConfParser::SP);
    }
    setState(532);
    match(TConfParser::T__4);
    setState(533);
    rvalue();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExtContext ------------------------------------------------------------------

TConfParser::ExtContext::ExtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TConfParser::ExtNameContext* TConfParser::ExtContext::extName() {
  return getRuleContext<TConfParser::ExtNameContext>(0);
}


size_t TConfParser::ExtContext::getRuleIndex() const {
  return TConfParser::RuleExt;
}


std::any TConfParser::ExtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TConfVisitor*>(visitor))
    return parserVisitor->visitExt(this);
  else
    return visitor->visitChildren(this);
}

TConfParser::ExtContext* TConfParser::ext() {
  ExtContext *_localctx = _tracker.createInstance<ExtContext>(_ctx, getState());
  enterRule(_localctx, 56, TConfParser::RuleExt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(535);
    match(TConfParser::T__1);
    setState(536);
    extName();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExtNameContext ------------------------------------------------------------------

TConfParser::ExtNameContext::ExtNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TConfParser::IdentContext* TConfParser::ExtNameContext::ident() {
  return getRuleContext<TConfParser::IdentContext>(0);
}


size_t TConfParser::ExtNameContext::getRuleIndex() const {
  return TConfParser::RuleExtName;
}


std::any TConfParser::ExtNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TConfVisitor*>(visitor))
    return parserVisitor->visitExtName(this);
  else
    return visitor->visitChildren(this);
}

TConfParser::ExtNameContext* TConfParser::extName() {
  ExtNameContext *_localctx = _tracker.createInstance<ExtNameContext>(_ctx, getState());
  enterRule(_localctx, 58, TConfParser::RuleExtName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(540);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TConfParser::T__23: {
        enterOuterAlt(_localctx, 1);
        setState(538);
        match(TConfParser::T__23);
        break;
      }

      case TConfParser::T__24:
      case TConfParser::T__27:
      case TConfParser::T__28:
      case TConfParser::T__29:
      case TConfParser::T__32:
      case TConfParser::T__38:
      case TConfParser::T__40:
      case TConfParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(539);
        ident();
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

//----------------- MacroDefSignatureContext ------------------------------------------------------------------

TConfParser::MacroDefSignatureContext::MacroDefSignatureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TConfParser::MacroNameContext* TConfParser::MacroDefSignatureContext::macroName() {
  return getRuleContext<TConfParser::MacroNameContext>(0);
}

std::vector<tree::TerminalNode *> TConfParser::MacroDefSignatureContext::SP() {
  return getTokens(TConfParser::SP);
}

tree::TerminalNode* TConfParser::MacroDefSignatureContext::SP(size_t i) {
  return getToken(TConfParser::SP, i);
}

TConfParser::FormalArgsContext* TConfParser::MacroDefSignatureContext::formalArgs() {
  return getRuleContext<TConfParser::FormalArgsContext>(0);
}


size_t TConfParser::MacroDefSignatureContext::getRuleIndex() const {
  return TConfParser::RuleMacroDefSignature;
}


std::any TConfParser::MacroDefSignatureContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TConfVisitor*>(visitor))
    return parserVisitor->visitMacroDefSignature(this);
  else
    return visitor->visitChildren(this);
}

TConfParser::MacroDefSignatureContext* TConfParser::macroDefSignature() {
  MacroDefSignatureContext *_localctx = _tracker.createInstance<MacroDefSignatureContext>(_ctx, getState());
  enterRule(_localctx, 60, TConfParser::RuleMacroDefSignature);
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
     ScopeKind = EScopeKind::Macro; 
    setState(544);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TConfParser::SP) {
      setState(543);
      match(TConfParser::SP);
    }
    setState(546);
    macroName();
    setState(548);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TConfParser::SP) {
      setState(547);
      match(TConfParser::SP);
    }
    setState(550);
    match(TConfParser::T__9);
    setState(552);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TConfParser::SP) {
      setState(551);
      match(TConfParser::SP);
    }
    setState(558);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 15953421139968) != 0) {
      setState(554);
      formalArgs();
      setState(556);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == TConfParser::SP) {
        setState(555);
        match(TConfParser::SP);
      }
    }
    setState(560);
    match(TConfParser::T__10);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MacroDefContext ------------------------------------------------------------------

TConfParser::MacroDefContext::MacroDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TConfParser::MacroDefSignatureContext* TConfParser::MacroDefContext::macroDefSignature() {
  return getRuleContext<TConfParser::MacroDefSignatureContext>(0);
}

TConfParser::BlockContext* TConfParser::MacroDefContext::block() {
  return getRuleContext<TConfParser::BlockContext>(0);
}

tree::TerminalNode* TConfParser::MacroDefContext::SP() {
  return getToken(TConfParser::SP, 0);
}


size_t TConfParser::MacroDefContext::getRuleIndex() const {
  return TConfParser::RuleMacroDef;
}


std::any TConfParser::MacroDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TConfVisitor*>(visitor))
    return parserVisitor->visitMacroDef(this);
  else
    return visitor->visitChildren(this);
}

TConfParser::MacroDefContext* TConfParser::macroDef() {
  MacroDefContext *_localctx = _tracker.createInstance<MacroDefContext>(_ctx, getState());
  enterRule(_localctx, 62, TConfParser::RuleMacroDef);
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
    setState(562);
    match(TConfParser::T__24);
    setState(563);
    macroDefSignature();
    setState(565);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TConfParser::SP) {
      setState(564);
      match(TConfParser::SP);
    }
    setState(567);
    block();
     ScopeKind = EScopeKind::None; 
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MacroNameContext ------------------------------------------------------------------

TConfParser::MacroNameContext::MacroNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TConfParser::IdentContext* TConfParser::MacroNameContext::ident() {
  return getRuleContext<TConfParser::IdentContext>(0);
}


size_t TConfParser::MacroNameContext::getRuleIndex() const {
  return TConfParser::RuleMacroName;
}


std::any TConfParser::MacroNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TConfVisitor*>(visitor))
    return parserVisitor->visitMacroName(this);
  else
    return visitor->visitChildren(this);
}

TConfParser::MacroNameContext* TConfParser::macroName() {
  MacroNameContext *_localctx = _tracker.createInstance<MacroNameContext>(_ctx, getState());
  enterRule(_localctx, 64, TConfParser::RuleMacroName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(570);
    ident();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FormalArgsContext ------------------------------------------------------------------

TConfParser::FormalArgsContext::FormalArgsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TConfParser::VarargContext* TConfParser::FormalArgsContext::vararg() {
  return getRuleContext<TConfParser::VarargContext>(0);
}

std::vector<TConfParser::FormalArgContext *> TConfParser::FormalArgsContext::formalArg() {
  return getRuleContexts<TConfParser::FormalArgContext>();
}

TConfParser::FormalArgContext* TConfParser::FormalArgsContext::formalArg(size_t i) {
  return getRuleContext<TConfParser::FormalArgContext>(i);
}

std::vector<tree::TerminalNode *> TConfParser::FormalArgsContext::SP() {
  return getTokens(TConfParser::SP);
}

tree::TerminalNode* TConfParser::FormalArgsContext::SP(size_t i) {
  return getToken(TConfParser::SP, i);
}


size_t TConfParser::FormalArgsContext::getRuleIndex() const {
  return TConfParser::RuleFormalArgs;
}


std::any TConfParser::FormalArgsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TConfVisitor*>(visitor))
    return parserVisitor->visitFormalArgs(this);
  else
    return visitor->visitChildren(this);
}

TConfParser::FormalArgsContext* TConfParser::formalArgs() {
  FormalArgsContext *_localctx = _tracker.createInstance<FormalArgsContext>(_ctx, getState());
  enterRule(_localctx, 66, TConfParser::RuleFormalArgs);
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
    setState(597);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 93, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(572);
      vararg();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(573);
      formalArg();
      setState(584);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 89, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(575);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == TConfParser::SP) {
            setState(574);
            match(TConfParser::SP);
          }
          setState(577);
          match(TConfParser::T__21);
          setState(579);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == TConfParser::SP) {
            setState(578);
            match(TConfParser::SP);
          }
          setState(581);
          formalArg(); 
        }
        setState(586);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 89, _ctx);
      }
      setState(595);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 92, _ctx)) {
      case 1: {
        setState(588);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TConfParser::SP) {
          setState(587);
          match(TConfParser::SP);
        }
        setState(590);
        match(TConfParser::T__21);
        setState(592);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TConfParser::SP) {
          setState(591);
          match(TConfParser::SP);
        }
        setState(594);
        vararg();
        break;
      }

      default:
        break;
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarargContext ------------------------------------------------------------------

TConfParser::VarargContext::VarargContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TConfParser::ArgNameContext* TConfParser::VarargContext::argName() {
  return getRuleContext<TConfParser::ArgNameContext>(0);
}


size_t TConfParser::VarargContext::getRuleIndex() const {
  return TConfParser::RuleVararg;
}


std::any TConfParser::VarargContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TConfVisitor*>(visitor))
    return parserVisitor->visitVararg(this);
  else
    return visitor->visitChildren(this);
}

TConfParser::VarargContext* TConfParser::vararg() {
  VarargContext *_localctx = _tracker.createInstance<VarargContext>(_ctx, getState());
  enterRule(_localctx, 68, TConfParser::RuleVararg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(599);
    argName();
    setState(600);
    match(TConfParser::T__25);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FormalArgContext ------------------------------------------------------------------

TConfParser::FormalArgContext::FormalArgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TConfParser::SpecArgContext* TConfParser::FormalArgContext::specArg() {
  return getRuleContext<TConfParser::SpecArgContext>(0);
}

TConfParser::ArgNameContext* TConfParser::FormalArgContext::argName() {
  return getRuleContext<TConfParser::ArgNameContext>(0);
}

TConfParser::DeepReplaceContext* TConfParser::FormalArgContext::deepReplace() {
  return getRuleContext<TConfParser::DeepReplaceContext>(0);
}

TConfParser::ArraySpecContext* TConfParser::FormalArgContext::arraySpec() {
  return getRuleContext<TConfParser::ArraySpecContext>(0);
}

TConfParser::BoolSpecContext* TConfParser::FormalArgContext::boolSpec() {
  return getRuleContext<TConfParser::BoolSpecContext>(0);
}

TConfParser::DefaultInitContext* TConfParser::FormalArgContext::defaultInit() {
  return getRuleContext<TConfParser::DefaultInitContext>(0);
}

TConfParser::BoolInitContext* TConfParser::FormalArgContext::boolInit() {
  return getRuleContext<TConfParser::BoolInitContext>(0);
}

tree::TerminalNode* TConfParser::FormalArgContext::SP() {
  return getToken(TConfParser::SP, 0);
}


size_t TConfParser::FormalArgContext::getRuleIndex() const {
  return TConfParser::RuleFormalArg;
}


std::any TConfParser::FormalArgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TConfVisitor*>(visitor))
    return parserVisitor->visitFormalArg(this);
  else
    return visitor->visitChildren(this);
}

TConfParser::FormalArgContext* TConfParser::formalArg() {
  FormalArgContext *_localctx = _tracker.createInstance<FormalArgContext>(_ctx, getState());
  enterRule(_localctx, 70, TConfParser::RuleFormalArg);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(621);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TConfParser::T__41: {
        enterOuterAlt(_localctx, 1);
        setState(602);
        specArg();
        break;
      }

      case TConfParser::T__24:
      case TConfParser::T__27:
      case TConfParser::T__28:
      case TConfParser::T__29:
      case TConfParser::T__32:
      case TConfParser::T__38:
      case TConfParser::T__40:
      case TConfParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(603);
        argName();
        setState(605);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TConfParser::T__2) {
          setState(604);
          deepReplace();
        }
        setState(619);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 98, _ctx)) {
        case 1: {
          setState(607);
          arraySpec();
          break;
        }

        case 2: {
          setState(608);
          boolSpec();
          setState(613);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 96, _ctx)) {
          case 1: {
            setState(610);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == TConfParser::SP) {
              setState(609);
              match(TConfParser::SP);
            }
            setState(612);
            boolInit();
            break;
          }

          default:
            break;
          }
          break;
        }

        case 3: {
          setState(616);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == TConfParser::SP) {
            setState(615);
            match(TConfParser::SP);
          }
          setState(618);
          defaultInit();
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
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeepReplaceContext ------------------------------------------------------------------

TConfParser::DeepReplaceContext::DeepReplaceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TConfParser::ModifiersContext* TConfParser::DeepReplaceContext::modifiers() {
  return getRuleContext<TConfParser::ModifiersContext>(0);
}


size_t TConfParser::DeepReplaceContext::getRuleIndex() const {
  return TConfParser::RuleDeepReplace;
}


std::any TConfParser::DeepReplaceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TConfVisitor*>(visitor))
    return parserVisitor->visitDeepReplace(this);
  else
    return visitor->visitChildren(this);
}

TConfParser::DeepReplaceContext* TConfParser::deepReplace() {
  DeepReplaceContext *_localctx = _tracker.createInstance<DeepReplaceContext>(_ctx, getState());
  enterRule(_localctx, 72, TConfParser::RuleDeepReplace);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(623);
    match(TConfParser::T__2);
    setState(624);
    modifiers();
    setState(625);
    match(TConfParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ModifiersContext ------------------------------------------------------------------

TConfParser::ModifiersContext::ModifiersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TConfParser::ModifierContext *> TConfParser::ModifiersContext::modifier() {
  return getRuleContexts<TConfParser::ModifierContext>();
}

TConfParser::ModifierContext* TConfParser::ModifiersContext::modifier(size_t i) {
  return getRuleContext<TConfParser::ModifierContext>(i);
}


size_t TConfParser::ModifiersContext::getRuleIndex() const {
  return TConfParser::RuleModifiers;
}


std::any TConfParser::ModifiersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TConfVisitor*>(visitor))
    return parserVisitor->visitModifiers(this);
  else
    return visitor->visitChildren(this);
}

TConfParser::ModifiersContext* TConfParser::modifiers() {
  ModifiersContext *_localctx = _tracker.createInstance<ModifiersContext>(_ctx, getState());
  enterRule(_localctx, 74, TConfParser::RuleModifiers);
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
    setState(627);
    modifier();
    setState(632);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TConfParser::T__26) {
      setState(628);
      match(TConfParser::T__26);
      setState(629);
      modifier();
      setState(634);
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

//----------------- ModifierContext ------------------------------------------------------------------

TConfParser::ModifierContext::ModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t TConfParser::ModifierContext::getRuleIndex() const {
  return TConfParser::RuleModifier;
}


std::any TConfParser::ModifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TConfVisitor*>(visitor))
    return parserVisitor->visitModifier(this);
  else
    return visitor->visitChildren(this);
}

TConfParser::ModifierContext* TConfParser::modifier() {
  ModifierContext *_localctx = _tracker.createInstance<ModifierContext>(_ctx, getState());
  enterRule(_localctx, 76, TConfParser::RuleModifier);
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
    setState(635);
    _la = _input->LA(1);
    if (!(((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1879048192) != 0)) {
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

//----------------- ArraySpecContext ------------------------------------------------------------------

TConfParser::ArraySpecContext::ArraySpecContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t TConfParser::ArraySpecContext::getRuleIndex() const {
  return TConfParser::RuleArraySpec;
}


std::any TConfParser::ArraySpecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TConfVisitor*>(visitor))
    return parserVisitor->visitArraySpec(this);
  else
    return visitor->visitChildren(this);
}

TConfParser::ArraySpecContext* TConfParser::arraySpec() {
  ArraySpecContext *_localctx = _tracker.createInstance<ArraySpecContext>(_ctx, getState());
  enterRule(_localctx, 78, TConfParser::RuleArraySpec);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(637);
    match(TConfParser::T__30);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BoolSpecContext ------------------------------------------------------------------

TConfParser::BoolSpecContext::BoolSpecContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t TConfParser::BoolSpecContext::getRuleIndex() const {
  return TConfParser::RuleBoolSpec;
}


std::any TConfParser::BoolSpecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TConfVisitor*>(visitor))
    return parserVisitor->visitBoolSpec(this);
  else
    return visitor->visitChildren(this);
}

TConfParser::BoolSpecContext* TConfParser::boolSpec() {
  BoolSpecContext *_localctx = _tracker.createInstance<BoolSpecContext>(_ctx, getState());
  enterRule(_localctx, 80, TConfParser::RuleBoolSpec);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(639);
    match(TConfParser::T__16);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BoolInitContext ------------------------------------------------------------------

TConfParser::BoolInitContext::BoolInitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TConfParser::StringContext *> TConfParser::BoolInitContext::string() {
  return getRuleContexts<TConfParser::StringContext>();
}

TConfParser::StringContext* TConfParser::BoolInitContext::string(size_t i) {
  return getRuleContext<TConfParser::StringContext>(i);
}

std::vector<tree::TerminalNode *> TConfParser::BoolInitContext::SP() {
  return getTokens(TConfParser::SP);
}

tree::TerminalNode* TConfParser::BoolInitContext::SP(size_t i) {
  return getToken(TConfParser::SP, i);
}


size_t TConfParser::BoolInitContext::getRuleIndex() const {
  return TConfParser::RuleBoolInit;
}


std::any TConfParser::BoolInitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TConfVisitor*>(visitor))
    return parserVisitor->visitBoolInit(this);
  else
    return visitor->visitChildren(this);
}

TConfParser::BoolInitContext* TConfParser::boolInit() {
  BoolInitContext *_localctx = _tracker.createInstance<BoolInitContext>(_ctx, getState());
  enterRule(_localctx, 82, TConfParser::RuleBoolInit);
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
    setState(641);
    antlrcpp::downCast<BoolInitContext *>(_localctx)->initTrue = string();
    setState(643);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TConfParser::SP) {
      setState(642);
      match(TConfParser::SP);
    }
    setState(645);
    match(TConfParser::T__19);
    setState(647);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TConfParser::SP) {
      setState(646);
      match(TConfParser::SP);
    }
    setState(649);
    antlrcpp::downCast<BoolInitContext *>(_localctx)->initFalse = string();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefaultInitContext ------------------------------------------------------------------

TConfParser::DefaultInitContext::DefaultInitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TConfParser::StringContext* TConfParser::DefaultInitContext::string() {
  return getRuleContext<TConfParser::StringContext>(0);
}

tree::TerminalNode* TConfParser::DefaultInitContext::SP() {
  return getToken(TConfParser::SP, 0);
}


size_t TConfParser::DefaultInitContext::getRuleIndex() const {
  return TConfParser::RuleDefaultInit;
}


std::any TConfParser::DefaultInitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TConfVisitor*>(visitor))
    return parserVisitor->visitDefaultInit(this);
  else
    return visitor->visitChildren(this);
}

TConfParser::DefaultInitContext* TConfParser::defaultInit() {
  DefaultInitContext *_localctx = _tracker.createInstance<DefaultInitContext>(_ctx, getState());
  enterRule(_localctx, 84, TConfParser::RuleDefaultInit);
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
    setState(651);
    match(TConfParser::T__4);
    setState(653);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TConfParser::SP) {
      setState(652);
      match(TConfParser::SP);
    }
    setState(655);
    string();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SpecArgContext ------------------------------------------------------------------

TConfParser::SpecArgContext::SpecArgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TConfParser::StringContext* TConfParser::SpecArgContext::string() {
  return getRuleContext<TConfParser::StringContext>(0);
}


size_t TConfParser::SpecArgContext::getRuleIndex() const {
  return TConfParser::RuleSpecArg;
}


std::any TConfParser::SpecArgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TConfVisitor*>(visitor))
    return parserVisitor->visitSpecArg(this);
  else
    return visitor->visitChildren(this);
}

TConfParser::SpecArgContext* TConfParser::specArg() {
  SpecArgContext *_localctx = _tracker.createInstance<SpecArgContext>(_ctx, getState());
  enterRule(_localctx, 86, TConfParser::RuleSpecArg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(657);
    string();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgNameContext ------------------------------------------------------------------

TConfParser::ArgNameContext::ArgNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TConfParser::IdentContext* TConfParser::ArgNameContext::ident() {
  return getRuleContext<TConfParser::IdentContext>(0);
}


size_t TConfParser::ArgNameContext::getRuleIndex() const {
  return TConfParser::RuleArgName;
}


std::any TConfParser::ArgNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TConfVisitor*>(visitor))
    return parserVisitor->visitArgName(this);
  else
    return visitor->visitChildren(this);
}

TConfParser::ArgNameContext* TConfParser::argName() {
  ArgNameContext *_localctx = _tracker.createInstance<ArgNameContext>(_ctx, getState());
  enterRule(_localctx, 88, TConfParser::RuleArgName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(659);
    ident();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MultiModuleDefSignatureContext ------------------------------------------------------------------

TConfParser::MultiModuleDefSignatureContext::MultiModuleDefSignatureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TConfParser::ModuleNameContext* TConfParser::MultiModuleDefSignatureContext::moduleName() {
  return getRuleContext<TConfParser::ModuleNameContext>(0);
}

tree::TerminalNode* TConfParser::MultiModuleDefSignatureContext::SP() {
  return getToken(TConfParser::SP, 0);
}


size_t TConfParser::MultiModuleDefSignatureContext::getRuleIndex() const {
  return TConfParser::RuleMultiModuleDefSignature;
}


std::any TConfParser::MultiModuleDefSignatureContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TConfVisitor*>(visitor))
    return parserVisitor->visitMultiModuleDefSignature(this);
  else
    return visitor->visitChildren(this);
}

TConfParser::MultiModuleDefSignatureContext* TConfParser::multiModuleDefSignature() {
  MultiModuleDefSignatureContext *_localctx = _tracker.createInstance<MultiModuleDefSignatureContext>(_ctx, getState());
  enterRule(_localctx, 90, TConfParser::RuleMultiModuleDefSignature);
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
     ScopeKind = EScopeKind::MultiModule; InMultiModule = true; 
    setState(663);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TConfParser::SP) {
      setState(662);
      match(TConfParser::SP);
    }
    setState(665);
    moduleName();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MultiModuleDefContext ------------------------------------------------------------------

TConfParser::MultiModuleDefContext::MultiModuleDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TConfParser::MultiModuleDefSignatureContext* TConfParser::MultiModuleDefContext::multiModuleDefSignature() {
  return getRuleContext<TConfParser::MultiModuleDefSignatureContext>(0);
}

TConfParser::BlockContext* TConfParser::MultiModuleDefContext::block() {
  return getRuleContext<TConfParser::BlockContext>(0);
}

tree::TerminalNode* TConfParser::MultiModuleDefContext::SP() {
  return getToken(TConfParser::SP, 0);
}


size_t TConfParser::MultiModuleDefContext::getRuleIndex() const {
  return TConfParser::RuleMultiModuleDef;
}


std::any TConfParser::MultiModuleDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TConfVisitor*>(visitor))
    return parserVisitor->visitMultiModuleDef(this);
  else
    return visitor->visitChildren(this);
}

TConfParser::MultiModuleDefContext* TConfParser::multiModuleDef() {
  MultiModuleDefContext *_localctx = _tracker.createInstance<MultiModuleDefContext>(_ctx, getState());
  enterRule(_localctx, 92, TConfParser::RuleMultiModuleDef);
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
    setState(667);
    match(TConfParser::T__31);
    setState(668);
    multiModuleDefSignature();
    setState(670);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TConfParser::SP) {
      setState(669);
      match(TConfParser::SP);
    }
    setState(672);
    block();
     InMultiModule = false; ScopeKind = EScopeKind::None; 
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ModuleDefStmtContext ------------------------------------------------------------------

TConfParser::ModuleDefStmtContext::ModuleDefStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TConfParser::ModuleDefContext* TConfParser::ModuleDefStmtContext::moduleDef() {
  return getRuleContext<TConfParser::ModuleDefContext>(0);
}


size_t TConfParser::ModuleDefStmtContext::getRuleIndex() const {
  return TConfParser::RuleModuleDefStmt;
}


std::any TConfParser::ModuleDefStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TConfVisitor*>(visitor))
    return parserVisitor->visitModuleDefStmt(this);
  else
    return visitor->visitChildren(this);
}

TConfParser::ModuleDefStmtContext* TConfParser::moduleDefStmt() {
  ModuleDefStmtContext *_localctx = _tracker.createInstance<ModuleDefStmtContext>(_ctx, getState());
  enterRule(_localctx, 94, TConfParser::RuleModuleDefStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(675);
    moduleDef();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ModuleDefSignatureContext ------------------------------------------------------------------

TConfParser::ModuleDefSignatureContext::ModuleDefSignatureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TConfParser::ModuleNameContext* TConfParser::ModuleDefSignatureContext::moduleName() {
  return getRuleContext<TConfParser::ModuleNameContext>(0);
}

std::vector<tree::TerminalNode *> TConfParser::ModuleDefSignatureContext::SP() {
  return getTokens(TConfParser::SP);
}

tree::TerminalNode* TConfParser::ModuleDefSignatureContext::SP(size_t i) {
  return getToken(TConfParser::SP, i);
}

TConfParser::AncestorContext* TConfParser::ModuleDefSignatureContext::ancestor() {
  return getRuleContext<TConfParser::AncestorContext>(0);
}


size_t TConfParser::ModuleDefSignatureContext::getRuleIndex() const {
  return TConfParser::RuleModuleDefSignature;
}


std::any TConfParser::ModuleDefSignatureContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TConfVisitor*>(visitor))
    return parserVisitor->visitModuleDefSignature(this);
  else
    return visitor->visitChildren(this);
}

TConfParser::ModuleDefSignatureContext* TConfParser::moduleDefSignature() {
  ModuleDefSignatureContext *_localctx = _tracker.createInstance<ModuleDefSignatureContext>(_ctx, getState());
  enterRule(_localctx, 96, TConfParser::RuleModuleDefSignature);
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
     ScopeKind = EScopeKind::Module; 
    setState(679);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TConfParser::SP) {
      setState(678);
      match(TConfParser::SP);
    }
    setState(681);
    moduleName();
    setState(683);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TConfParser::SP) {
      setState(682);
      match(TConfParser::SP);
    }
    setState(689);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TConfParser::T__19) {
      setState(685);
      ancestor();
      setState(687);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == TConfParser::SP) {
        setState(686);
        match(TConfParser::SP);
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ModuleDefContext ------------------------------------------------------------------

TConfParser::ModuleDefContext::ModuleDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TConfParser::ModuleDefSignatureContext* TConfParser::ModuleDefContext::moduleDefSignature() {
  return getRuleContext<TConfParser::ModuleDefSignatureContext>(0);
}

TConfParser::BlockContext* TConfParser::ModuleDefContext::block() {
  return getRuleContext<TConfParser::BlockContext>(0);
}


size_t TConfParser::ModuleDefContext::getRuleIndex() const {
  return TConfParser::RuleModuleDef;
}


std::any TConfParser::ModuleDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TConfVisitor*>(visitor))
    return parserVisitor->visitModuleDef(this);
  else
    return visitor->visitChildren(this);
}

TConfParser::ModuleDefContext* TConfParser::moduleDef() {
  ModuleDefContext *_localctx = _tracker.createInstance<ModuleDefContext>(_ctx, getState());
  enterRule(_localctx, 98, TConfParser::RuleModuleDef);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(691);
    match(TConfParser::T__32);
    setState(692);
    moduleDefSignature();
    setState(693);
    block();
     ScopeKind = InMultiModule ? EScopeKind::MultiModule : EScopeKind::None; 
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ModuleNameContext ------------------------------------------------------------------

TConfParser::ModuleNameContext::ModuleNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TConfParser::IdentContext* TConfParser::ModuleNameContext::ident() {
  return getRuleContext<TConfParser::IdentContext>(0);
}


size_t TConfParser::ModuleNameContext::getRuleIndex() const {
  return TConfParser::RuleModuleName;
}


std::any TConfParser::ModuleNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TConfVisitor*>(visitor))
    return parserVisitor->visitModuleName(this);
  else
    return visitor->visitChildren(this);
}

TConfParser::ModuleNameContext* TConfParser::moduleName() {
  ModuleNameContext *_localctx = _tracker.createInstance<ModuleNameContext>(_ctx, getState());
  enterRule(_localctx, 100, TConfParser::RuleModuleName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(696);
    ident();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AncestorContext ------------------------------------------------------------------

TConfParser::AncestorContext::AncestorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TConfParser::ModuleNameContext* TConfParser::AncestorContext::moduleName() {
  return getRuleContext<TConfParser::ModuleNameContext>(0);
}

tree::TerminalNode* TConfParser::AncestorContext::SP() {
  return getToken(TConfParser::SP, 0);
}


size_t TConfParser::AncestorContext::getRuleIndex() const {
  return TConfParser::RuleAncestor;
}


std::any TConfParser::AncestorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TConfVisitor*>(visitor))
    return parserVisitor->visitAncestor(this);
  else
    return visitor->visitChildren(this);
}

TConfParser::AncestorContext* TConfParser::ancestor() {
  AncestorContext *_localctx = _tracker.createInstance<AncestorContext>(_ctx, getState());
  enterRule(_localctx, 102, TConfParser::RuleAncestor);
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
    setState(698);
    match(TConfParser::T__19);
    setState(700);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TConfParser::SP) {
      setState(699);
      match(TConfParser::SP);
    }
    setState(702);
    moduleName();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicExprContext ------------------------------------------------------------------

TConfParser::LogicExprContext::LogicExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TConfParser::LogicOrContext* TConfParser::LogicExprContext::logicOr() {
  return getRuleContext<TConfParser::LogicOrContext>(0);
}

TConfParser::LogicInContext* TConfParser::LogicExprContext::logicIn() {
  return getRuleContext<TConfParser::LogicInContext>(0);
}


size_t TConfParser::LogicExprContext::getRuleIndex() const {
  return TConfParser::RuleLogicExpr;
}


std::any TConfParser::LogicExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TConfVisitor*>(visitor))
    return parserVisitor->visitLogicExpr(this);
  else
    return visitor->visitChildren(this);
}

TConfParser::LogicExprContext* TConfParser::logicExpr() {
  LogicExprContext *_localctx = _tracker.createInstance<LogicExprContext>(_ctx, getState());
  enterRule(_localctx, 104, TConfParser::RuleLogicExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(706);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 111, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(704);
      logicOr();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(705);
      logicIn();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicOrContext ------------------------------------------------------------------

TConfParser::LogicOrContext::LogicOrContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TConfParser::LogicAndContext *> TConfParser::LogicOrContext::logicAnd() {
  return getRuleContexts<TConfParser::LogicAndContext>();
}

TConfParser::LogicAndContext* TConfParser::LogicOrContext::logicAnd(size_t i) {
  return getRuleContext<TConfParser::LogicAndContext>(i);
}

std::vector<tree::TerminalNode *> TConfParser::LogicOrContext::SP() {
  return getTokens(TConfParser::SP);
}

tree::TerminalNode* TConfParser::LogicOrContext::SP(size_t i) {
  return getToken(TConfParser::SP, i);
}


size_t TConfParser::LogicOrContext::getRuleIndex() const {
  return TConfParser::RuleLogicOr;
}


std::any TConfParser::LogicOrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TConfVisitor*>(visitor))
    return parserVisitor->visitLogicOr(this);
  else
    return visitor->visitChildren(this);
}

TConfParser::LogicOrContext* TConfParser::logicOr() {
  LogicOrContext *_localctx = _tracker.createInstance<LogicOrContext>(_ctx, getState());
  enterRule(_localctx, 106, TConfParser::RuleLogicOr);
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
    setState(708);
    logicAnd();
    setState(719);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 114, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(710);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TConfParser::SP) {
          setState(709);
          match(TConfParser::SP);
        }
        setState(712);
        match(TConfParser::T__33);
        setState(714);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TConfParser::SP) {
          setState(713);
          match(TConfParser::SP);
        }
        setState(716);
        logicAnd(); 
      }
      setState(721);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 114, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicAndContext ------------------------------------------------------------------

TConfParser::LogicAndContext::LogicAndContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TConfParser::LogicRelContext *> TConfParser::LogicAndContext::logicRel() {
  return getRuleContexts<TConfParser::LogicRelContext>();
}

TConfParser::LogicRelContext* TConfParser::LogicAndContext::logicRel(size_t i) {
  return getRuleContext<TConfParser::LogicRelContext>(i);
}

std::vector<tree::TerminalNode *> TConfParser::LogicAndContext::SP() {
  return getTokens(TConfParser::SP);
}

tree::TerminalNode* TConfParser::LogicAndContext::SP(size_t i) {
  return getToken(TConfParser::SP, i);
}


size_t TConfParser::LogicAndContext::getRuleIndex() const {
  return TConfParser::RuleLogicAnd;
}


std::any TConfParser::LogicAndContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TConfVisitor*>(visitor))
    return parserVisitor->visitLogicAnd(this);
  else
    return visitor->visitChildren(this);
}

TConfParser::LogicAndContext* TConfParser::logicAnd() {
  LogicAndContext *_localctx = _tracker.createInstance<LogicAndContext>(_ctx, getState());
  enterRule(_localctx, 108, TConfParser::RuleLogicAnd);
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
    setState(722);
    logicRel();
    setState(733);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 117, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(724);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TConfParser::SP) {
          setState(723);
          match(TConfParser::SP);
        }
        setState(726);
        match(TConfParser::T__34);
        setState(728);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TConfParser::SP) {
          setState(727);
          match(TConfParser::SP);
        }
        setState(730);
        logicRel(); 
      }
      setState(735);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 117, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicRelContext ------------------------------------------------------------------

TConfParser::LogicRelContext::LogicRelContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TConfParser::LogicNotContext *> TConfParser::LogicRelContext::logicNot() {
  return getRuleContexts<TConfParser::LogicNotContext>();
}

TConfParser::LogicNotContext* TConfParser::LogicRelContext::logicNot(size_t i) {
  return getRuleContext<TConfParser::LogicNotContext>(i);
}

TConfParser::RelationOpContext* TConfParser::LogicRelContext::relationOp() {
  return getRuleContext<TConfParser::RelationOpContext>(0);
}

std::vector<tree::TerminalNode *> TConfParser::LogicRelContext::SP() {
  return getTokens(TConfParser::SP);
}

tree::TerminalNode* TConfParser::LogicRelContext::SP(size_t i) {
  return getToken(TConfParser::SP, i);
}


size_t TConfParser::LogicRelContext::getRuleIndex() const {
  return TConfParser::RuleLogicRel;
}


std::any TConfParser::LogicRelContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TConfVisitor*>(visitor))
    return parserVisitor->visitLogicRel(this);
  else
    return visitor->visitChildren(this);
}

TConfParser::LogicRelContext* TConfParser::logicRel() {
  LogicRelContext *_localctx = _tracker.createInstance<LogicRelContext>(_ctx, getState());
  enterRule(_localctx, 110, TConfParser::RuleLogicRel);
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
    setState(736);
    logicNot();
    setState(746);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 120, _ctx)) {
    case 1: {
      setState(738);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == TConfParser::SP) {
        setState(737);
        match(TConfParser::SP);
      }
      setState(740);
      relationOp();
      setState(742);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == TConfParser::SP) {
        setState(741);
        match(TConfParser::SP);
      }
      setState(744);
      logicNot();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicNotContext ------------------------------------------------------------------

TConfParser::LogicNotContext::LogicNotContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TConfParser::LogicTermContext* TConfParser::LogicNotContext::logicTerm() {
  return getRuleContext<TConfParser::LogicTermContext>(0);
}

TConfParser::NegationOpContext* TConfParser::LogicNotContext::negationOp() {
  return getRuleContext<TConfParser::NegationOpContext>(0);
}

tree::TerminalNode* TConfParser::LogicNotContext::SP() {
  return getToken(TConfParser::SP, 0);
}


size_t TConfParser::LogicNotContext::getRuleIndex() const {
  return TConfParser::RuleLogicNot;
}


std::any TConfParser::LogicNotContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TConfVisitor*>(visitor))
    return parserVisitor->visitLogicNot(this);
  else
    return visitor->visitChildren(this);
}

TConfParser::LogicNotContext* TConfParser::logicNot() {
  LogicNotContext *_localctx = _tracker.createInstance<LogicNotContext>(_ctx, getState());
  enterRule(_localctx, 112, TConfParser::RuleLogicNot);
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
    setState(752);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TConfParser::T__37) {
      setState(748);
      negationOp();
      setState(750);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == TConfParser::SP) {
        setState(749);
        match(TConfParser::SP);
      }
    }
    setState(754);
    logicTerm();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicTermContext ------------------------------------------------------------------

TConfParser::LogicTermContext::LogicTermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TConfParser::LogicVarRefContext* TConfParser::LogicTermContext::logicVarRef() {
  return getRuleContext<TConfParser::LogicVarRefContext>(0);
}

TConfParser::StringContext* TConfParser::LogicTermContext::string() {
  return getRuleContext<TConfParser::StringContext>(0);
}

TConfParser::LogicExprContext* TConfParser::LogicTermContext::logicExpr() {
  return getRuleContext<TConfParser::LogicExprContext>(0);
}

std::vector<tree::TerminalNode *> TConfParser::LogicTermContext::SP() {
  return getTokens(TConfParser::SP);
}

tree::TerminalNode* TConfParser::LogicTermContext::SP(size_t i) {
  return getToken(TConfParser::SP, i);
}


size_t TConfParser::LogicTermContext::getRuleIndex() const {
  return TConfParser::RuleLogicTerm;
}


std::any TConfParser::LogicTermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TConfVisitor*>(visitor))
    return parserVisitor->visitLogicTerm(this);
  else
    return visitor->visitChildren(this);
}

TConfParser::LogicTermContext* TConfParser::logicTerm() {
  LogicTermContext *_localctx = _tracker.createInstance<LogicTermContext>(_ctx, getState());
  enterRule(_localctx, 114, TConfParser::RuleLogicTerm);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(768);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TConfParser::T__39: {
        enterOuterAlt(_localctx, 1);
        setState(756);
        logicVarRef();
        break;
      }

      case TConfParser::T__41: {
        enterOuterAlt(_localctx, 2);
        setState(757);
        string();
        break;
      }

      case TConfParser::T__9: {
        enterOuterAlt(_localctx, 3);
        setState(758);
        match(TConfParser::T__9);
        setState(760);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TConfParser::SP) {
          setState(759);
          match(TConfParser::SP);
        }
        setState(762);
        logicExpr();
        setState(764);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TConfParser::SP) {
          setState(763);
          match(TConfParser::SP);
        }
        setState(766);
        match(TConfParser::T__10);
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

//----------------- LogicInContext ------------------------------------------------------------------

TConfParser::LogicInContext::LogicInContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> TConfParser::LogicInContext::SP() {
  return getTokens(TConfParser::SP);
}

tree::TerminalNode* TConfParser::LogicInContext::SP(size_t i) {
  return getToken(TConfParser::SP, i);
}

TConfParser::InOpContext* TConfParser::LogicInContext::inOp() {
  return getRuleContext<TConfParser::InOpContext>(0);
}

TConfParser::LogicVarRefContext* TConfParser::LogicInContext::logicVarRef() {
  return getRuleContext<TConfParser::LogicVarRefContext>(0);
}

TConfParser::StringContext* TConfParser::LogicInContext::string() {
  return getRuleContext<TConfParser::StringContext>(0);
}

TConfParser::StringArrayContext* TConfParser::LogicInContext::stringArray() {
  return getRuleContext<TConfParser::StringArrayContext>(0);
}

TConfParser::VarRefContext* TConfParser::LogicInContext::varRef() {
  return getRuleContext<TConfParser::VarRefContext>(0);
}


size_t TConfParser::LogicInContext::getRuleIndex() const {
  return TConfParser::RuleLogicIn;
}


std::any TConfParser::LogicInContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TConfVisitor*>(visitor))
    return parserVisitor->visitLogicIn(this);
  else
    return visitor->visitChildren(this);
}

TConfParser::LogicInContext* TConfParser::logicIn() {
  LogicInContext *_localctx = _tracker.createInstance<LogicInContext>(_ctx, getState());
  enterRule(_localctx, 116, TConfParser::RuleLogicIn);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(772);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TConfParser::T__39: {
        setState(770);
        logicVarRef();
        break;
      }

      case TConfParser::T__41: {
        setState(771);
        string();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(774);
    match(TConfParser::SP);
    setState(775);
    inOp();
    setState(776);
    match(TConfParser::SP);
    setState(779);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TConfParser::T__20: {
        setState(777);
        stringArray();
        break;
      }

      case TConfParser::T__39: {
        setState(778);
        varRef();
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

//----------------- StringArrayContext ------------------------------------------------------------------

TConfParser::StringArrayContext::StringArrayContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> TConfParser::StringArrayContext::SP() {
  return getTokens(TConfParser::SP);
}

tree::TerminalNode* TConfParser::StringArrayContext::SP(size_t i) {
  return getToken(TConfParser::SP, i);
}

std::vector<TConfParser::StringContext *> TConfParser::StringArrayContext::string() {
  return getRuleContexts<TConfParser::StringContext>();
}

TConfParser::StringContext* TConfParser::StringArrayContext::string(size_t i) {
  return getRuleContext<TConfParser::StringContext>(i);
}


size_t TConfParser::StringArrayContext::getRuleIndex() const {
  return TConfParser::RuleStringArray;
}


std::any TConfParser::StringArrayContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TConfVisitor*>(visitor))
    return parserVisitor->visitStringArray(this);
  else
    return visitor->visitChildren(this);
}

TConfParser::StringArrayContext* TConfParser::stringArray() {
  StringArrayContext *_localctx = _tracker.createInstance<StringArrayContext>(_ctx, getState());
  enterRule(_localctx, 118, TConfParser::RuleStringArray);
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
    setState(781);
    match(TConfParser::T__20);
    setState(783);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TConfParser::SP) {
      setState(782);
      match(TConfParser::SP);
    }
    setState(802);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TConfParser::T__41) {
      setState(785);
      string();
      setState(796);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 131, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(787);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == TConfParser::SP) {
            setState(786);
            match(TConfParser::SP);
          }
          setState(789);
          match(TConfParser::T__21);
          setState(791);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == TConfParser::SP) {
            setState(790);
            match(TConfParser::SP);
          }
          setState(793);
          string(); 
        }
        setState(798);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 131, _ctx);
      }
      setState(800);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == TConfParser::SP) {
        setState(799);
        match(TConfParser::SP);
      }
    }
    setState(804);
    match(TConfParser::T__22);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicVarRefContext ------------------------------------------------------------------

TConfParser::LogicVarRefContext::LogicVarRefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TConfParser::VarRefContext* TConfParser::LogicVarRefContext::varRef() {
  return getRuleContext<TConfParser::VarRefContext>(0);
}


size_t TConfParser::LogicVarRefContext::getRuleIndex() const {
  return TConfParser::RuleLogicVarRef;
}


std::any TConfParser::LogicVarRefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TConfVisitor*>(visitor))
    return parserVisitor->visitLogicVarRef(this);
  else
    return visitor->visitChildren(this);
}

TConfParser::LogicVarRefContext* TConfParser::logicVarRef() {
  LogicVarRefContext *_localctx = _tracker.createInstance<LogicVarRefContext>(_ctx, getState());
  enterRule(_localctx, 120, TConfParser::RuleLogicVarRef);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(806);
    varRef();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RelationOpContext ------------------------------------------------------------------

TConfParser::RelationOpContext::RelationOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t TConfParser::RelationOpContext::getRuleIndex() const {
  return TConfParser::RuleRelationOp;
}


std::any TConfParser::RelationOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TConfVisitor*>(visitor))
    return parserVisitor->visitRelationOp(this);
  else
    return visitor->visitChildren(this);
}

TConfParser::RelationOpContext* TConfParser::relationOp() {
  RelationOpContext *_localctx = _tracker.createInstance<RelationOpContext>(_ctx, getState());
  enterRule(_localctx, 122, TConfParser::RuleRelationOp);
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
    setState(808);
    _la = _input->LA(1);
    if (!(_la == TConfParser::T__35

    || _la == TConfParser::T__36)) {
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

//----------------- NegationOpContext ------------------------------------------------------------------

TConfParser::NegationOpContext::NegationOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t TConfParser::NegationOpContext::getRuleIndex() const {
  return TConfParser::RuleNegationOp;
}


std::any TConfParser::NegationOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TConfVisitor*>(visitor))
    return parserVisitor->visitNegationOp(this);
  else
    return visitor->visitChildren(this);
}

TConfParser::NegationOpContext* TConfParser::negationOp() {
  NegationOpContext *_localctx = _tracker.createInstance<NegationOpContext>(_ctx, getState());
  enterRule(_localctx, 124, TConfParser::RuleNegationOp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(810);
    match(TConfParser::T__37);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InOpContext ------------------------------------------------------------------

TConfParser::InOpContext::InOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t TConfParser::InOpContext::getRuleIndex() const {
  return TConfParser::RuleInOp;
}


std::any TConfParser::InOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TConfVisitor*>(visitor))
    return parserVisitor->visitInOp(this);
  else
    return visitor->visitChildren(this);
}

TConfParser::InOpContext* TConfParser::inOp() {
  InOpContext *_localctx = _tracker.createInstance<InOpContext>(_ctx, getState());
  enterRule(_localctx, 126, TConfParser::RuleInOp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(812);
    match(TConfParser::T__38);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarRefContext ------------------------------------------------------------------

TConfParser::VarRefContext::VarRefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TConfParser::VarNameContext* TConfParser::VarRefContext::varName() {
  return getRuleContext<TConfParser::VarNameContext>(0);
}


size_t TConfParser::VarRefContext::getRuleIndex() const {
  return TConfParser::RuleVarRef;
}


std::any TConfParser::VarRefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TConfVisitor*>(visitor))
    return parserVisitor->visitVarRef(this);
  else
    return visitor->visitChildren(this);
}

TConfParser::VarRefContext* TConfParser::varRef() {
  VarRefContext *_localctx = _tracker.createInstance<VarRefContext>(_ctx, getState());
  enterRule(_localctx, 128, TConfParser::RuleVarRef);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(814);
    match(TConfParser::T__39);
    setState(815);
    varName();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarNameContext ------------------------------------------------------------------

TConfParser::VarNameContext::VarNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TConfParser::IdentContext* TConfParser::VarNameContext::ident() {
  return getRuleContext<TConfParser::IdentContext>(0);
}


size_t TConfParser::VarNameContext::getRuleIndex() const {
  return TConfParser::RuleVarName;
}


std::any TConfParser::VarNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TConfVisitor*>(visitor))
    return parserVisitor->visitVarName(this);
  else
    return visitor->visitChildren(this);
}

TConfParser::VarNameContext* TConfParser::varName() {
  VarNameContext *_localctx = _tracker.createInstance<VarNameContext>(_ctx, getState());
  enterRule(_localctx, 130, TConfParser::RuleVarName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(817);
    ident();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentContext ------------------------------------------------------------------

TConfParser::IdentContext::IdentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TConfParser::IdentContext::ID() {
  return getToken(TConfParser::ID, 0);
}


size_t TConfParser::IdentContext::getRuleIndex() const {
  return TConfParser::RuleIdent;
}


std::any TConfParser::IdentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TConfVisitor*>(visitor))
    return parserVisitor->visitIdent(this);
  else
    return visitor->visitChildren(this);
}

TConfParser::IdentContext* TConfParser::ident() {
  IdentContext *_localctx = _tracker.createInstance<IdentContext>(_ctx, getState());
  enterRule(_localctx, 132, TConfParser::RuleIdent);
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
    setState(819);
    _la = _input->LA(1);
    if (!(((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 11555374628864) != 0)) {
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

//----------------- StringContext ------------------------------------------------------------------

TConfParser::StringContext::StringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TConfParser::StringContentContext* TConfParser::StringContext::stringContent() {
  return getRuleContext<TConfParser::StringContentContext>(0);
}


size_t TConfParser::StringContext::getRuleIndex() const {
  return TConfParser::RuleString;
}


std::any TConfParser::StringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TConfVisitor*>(visitor))
    return parserVisitor->visitString(this);
  else
    return visitor->visitChildren(this);
}

TConfParser::StringContext* TConfParser::string() {
  StringContext *_localctx = _tracker.createInstance<StringContext>(_ctx, getState());
  enterRule(_localctx, 134, TConfParser::RuleString);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(821);
    match(TConfParser::T__41);
    setState(822);
    stringContent();
    setState(823);
    match(TConfParser::T__41);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StringContentContext ------------------------------------------------------------------

TConfParser::StringContentContext::StringContentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> TConfParser::StringContentContext::EOL() {
  return getTokens(TConfParser::EOL);
}

tree::TerminalNode* TConfParser::StringContentContext::EOL(size_t i) {
  return getToken(TConfParser::EOL, i);
}


size_t TConfParser::StringContentContext::getRuleIndex() const {
  return TConfParser::RuleStringContent;
}


std::any TConfParser::StringContentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TConfVisitor*>(visitor))
    return parserVisitor->visitStringContent(this);
  else
    return visitor->visitChildren(this);
}

TConfParser::StringContentContext* TConfParser::stringContent() {
  StringContentContext *_localctx = _tracker.createInstance<StringContentContext>(_ctx, getState());
  enterRule(_localctx, 136, TConfParser::RuleStringContent);
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
    setState(830);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 840026883620862) != 0) {
      setState(828);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 134, _ctx)) {
      case 1: {
        setState(825);
        match(TConfParser::T__8);
        setState(826);
        _la = _input->LA(1);
        if (_la == 0 || _la == Token::EOF || (_la == TConfParser::EOL)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      case 2: {
        setState(827);
        _la = _input->LA(1);
        if (_la == 0 || _la == Token::EOF || (_la == TConfParser::T__41

        || _la == TConfParser::EOL)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      default:
        break;
      }
      setState(832);
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

bool TConfParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 2: return stmtSempred(antlrcpp::downCast<StmtContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool TConfParser::stmtSempred(StmtContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return  BlockLevel == 1 && (IsMacro(ScopeKind) || IsModule(ScopeKind) || IsMultiModule(ScopeKind)) ;
    case 1: return  BlockLevel == 2 && InMultiModule && IsModule(ScopeKind) ;
    case 2: return  IsMultiModule(ScopeKind) ;
    case 3: return  IsMacro(ScopeKind) || IsModule(ScopeKind) ;
    case 4: return  IsMacro(ScopeKind) ;
    case 5: return  IsForeach(ScopeKind) && IsForeachNone(ForeachBlockKind) ;
    case 6: return  IsForeach(ScopeKind) && IsForeachSections(ForeachBlockKind) ;
    case 7: return  !IsForeach(ScopeKind) && !IsMultiModule(ScopeKind) ;

  default:
    break;
  }
  return true;
}

void TConfParser::initialize() {
  ::antlr4::internal::call_once(tconfParserOnceFlag, tconfParserInitialize);
}
