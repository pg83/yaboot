
// Generated from /place/sandbox-data/tasks/8/1/2625932518/__FUSE/mount_path_2c1dce34-9bbf-4bc5-b2ae-da9b834667ac/trunk/arcadia/devtools/ymake/lang/CmdLexer.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"




class  CmdLexer : public antlr4::Lexer {
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
    SQSTR = 1, DQSTR = 2, EVALUATION = 3, MODARG = 4
  };

  explicit CmdLexer(antlr4::CharStream *input);

  ~CmdLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

