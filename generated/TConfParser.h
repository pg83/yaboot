
#include "TConfLexer.h"
#include <util/generic/string.h>
#include <util/stream/output.h>


// Generated from /place/sandbox-data/tasks/8/1/2625932518/__FUSE/mount_path_2c1dce34-9bbf-4bc5-b2ae-da9b834667ac/trunk/arcadia/devtools/ymake/lang/TConf.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"


namespace NConfReader {


class  TConfParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, T__24 = 25, T__25 = 26, 
    T__26 = 27, T__27 = 28, T__28 = 29, T__29 = 30, T__30 = 31, T__31 = 32, 
    T__32 = 33, T__33 = 34, T__34 = 35, T__35 = 36, T__36 = 37, T__37 = 38, 
    T__38 = 39, T__39 = 40, T__40 = 41, T__41 = 42, ID = 43, RVAL_SYMBOL = 44, 
    DOC_COMMENT = 45, COMMENT = 46, SP = 47, EOL = 48, RC = 49
  };

  enum {
    RuleEntries = 0, RuleEntry = 1, RuleStmt = 2, RuleImportStmt = 3, RulePropStmt = 4, 
    RulePropName = 5, RulePropValue = 6, RuleComment = 7, RuleDocComment = 8, 
    RuleSimpleStmt = 9, RuleSimpleBlockStmt = 10, RuleSimpleBlock = 11, 
    RuleAssignStmt = 12, RuleAssignOp = 13, RuleRvalue = 14, RuleCallStmt = 15, 
    RuleActualArgs = 16, RuleBlockStmt = 17, RuleBlock = 18, RuleWhenStmt = 19, 
    RuleWhenClause = 20, RuleElseWhenClause = 21, RuleOtherwiseClause = 22, 
    RuleSelectStmt = 23, RuleAlternativeClause = 24, RuleDefaultClause = 25, 
    RuleForeachStmt = 26, RuleExtStmt = 27, RuleExt = 28, RuleExtName = 29, 
    RuleMacroDefSignature = 30, RuleMacroDef = 31, RuleMacroName = 32, RuleFormalArgs = 33, 
    RuleVararg = 34, RuleFormalArg = 35, RuleDeepReplace = 36, RuleModifiers = 37, 
    RuleModifier = 38, RuleArraySpec = 39, RuleBoolSpec = 40, RuleBoolInit = 41, 
    RuleDefaultInit = 42, RuleSpecArg = 43, RuleArgName = 44, RuleMultiModuleDefSignature = 45, 
    RuleMultiModuleDef = 46, RuleModuleDefStmt = 47, RuleModuleDefSignature = 48, 
    RuleModuleDef = 49, RuleModuleName = 50, RuleAncestor = 51, RuleLogicExpr = 52, 
    RuleLogicOr = 53, RuleLogicAnd = 54, RuleLogicRel = 55, RuleLogicNot = 56, 
    RuleLogicTerm = 57, RuleLogicIn = 58, RuleStringArray = 59, RuleLogicVarRef = 60, 
    RuleRelationOp = 61, RuleNegationOp = 62, RuleInOp = 63, RuleVarRef = 64, 
    RuleVarName = 65, RuleIdent = 66, RuleString = 67, RuleStringContent = 68
  };

  explicit TConfParser(antlr4::TokenStream *input);

  TConfParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~TConfParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


      enum class EScopeKind {
          None = 0,
          Macro,
          Module,
          MultiModule,
          Foreach
      };

      inline bool IsNone(EScopeKind kind) {
          return kind == EScopeKind::None;
      }
      inline bool IsMacro(EScopeKind kind) {
          return kind == EScopeKind::Macro;
      }
      inline bool IsModule(EScopeKind kind) {
          return kind == EScopeKind::Module;
      }
      inline bool IsMultiModule(EScopeKind kind) {
          return kind == EScopeKind::MultiModule;
      }
      inline bool IsForeach(EScopeKind kind) {
          return kind == EScopeKind::Foreach;
      }

      enum class EForeachBlockKind {
          None = 0,
          Sections,
          Call
      };

      inline bool IsForeachNone(EForeachBlockKind kind) {
          return kind == EForeachBlockKind::None;
      }
      inline bool IsForeachSections(EForeachBlockKind kind) {
          return kind == EForeachBlockKind::Sections;
      }
      inline bool IsForeachCall(EForeachBlockKind kind) {
          return kind == EForeachBlockKind::Call;
      }

      EScopeKind ScopeKind = EScopeKind::None;
      EForeachBlockKind ForeachBlockKind = EForeachBlockKind::None;
      int BlockLevel = 0;
      bool InMultiModule = false;


  class EntriesContext;
  class EntryContext;
  class StmtContext;
  class ImportStmtContext;
  class PropStmtContext;
  class PropNameContext;
  class PropValueContext;
  class CommentContext;
  class DocCommentContext;
  class SimpleStmtContext;
  class SimpleBlockStmtContext;
  class SimpleBlockContext;
  class AssignStmtContext;
  class AssignOpContext;
  class RvalueContext;
  class CallStmtContext;
  class ActualArgsContext;
  class BlockStmtContext;
  class BlockContext;
  class WhenStmtContext;
  class WhenClauseContext;
  class ElseWhenClauseContext;
  class OtherwiseClauseContext;
  class SelectStmtContext;
  class AlternativeClauseContext;
  class DefaultClauseContext;
  class ForeachStmtContext;
  class ExtStmtContext;
  class ExtContext;
  class ExtNameContext;
  class MacroDefSignatureContext;
  class MacroDefContext;
  class MacroNameContext;
  class FormalArgsContext;
  class VarargContext;
  class FormalArgContext;
  class DeepReplaceContext;
  class ModifiersContext;
  class ModifierContext;
  class ArraySpecContext;
  class BoolSpecContext;
  class BoolInitContext;
  class DefaultInitContext;
  class SpecArgContext;
  class ArgNameContext;
  class MultiModuleDefSignatureContext;
  class MultiModuleDefContext;
  class ModuleDefStmtContext;
  class ModuleDefSignatureContext;
  class ModuleDefContext;
  class ModuleNameContext;
  class AncestorContext;
  class LogicExprContext;
  class LogicOrContext;
  class LogicAndContext;
  class LogicRelContext;
  class LogicNotContext;
  class LogicTermContext;
  class LogicInContext;
  class StringArrayContext;
  class LogicVarRefContext;
  class RelationOpContext;
  class NegationOpContext;
  class InOpContext;
  class VarRefContext;
  class VarNameContext;
  class IdentContext;
  class StringContext;
  class StringContentContext; 

  class  EntriesContext : public antlr4::ParserRuleContext {
  public:
    EntriesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<EntryContext *> entry();
    EntryContext* entry(size_t i);
    antlr4::tree::TerminalNode *EOF();
    std::vector<antlr4::tree::TerminalNode *> SP();
    antlr4::tree::TerminalNode* SP(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EOL();
    antlr4::tree::TerminalNode* EOL(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EntriesContext* entries();

  class  EntryContext : public antlr4::ParserRuleContext {
  public:
    EntryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ImportStmtContext *importStmt();
    StmtContext *stmt();
    MacroDefContext *macroDef();
    ModuleDefContext *moduleDef();
    MultiModuleDefContext *multiModuleDef();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EntryContext* entry();

  class  StmtContext : public antlr4::ParserRuleContext {
  public:
    StmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PropStmtContext *propStmt();
    ModuleDefStmtContext *moduleDefStmt();
    CallStmtContext *callStmt();
    ForeachStmtContext *foreachStmt();
    ExtStmtContext *extStmt();
    CommentContext *comment();
    DocCommentContext *docComment();
    SimpleStmtContext *simpleStmt();
    WhenStmtContext *whenStmt();
    SelectStmtContext *selectStmt();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtContext* stmt();

  class  ImportStmtContext : public antlr4::ParserRuleContext {
  public:
    ImportStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SP();
    StringContext *string();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ImportStmtContext* importStmt();

  class  PropStmtContext : public antlr4::ParserRuleContext {
  public:
    PropStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PropNameContext *propName();
    AssignOpContext *assignOp();
    PropValueContext *propValue();
    antlr4::tree::TerminalNode *SP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PropStmtContext* propStmt();

  class  PropNameContext : public antlr4::ParserRuleContext {
  public:
    PropNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PropNameContext* propName();

  class  PropValueContext : public antlr4::ParserRuleContext {
  public:
    PropValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> EOL();
    antlr4::tree::TerminalNode* EOL(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PropValueContext* propValue();

  class  CommentContext : public antlr4::ParserRuleContext {
  public:
    CommentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMMENT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CommentContext* comment();

  class  DocCommentContext : public antlr4::ParserRuleContext {
  public:
    DocCommentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOC_COMMENT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DocCommentContext* docComment();

  class  SimpleStmtContext : public antlr4::ParserRuleContext {
  public:
    SimpleStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssignStmtContext *assignStmt();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimpleStmtContext* simpleStmt();

  class  SimpleBlockStmtContext : public antlr4::ParserRuleContext {
  public:
    SimpleBlockStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleBlockContext *simpleBlock();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimpleBlockStmtContext* simpleBlockStmt();

  class  SimpleBlockContext : public antlr4::ParserRuleContext {
  public:
    SimpleBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> EOL();
    antlr4::tree::TerminalNode* EOL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SP();
    antlr4::tree::TerminalNode* SP(size_t i);
    std::vector<CommentContext *> comment();
    CommentContext* comment(size_t i);
    std::vector<SimpleStmtContext *> simpleStmt();
    SimpleStmtContext* simpleStmt(size_t i);
    std::vector<WhenStmtContext *> whenStmt();
    WhenStmtContext* whenStmt(size_t i);
    std::vector<SelectStmtContext *> selectStmt();
    SelectStmtContext* selectStmt(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimpleBlockContext* simpleBlock();

  class  AssignStmtContext : public antlr4::ParserRuleContext {
  public:
    AssignStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();
    AssignOpContext *assignOp();
    RvalueContext *rvalue();
    antlr4::tree::TerminalNode *SP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignStmtContext* assignStmt();

  class  AssignOpContext : public antlr4::ParserRuleContext {
  public:
    AssignOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignOpContext* assignOp();

  class  RvalueContext : public antlr4::ParserRuleContext {
  public:
    RvalueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> RVAL_SYMBOL();
    antlr4::tree::TerminalNode* RVAL_SYMBOL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EOL();
    antlr4::tree::TerminalNode* EOL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RC();
    antlr4::tree::TerminalNode* RC(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RvalueContext* rvalue();

  class  CallStmtContext : public antlr4::ParserRuleContext {
  public:
    CallStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MacroNameContext *macroName();
    ActualArgsContext *actualArgs();
    std::vector<antlr4::tree::TerminalNode *> SP();
    antlr4::tree::TerminalNode* SP(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CallStmtContext* callStmt();

  class  ActualArgsContext : public antlr4::ParserRuleContext {
  public:
    ActualArgsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> EOL();
    antlr4::tree::TerminalNode* EOL(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ActualArgsContext* actualArgs();

  class  BlockStmtContext : public antlr4::ParserRuleContext {
  public:
    BlockStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockContext *block();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockStmtContext* blockStmt();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> EOL();
    antlr4::tree::TerminalNode* EOL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SP();
    antlr4::tree::TerminalNode* SP(size_t i);
    std::vector<StmtContext *> stmt();
    StmtContext* stmt(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockContext* block();

  class  WhenStmtContext : public antlr4::ParserRuleContext {
  public:
    WhenStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    WhenClauseContext *whenClause();
    std::vector<ElseWhenClauseContext *> elseWhenClause();
    ElseWhenClauseContext* elseWhenClause(size_t i);
    OtherwiseClauseContext *otherwiseClause();
    std::vector<antlr4::tree::TerminalNode *> EOL();
    antlr4::tree::TerminalNode* EOL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SP();
    antlr4::tree::TerminalNode* SP(size_t i);
    std::vector<CommentContext *> comment();
    CommentContext* comment(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhenStmtContext* whenStmt();

  class  WhenClauseContext : public antlr4::ParserRuleContext {
  public:
    WhenClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LogicExprContext *logicExpr();
    SimpleBlockStmtContext *simpleBlockStmt();
    std::vector<antlr4::tree::TerminalNode *> SP();
    antlr4::tree::TerminalNode* SP(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhenClauseContext* whenClause();

  class  ElseWhenClauseContext : public antlr4::ParserRuleContext {
  public:
    ElseWhenClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LogicExprContext *logicExpr();
    SimpleBlockStmtContext *simpleBlockStmt();
    std::vector<antlr4::tree::TerminalNode *> SP();
    antlr4::tree::TerminalNode* SP(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ElseWhenClauseContext* elseWhenClause();

  class  OtherwiseClauseContext : public antlr4::ParserRuleContext {
  public:
    OtherwiseClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleBlockStmtContext *simpleBlockStmt();
    antlr4::tree::TerminalNode *SP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OtherwiseClauseContext* otherwiseClause();

  class  SelectStmtContext : public antlr4::ParserRuleContext {
  public:
    SelectStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VarRefContext *varRef();
    std::vector<antlr4::tree::TerminalNode *> EOL();
    antlr4::tree::TerminalNode* EOL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SP();
    antlr4::tree::TerminalNode* SP(size_t i);
    std::vector<AlternativeClauseContext *> alternativeClause();
    AlternativeClauseContext* alternativeClause(size_t i);
    DefaultClauseContext *defaultClause();
    std::vector<CommentContext *> comment();
    CommentContext* comment(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SelectStmtContext* selectStmt();

  class  AlternativeClauseContext : public antlr4::ParserRuleContext {
  public:
    const TString* selectVar;
    AlternativeClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StringContext *> string();
    StringContext* string(size_t i);
    SimpleBlockStmtContext *simpleBlockStmt();
    std::vector<antlr4::tree::TerminalNode *> SP();
    antlr4::tree::TerminalNode* SP(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlternativeClauseContext* alternativeClause();

  class  DefaultClauseContext : public antlr4::ParserRuleContext {
  public:
    const TString* defaultCondition;
    DefaultClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleBlockStmtContext *simpleBlockStmt();
    std::vector<antlr4::tree::TerminalNode *> SP();
    antlr4::tree::TerminalNode* SP(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefaultClauseContext* defaultClause();

  class  ForeachStmtContext : public antlr4::ParserRuleContext {
  public:
    ForeachStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();
    VarRefContext *varRef();
    BlockStmtContext *blockStmt();
    std::vector<antlr4::tree::TerminalNode *> SP();
    antlr4::tree::TerminalNode* SP(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForeachStmtContext* foreachStmt();

  class  ExtStmtContext : public antlr4::ParserRuleContext {
  public:
    ExtStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExtContext *> ext();
    ExtContext* ext(size_t i);
    RvalueContext *rvalue();
    std::vector<antlr4::tree::TerminalNode *> SP();
    antlr4::tree::TerminalNode* SP(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExtStmtContext* extStmt();

  class  ExtContext : public antlr4::ParserRuleContext {
  public:
    ExtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExtNameContext *extName();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExtContext* ext();

  class  ExtNameContext : public antlr4::ParserRuleContext {
  public:
    ExtNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExtNameContext* extName();

  class  MacroDefSignatureContext : public antlr4::ParserRuleContext {
  public:
    MacroDefSignatureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MacroNameContext *macroName();
    std::vector<antlr4::tree::TerminalNode *> SP();
    antlr4::tree::TerminalNode* SP(size_t i);
    FormalArgsContext *formalArgs();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MacroDefSignatureContext* macroDefSignature();

  class  MacroDefContext : public antlr4::ParserRuleContext {
  public:
    MacroDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MacroDefSignatureContext *macroDefSignature();
    BlockContext *block();
    antlr4::tree::TerminalNode *SP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MacroDefContext* macroDef();

  class  MacroNameContext : public antlr4::ParserRuleContext {
  public:
    MacroNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MacroNameContext* macroName();

  class  FormalArgsContext : public antlr4::ParserRuleContext {
  public:
    FormalArgsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VarargContext *vararg();
    std::vector<FormalArgContext *> formalArg();
    FormalArgContext* formalArg(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SP();
    antlr4::tree::TerminalNode* SP(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FormalArgsContext* formalArgs();

  class  VarargContext : public antlr4::ParserRuleContext {
  public:
    VarargContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ArgNameContext *argName();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VarargContext* vararg();

  class  FormalArgContext : public antlr4::ParserRuleContext {
  public:
    FormalArgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SpecArgContext *specArg();
    ArgNameContext *argName();
    DeepReplaceContext *deepReplace();
    ArraySpecContext *arraySpec();
    BoolSpecContext *boolSpec();
    DefaultInitContext *defaultInit();
    BoolInitContext *boolInit();
    antlr4::tree::TerminalNode *SP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FormalArgContext* formalArg();

  class  DeepReplaceContext : public antlr4::ParserRuleContext {
  public:
    DeepReplaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ModifiersContext *modifiers();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeepReplaceContext* deepReplace();

  class  ModifiersContext : public antlr4::ParserRuleContext {
  public:
    ModifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ModifierContext *> modifier();
    ModifierContext* modifier(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ModifiersContext* modifiers();

  class  ModifierContext : public antlr4::ParserRuleContext {
  public:
    ModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ModifierContext* modifier();

  class  ArraySpecContext : public antlr4::ParserRuleContext {
  public:
    ArraySpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArraySpecContext* arraySpec();

  class  BoolSpecContext : public antlr4::ParserRuleContext {
  public:
    BoolSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BoolSpecContext* boolSpec();

  class  BoolInitContext : public antlr4::ParserRuleContext {
  public:
    TConfParser::StringContext *initTrue = nullptr;
    TConfParser::StringContext *initFalse = nullptr;
    BoolInitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StringContext *> string();
    StringContext* string(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SP();
    antlr4::tree::TerminalNode* SP(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BoolInitContext* boolInit();

  class  DefaultInitContext : public antlr4::ParserRuleContext {
  public:
    DefaultInitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StringContext *string();
    antlr4::tree::TerminalNode *SP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefaultInitContext* defaultInit();

  class  SpecArgContext : public antlr4::ParserRuleContext {
  public:
    SpecArgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StringContext *string();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SpecArgContext* specArg();

  class  ArgNameContext : public antlr4::ParserRuleContext {
  public:
    ArgNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgNameContext* argName();

  class  MultiModuleDefSignatureContext : public antlr4::ParserRuleContext {
  public:
    MultiModuleDefSignatureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ModuleNameContext *moduleName();
    antlr4::tree::TerminalNode *SP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MultiModuleDefSignatureContext* multiModuleDefSignature();

  class  MultiModuleDefContext : public antlr4::ParserRuleContext {
  public:
    MultiModuleDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MultiModuleDefSignatureContext *multiModuleDefSignature();
    BlockContext *block();
    antlr4::tree::TerminalNode *SP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MultiModuleDefContext* multiModuleDef();

  class  ModuleDefStmtContext : public antlr4::ParserRuleContext {
  public:
    ModuleDefStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ModuleDefContext *moduleDef();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ModuleDefStmtContext* moduleDefStmt();

  class  ModuleDefSignatureContext : public antlr4::ParserRuleContext {
  public:
    ModuleDefSignatureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ModuleNameContext *moduleName();
    std::vector<antlr4::tree::TerminalNode *> SP();
    antlr4::tree::TerminalNode* SP(size_t i);
    AncestorContext *ancestor();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ModuleDefSignatureContext* moduleDefSignature();

  class  ModuleDefContext : public antlr4::ParserRuleContext {
  public:
    ModuleDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ModuleDefSignatureContext *moduleDefSignature();
    BlockContext *block();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ModuleDefContext* moduleDef();

  class  ModuleNameContext : public antlr4::ParserRuleContext {
  public:
    ModuleNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ModuleNameContext* moduleName();

  class  AncestorContext : public antlr4::ParserRuleContext {
  public:
    AncestorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ModuleNameContext *moduleName();
    antlr4::tree::TerminalNode *SP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AncestorContext* ancestor();

  class  LogicExprContext : public antlr4::ParserRuleContext {
  public:
    LogicExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LogicOrContext *logicOr();
    LogicInContext *logicIn();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogicExprContext* logicExpr();

  class  LogicOrContext : public antlr4::ParserRuleContext {
  public:
    LogicOrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<LogicAndContext *> logicAnd();
    LogicAndContext* logicAnd(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SP();
    antlr4::tree::TerminalNode* SP(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogicOrContext* logicOr();

  class  LogicAndContext : public antlr4::ParserRuleContext {
  public:
    LogicAndContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<LogicRelContext *> logicRel();
    LogicRelContext* logicRel(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SP();
    antlr4::tree::TerminalNode* SP(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogicAndContext* logicAnd();

  class  LogicRelContext : public antlr4::ParserRuleContext {
  public:
    LogicRelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<LogicNotContext *> logicNot();
    LogicNotContext* logicNot(size_t i);
    RelationOpContext *relationOp();
    std::vector<antlr4::tree::TerminalNode *> SP();
    antlr4::tree::TerminalNode* SP(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogicRelContext* logicRel();

  class  LogicNotContext : public antlr4::ParserRuleContext {
  public:
    LogicNotContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LogicTermContext *logicTerm();
    NegationOpContext *negationOp();
    antlr4::tree::TerminalNode *SP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogicNotContext* logicNot();

  class  LogicTermContext : public antlr4::ParserRuleContext {
  public:
    LogicTermContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LogicVarRefContext *logicVarRef();
    StringContext *string();
    LogicExprContext *logicExpr();
    std::vector<antlr4::tree::TerminalNode *> SP();
    antlr4::tree::TerminalNode* SP(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogicTermContext* logicTerm();

  class  LogicInContext : public antlr4::ParserRuleContext {
  public:
    LogicInContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> SP();
    antlr4::tree::TerminalNode* SP(size_t i);
    InOpContext *inOp();
    LogicVarRefContext *logicVarRef();
    StringContext *string();
    StringArrayContext *stringArray();
    VarRefContext *varRef();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogicInContext* logicIn();

  class  StringArrayContext : public antlr4::ParserRuleContext {
  public:
    StringArrayContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> SP();
    antlr4::tree::TerminalNode* SP(size_t i);
    std::vector<StringContext *> string();
    StringContext* string(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StringArrayContext* stringArray();

  class  LogicVarRefContext : public antlr4::ParserRuleContext {
  public:
    LogicVarRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VarRefContext *varRef();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogicVarRefContext* logicVarRef();

  class  RelationOpContext : public antlr4::ParserRuleContext {
  public:
    RelationOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RelationOpContext* relationOp();

  class  NegationOpContext : public antlr4::ParserRuleContext {
  public:
    NegationOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NegationOpContext* negationOp();

  class  InOpContext : public antlr4::ParserRuleContext {
  public:
    InOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InOpContext* inOp();

  class  VarRefContext : public antlr4::ParserRuleContext {
  public:
    VarRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VarNameContext *varName();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VarRefContext* varRef();

  class  VarNameContext : public antlr4::ParserRuleContext {
  public:
    VarNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VarNameContext* varName();

  class  IdentContext : public antlr4::ParserRuleContext {
  public:
    IdentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentContext* ident();

  class  StringContext : public antlr4::ParserRuleContext {
  public:
    StringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StringContentContext *stringContent();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StringContext* string();

  class  StringContentContext : public antlr4::ParserRuleContext {
  public:
    StringContentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> EOL();
    antlr4::tree::TerminalNode* EOL(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StringContentContext* stringContent();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool stmtSempred(StmtContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

}  // namespace NConfReader
