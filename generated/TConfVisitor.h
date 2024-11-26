
#include "TConfLexer.h"
#include <util/generic/string.h>
#include <util/stream/output.h>


// Generated from /place/sandbox-data/tasks/8/1/2625932518/__FUSE/mount_path_2c1dce34-9bbf-4bc5-b2ae-da9b834667ac/trunk/arcadia/devtools/ymake/lang/TConf.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "TConfParser.h"


namespace NConfReader {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by TConfParser.
 */
class  TConfVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by TConfParser.
   */
    virtual std::any visitEntries(TConfParser::EntriesContext *context) = 0;

    virtual std::any visitEntry(TConfParser::EntryContext *context) = 0;

    virtual std::any visitStmt(TConfParser::StmtContext *context) = 0;

    virtual std::any visitImportStmt(TConfParser::ImportStmtContext *context) = 0;

    virtual std::any visitPropStmt(TConfParser::PropStmtContext *context) = 0;

    virtual std::any visitPropName(TConfParser::PropNameContext *context) = 0;

    virtual std::any visitPropValue(TConfParser::PropValueContext *context) = 0;

    virtual std::any visitComment(TConfParser::CommentContext *context) = 0;

    virtual std::any visitDocComment(TConfParser::DocCommentContext *context) = 0;

    virtual std::any visitSimpleStmt(TConfParser::SimpleStmtContext *context) = 0;

    virtual std::any visitSimpleBlockStmt(TConfParser::SimpleBlockStmtContext *context) = 0;

    virtual std::any visitSimpleBlock(TConfParser::SimpleBlockContext *context) = 0;

    virtual std::any visitAssignStmt(TConfParser::AssignStmtContext *context) = 0;

    virtual std::any visitAssignOp(TConfParser::AssignOpContext *context) = 0;

    virtual std::any visitRvalue(TConfParser::RvalueContext *context) = 0;

    virtual std::any visitCallStmt(TConfParser::CallStmtContext *context) = 0;

    virtual std::any visitActualArgs(TConfParser::ActualArgsContext *context) = 0;

    virtual std::any visitBlockStmt(TConfParser::BlockStmtContext *context) = 0;

    virtual std::any visitBlock(TConfParser::BlockContext *context) = 0;

    virtual std::any visitWhenStmt(TConfParser::WhenStmtContext *context) = 0;

    virtual std::any visitWhenClause(TConfParser::WhenClauseContext *context) = 0;

    virtual std::any visitElseWhenClause(TConfParser::ElseWhenClauseContext *context) = 0;

    virtual std::any visitOtherwiseClause(TConfParser::OtherwiseClauseContext *context) = 0;

    virtual std::any visitSelectStmt(TConfParser::SelectStmtContext *context) = 0;

    virtual std::any visitAlternativeClause(TConfParser::AlternativeClauseContext *context) = 0;

    virtual std::any visitDefaultClause(TConfParser::DefaultClauseContext *context) = 0;

    virtual std::any visitForeachStmt(TConfParser::ForeachStmtContext *context) = 0;

    virtual std::any visitExtStmt(TConfParser::ExtStmtContext *context) = 0;

    virtual std::any visitExt(TConfParser::ExtContext *context) = 0;

    virtual std::any visitExtName(TConfParser::ExtNameContext *context) = 0;

    virtual std::any visitMacroDefSignature(TConfParser::MacroDefSignatureContext *context) = 0;

    virtual std::any visitMacroDef(TConfParser::MacroDefContext *context) = 0;

    virtual std::any visitMacroName(TConfParser::MacroNameContext *context) = 0;

    virtual std::any visitFormalArgs(TConfParser::FormalArgsContext *context) = 0;

    virtual std::any visitVararg(TConfParser::VarargContext *context) = 0;

    virtual std::any visitFormalArg(TConfParser::FormalArgContext *context) = 0;

    virtual std::any visitDeepReplace(TConfParser::DeepReplaceContext *context) = 0;

    virtual std::any visitModifiers(TConfParser::ModifiersContext *context) = 0;

    virtual std::any visitModifier(TConfParser::ModifierContext *context) = 0;

    virtual std::any visitArraySpec(TConfParser::ArraySpecContext *context) = 0;

    virtual std::any visitBoolSpec(TConfParser::BoolSpecContext *context) = 0;

    virtual std::any visitBoolInit(TConfParser::BoolInitContext *context) = 0;

    virtual std::any visitDefaultInit(TConfParser::DefaultInitContext *context) = 0;

    virtual std::any visitSpecArg(TConfParser::SpecArgContext *context) = 0;

    virtual std::any visitArgName(TConfParser::ArgNameContext *context) = 0;

    virtual std::any visitMultiModuleDefSignature(TConfParser::MultiModuleDefSignatureContext *context) = 0;

    virtual std::any visitMultiModuleDef(TConfParser::MultiModuleDefContext *context) = 0;

    virtual std::any visitModuleDefStmt(TConfParser::ModuleDefStmtContext *context) = 0;

    virtual std::any visitModuleDefSignature(TConfParser::ModuleDefSignatureContext *context) = 0;

    virtual std::any visitModuleDef(TConfParser::ModuleDefContext *context) = 0;

    virtual std::any visitModuleName(TConfParser::ModuleNameContext *context) = 0;

    virtual std::any visitAncestor(TConfParser::AncestorContext *context) = 0;

    virtual std::any visitLogicExpr(TConfParser::LogicExprContext *context) = 0;

    virtual std::any visitLogicOr(TConfParser::LogicOrContext *context) = 0;

    virtual std::any visitLogicAnd(TConfParser::LogicAndContext *context) = 0;

    virtual std::any visitLogicRel(TConfParser::LogicRelContext *context) = 0;

    virtual std::any visitLogicNot(TConfParser::LogicNotContext *context) = 0;

    virtual std::any visitLogicTerm(TConfParser::LogicTermContext *context) = 0;

    virtual std::any visitLogicIn(TConfParser::LogicInContext *context) = 0;

    virtual std::any visitStringArray(TConfParser::StringArrayContext *context) = 0;

    virtual std::any visitLogicVarRef(TConfParser::LogicVarRefContext *context) = 0;

    virtual std::any visitRelationOp(TConfParser::RelationOpContext *context) = 0;

    virtual std::any visitNegationOp(TConfParser::NegationOpContext *context) = 0;

    virtual std::any visitInOp(TConfParser::InOpContext *context) = 0;

    virtual std::any visitVarRef(TConfParser::VarRefContext *context) = 0;

    virtual std::any visitVarName(TConfParser::VarNameContext *context) = 0;

    virtual std::any visitIdent(TConfParser::IdentContext *context) = 0;

    virtual std::any visitString(TConfParser::StringContext *context) = 0;

    virtual std::any visitStringContent(TConfParser::StringContentContext *context) = 0;


};

}  // namespace NConfReader
