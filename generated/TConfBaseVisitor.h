
#include "TConfLexer.h"
#include <util/generic/string.h>
#include <util/stream/output.h>


// Generated from /place/sandbox-data/tasks/8/1/2625932518/__FUSE/mount_path_2c1dce34-9bbf-4bc5-b2ae-da9b834667ac/trunk/arcadia/devtools/ymake/lang/TConf.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "TConfVisitor.h"


namespace NConfReader {

/**
 * This class provides an empty implementation of TConfVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  TConfBaseVisitor : public TConfVisitor {
public:

  virtual std::any visitEntries(TConfParser::EntriesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEntry(TConfParser::EntryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStmt(TConfParser::StmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitImportStmt(TConfParser::ImportStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPropStmt(TConfParser::PropStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPropName(TConfParser::PropNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPropValue(TConfParser::PropValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComment(TConfParser::CommentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDocComment(TConfParser::DocCommentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimpleStmt(TConfParser::SimpleStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimpleBlockStmt(TConfParser::SimpleBlockStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimpleBlock(TConfParser::SimpleBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignStmt(TConfParser::AssignStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignOp(TConfParser::AssignOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRvalue(TConfParser::RvalueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCallStmt(TConfParser::CallStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitActualArgs(TConfParser::ActualArgsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlockStmt(TConfParser::BlockStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlock(TConfParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhenStmt(TConfParser::WhenStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhenClause(TConfParser::WhenClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElseWhenClause(TConfParser::ElseWhenClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOtherwiseClause(TConfParser::OtherwiseClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSelectStmt(TConfParser::SelectStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlternativeClause(TConfParser::AlternativeClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefaultClause(TConfParser::DefaultClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitForeachStmt(TConfParser::ForeachStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExtStmt(TConfParser::ExtStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExt(TConfParser::ExtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExtName(TConfParser::ExtNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMacroDefSignature(TConfParser::MacroDefSignatureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMacroDef(TConfParser::MacroDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMacroName(TConfParser::MacroNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFormalArgs(TConfParser::FormalArgsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVararg(TConfParser::VarargContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFormalArg(TConfParser::FormalArgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeepReplace(TConfParser::DeepReplaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitModifiers(TConfParser::ModifiersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitModifier(TConfParser::ModifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArraySpec(TConfParser::ArraySpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBoolSpec(TConfParser::BoolSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBoolInit(TConfParser::BoolInitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefaultInit(TConfParser::DefaultInitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSpecArg(TConfParser::SpecArgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArgName(TConfParser::ArgNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultiModuleDefSignature(TConfParser::MultiModuleDefSignatureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultiModuleDef(TConfParser::MultiModuleDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitModuleDefStmt(TConfParser::ModuleDefStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitModuleDefSignature(TConfParser::ModuleDefSignatureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitModuleDef(TConfParser::ModuleDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitModuleName(TConfParser::ModuleNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAncestor(TConfParser::AncestorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicExpr(TConfParser::LogicExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicOr(TConfParser::LogicOrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicAnd(TConfParser::LogicAndContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicRel(TConfParser::LogicRelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicNot(TConfParser::LogicNotContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicTerm(TConfParser::LogicTermContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicIn(TConfParser::LogicInContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStringArray(TConfParser::StringArrayContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicVarRef(TConfParser::LogicVarRefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRelationOp(TConfParser::RelationOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNegationOp(TConfParser::NegationOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInOp(TConfParser::InOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVarRef(TConfParser::VarRefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVarName(TConfParser::VarNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdent(TConfParser::IdentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitString(TConfParser::StringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStringContent(TConfParser::StringContentContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace NConfReader
