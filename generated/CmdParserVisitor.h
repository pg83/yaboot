
// Generated from /place/sandbox-data/tasks/8/1/2625932518/__FUSE/mount_path_2c1dce34-9bbf-4bc5-b2ae-da9b834667ac/trunk/arcadia/devtools/ymake/lang/CmdParser.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "CmdParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by CmdParser.
 */
class  CmdParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by CmdParser.
   */
    virtual std::any visitMain(CmdParser::MainContext *context) = 0;

    virtual std::any visitScr(CmdParser::ScrContext *context) = 0;

    virtual std::any visitCmd(CmdParser::CmdContext *context) = 0;

    virtual std::any visitArg(CmdParser::ArgContext *context) = 0;

    virtual std::any visitCallArg(CmdParser::CallArgContext *context) = 0;

    virtual std::any visitArgSep(CmdParser::ArgSepContext *context) = 0;

    virtual std::any visitCmdSep(CmdParser::CmdSepContext *context) = 0;

    virtual std::any visitTermsRO(CmdParser::TermsROContext *context) = 0;

    virtual std::any visitTermsRA(CmdParser::TermsRAContext *context) = 0;

    virtual std::any visitTermsSQ(CmdParser::TermsSQContext *context) = 0;

    virtual std::any visitTermsDQ(CmdParser::TermsDQContext *context) = 0;

    virtual std::any visitTermO(CmdParser::TermOContext *context) = 0;

    virtual std::any visitTermA(CmdParser::TermAContext *context) = 0;

    virtual std::any visitTermC(CmdParser::TermCContext *context) = 0;

    virtual std::any visitTermV(CmdParser::TermVContext *context) = 0;

    virtual std::any visitTermX(CmdParser::TermXContext *context) = 0;

    virtual std::any visitTermSQR(CmdParser::TermSQRContext *context) = 0;

    virtual std::any visitTermSQV(CmdParser::TermSQVContext *context) = 0;

    virtual std::any visitTermSQX(CmdParser::TermSQXContext *context) = 0;

    virtual std::any visitTermDQR(CmdParser::TermDQRContext *context) = 0;

    virtual std::any visitTermDQV(CmdParser::TermDQVContext *context) = 0;

    virtual std::any visitTermDQX(CmdParser::TermDQXContext *context) = 0;

    virtual std::any visitXModifier(CmdParser::XModifierContext *context) = 0;

    virtual std::any visitXModKey(CmdParser::XModKeyContext *context) = 0;

    virtual std::any visitXModValue(CmdParser::XModValueContext *context) = 0;

    virtual std::any visitXModValueT(CmdParser::XModValueTContext *context) = 0;

    virtual std::any visitXModValueV(CmdParser::XModValueVContext *context) = 0;

    virtual std::any visitXModValueE(CmdParser::XModValueEContext *context) = 0;

    virtual std::any visitXBody(CmdParser::XBodyContext *context) = 0;

    virtual std::any visitXBodyIdentifier(CmdParser::XBodyIdentifierContext *context) = 0;

    virtual std::any visitXBodyString(CmdParser::XBodyStringContext *context) = 0;


};

