
// Generated from src/Grammar/Simplex.g4 by ANTLR 4.13.2


#include "SimplexVisitor.h"

#include "SimplexParser.h"


using namespace antlrcpp;
using namespace sx::grammar;

using namespace antlr4;

namespace {

struct SimplexParserStaticData final {
  SimplexParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  SimplexParserStaticData(const SimplexParserStaticData&) = delete;
  SimplexParserStaticData(SimplexParserStaticData&&) = delete;
  SimplexParserStaticData& operator=(const SimplexParserStaticData&) = delete;
  SimplexParserStaticData& operator=(SimplexParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag simplexParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<SimplexParserStaticData> simplexParserStaticData = nullptr;

void simplexParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (simplexParserStaticData != nullptr) {
    return;
  }
#else
  assert(simplexParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<SimplexParserStaticData>(
    std::vector<std::string>{
      "module", "statements", "statement", "decl", "expr", "expr_void", 
      "expr_tuple", "expr_struct", "expr_array", "expr_map", "expr_func", 
      "type_expr", "type_void", "type_tuple", "type_struct", "type_array", 
      "type_map", "type_func"
    },
    std::vector<std::string>{
      "", "'('", "')'", "'['", "']'", "'{'", "'}'", "':'", "','", "'='", 
      "'=>'", "'+'", "'-'", "'*'", "'/'", "'var'", "'const'", "'def'", "'type'"
    },
    std::vector<std::string>{
      "", "L_PAREN", "R_PAREN", "L_BRACKET", "R_BRACKET", "L_BRACE", "R_BRACE", 
      "COLON", "COMMA", "ASSIGN", "ARROW", "ADD", "SUB", "MUL", "DIV", "VAR", 
      "CONST", "DEF", "TYPE", "ID", "INTEGER", "NEWLINE", "WHITESPACE"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,22,296,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,1,0,3,0,38,8,0,1,0,3,0,41,8,0,1,0,1,
  	0,1,0,5,0,46,8,0,10,0,12,0,49,9,0,1,0,3,0,52,8,0,3,0,54,8,0,1,1,3,1,57,
  	8,1,1,1,3,1,60,8,1,1,1,1,1,1,1,5,1,65,8,1,10,1,12,1,68,9,1,1,1,3,1,71,
  	8,1,3,1,73,8,1,1,2,1,2,1,3,1,3,1,3,1,3,3,3,81,8,3,1,3,1,3,1,3,1,4,1,4,
  	1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,5,4,96,8,4,10,4,12,4,99,9,4,1,4,3,4,102,
  	8,4,3,4,104,8,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,3,
  	4,119,8,4,1,4,1,4,1,4,1,4,1,4,1,4,5,4,127,8,4,10,4,12,4,130,9,4,1,5,1,
  	5,1,5,1,6,1,6,1,6,1,6,5,6,139,8,6,10,6,12,6,142,9,6,1,6,3,6,145,8,6,1,
  	6,1,6,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,5,7,157,8,7,10,7,12,7,160,9,7,1,
  	7,3,7,163,8,7,1,7,1,7,1,8,1,8,1,8,1,8,5,8,171,8,8,10,8,12,8,174,9,8,1,
  	8,3,8,177,8,8,1,8,1,8,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,5,9,190,8,9,
  	10,9,12,9,193,9,9,1,9,3,9,196,8,9,1,9,1,9,1,10,1,10,1,10,1,10,1,10,1,
  	10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,3,10,217,8,
  	10,1,10,1,10,1,10,1,10,1,10,3,10,224,8,10,1,11,1,11,1,11,1,11,1,11,1,
  	11,1,11,3,11,233,8,11,1,12,1,12,1,12,1,13,1,13,1,13,1,13,5,13,242,8,13,
  	10,13,12,13,245,9,13,1,13,3,13,248,8,13,1,13,1,13,1,14,1,14,1,14,1,14,
  	1,14,1,14,1,14,1,14,5,14,260,8,14,10,14,12,14,263,9,14,1,14,3,14,266,
  	8,14,1,14,1,14,1,15,1,15,1,15,1,15,1,16,1,16,1,16,1,16,1,16,1,16,1,17,
  	1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,3,17,290,8,17,1,17,1,17,
  	1,17,1,17,1,17,0,1,8,18,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,
  	34,0,3,1,0,15,17,1,0,11,12,1,0,13,14,325,0,53,1,0,0,0,2,72,1,0,0,0,4,
  	74,1,0,0,0,6,76,1,0,0,0,8,118,1,0,0,0,10,131,1,0,0,0,12,134,1,0,0,0,14,
  	148,1,0,0,0,16,166,1,0,0,0,18,180,1,0,0,0,20,223,1,0,0,0,22,232,1,0,0,
  	0,24,234,1,0,0,0,26,237,1,0,0,0,28,251,1,0,0,0,30,269,1,0,0,0,32,273,
  	1,0,0,0,34,279,1,0,0,0,36,38,5,21,0,0,37,36,1,0,0,0,37,38,1,0,0,0,38,
  	54,1,0,0,0,39,41,5,21,0,0,40,39,1,0,0,0,40,41,1,0,0,0,41,42,1,0,0,0,42,
  	47,3,6,3,0,43,44,5,21,0,0,44,46,3,6,3,0,45,43,1,0,0,0,46,49,1,0,0,0,47,
  	45,1,0,0,0,47,48,1,0,0,0,48,51,1,0,0,0,49,47,1,0,0,0,50,52,5,21,0,0,51,
  	50,1,0,0,0,51,52,1,0,0,0,52,54,1,0,0,0,53,37,1,0,0,0,53,40,1,0,0,0,54,
  	1,1,0,0,0,55,57,5,21,0,0,56,55,1,0,0,0,56,57,1,0,0,0,57,73,1,0,0,0,58,
  	60,5,21,0,0,59,58,1,0,0,0,59,60,1,0,0,0,60,61,1,0,0,0,61,66,3,4,2,0,62,
  	63,5,21,0,0,63,65,3,4,2,0,64,62,1,0,0,0,65,68,1,0,0,0,66,64,1,0,0,0,66,
  	67,1,0,0,0,67,70,1,0,0,0,68,66,1,0,0,0,69,71,5,21,0,0,70,69,1,0,0,0,70,
  	71,1,0,0,0,71,73,1,0,0,0,72,56,1,0,0,0,72,59,1,0,0,0,73,3,1,0,0,0,74,
  	75,3,6,3,0,75,5,1,0,0,0,76,77,7,0,0,0,77,80,5,19,0,0,78,79,5,7,0,0,79,
  	81,3,22,11,0,80,78,1,0,0,0,80,81,1,0,0,0,81,82,1,0,0,0,82,83,5,9,0,0,
  	83,84,3,8,4,0,84,7,1,0,0,0,85,86,6,4,-1,0,86,87,5,1,0,0,87,88,3,8,4,0,
  	88,89,5,2,0,0,89,119,1,0,0,0,90,91,5,19,0,0,91,103,5,1,0,0,92,97,3,8,
  	4,0,93,94,5,8,0,0,94,96,3,8,4,0,95,93,1,0,0,0,96,99,1,0,0,0,97,95,1,0,
  	0,0,97,98,1,0,0,0,98,101,1,0,0,0,99,97,1,0,0,0,100,102,5,8,0,0,101,100,
  	1,0,0,0,101,102,1,0,0,0,102,104,1,0,0,0,103,92,1,0,0,0,103,104,1,0,0,
  	0,104,105,1,0,0,0,105,119,5,2,0,0,106,107,7,1,0,0,107,119,3,8,4,12,108,
  	119,5,19,0,0,109,119,5,20,0,0,110,111,5,18,0,0,111,119,3,22,11,0,112,
  	119,3,10,5,0,113,119,3,12,6,0,114,119,3,14,7,0,115,119,3,16,8,0,116,119,
  	3,18,9,0,117,119,3,20,10,0,118,85,1,0,0,0,118,90,1,0,0,0,118,106,1,0,
  	0,0,118,108,1,0,0,0,118,109,1,0,0,0,118,110,1,0,0,0,118,112,1,0,0,0,118,
  	113,1,0,0,0,118,114,1,0,0,0,118,115,1,0,0,0,118,116,1,0,0,0,118,117,1,
  	0,0,0,119,128,1,0,0,0,120,121,10,11,0,0,121,122,7,2,0,0,122,127,3,8,4,
  	12,123,124,10,10,0,0,124,125,7,1,0,0,125,127,3,8,4,11,126,120,1,0,0,0,
  	126,123,1,0,0,0,127,130,1,0,0,0,128,126,1,0,0,0,128,129,1,0,0,0,129,9,
  	1,0,0,0,130,128,1,0,0,0,131,132,5,1,0,0,132,133,5,2,0,0,133,11,1,0,0,
  	0,134,135,5,1,0,0,135,140,3,8,4,0,136,137,5,8,0,0,137,139,3,8,4,0,138,
  	136,1,0,0,0,139,142,1,0,0,0,140,138,1,0,0,0,140,141,1,0,0,0,141,144,1,
  	0,0,0,142,140,1,0,0,0,143,145,5,8,0,0,144,143,1,0,0,0,144,145,1,0,0,0,
  	145,146,1,0,0,0,146,147,5,2,0,0,147,13,1,0,0,0,148,149,5,1,0,0,149,150,
  	5,19,0,0,150,151,5,7,0,0,151,158,3,8,4,0,152,153,5,8,0,0,153,154,5,19,
  	0,0,154,155,5,7,0,0,155,157,3,8,4,0,156,152,1,0,0,0,157,160,1,0,0,0,158,
  	156,1,0,0,0,158,159,1,0,0,0,159,162,1,0,0,0,160,158,1,0,0,0,161,163,5,
  	8,0,0,162,161,1,0,0,0,162,163,1,0,0,0,163,164,1,0,0,0,164,165,5,2,0,0,
  	165,15,1,0,0,0,166,167,5,3,0,0,167,172,3,8,4,0,168,169,5,8,0,0,169,171,
  	3,8,4,0,170,168,1,0,0,0,171,174,1,0,0,0,172,170,1,0,0,0,172,173,1,0,0,
  	0,173,176,1,0,0,0,174,172,1,0,0,0,175,177,5,8,0,0,176,175,1,0,0,0,176,
  	177,1,0,0,0,177,178,1,0,0,0,178,179,5,4,0,0,179,17,1,0,0,0,180,181,5,
  	3,0,0,181,182,3,8,4,0,182,183,5,7,0,0,183,191,3,8,4,0,184,185,5,8,0,0,
  	185,186,3,8,4,0,186,187,5,7,0,0,187,188,3,8,4,0,188,190,1,0,0,0,189,184,
  	1,0,0,0,190,193,1,0,0,0,191,189,1,0,0,0,191,192,1,0,0,0,192,195,1,0,0,
  	0,193,191,1,0,0,0,194,196,5,8,0,0,195,194,1,0,0,0,195,196,1,0,0,0,196,
  	197,1,0,0,0,197,198,5,4,0,0,198,19,1,0,0,0,199,200,5,5,0,0,200,201,3,
  	34,17,0,201,202,5,21,0,0,202,203,3,2,1,0,203,204,5,6,0,0,204,224,1,0,
  	0,0,205,206,5,5,0,0,206,207,5,1,0,0,207,208,5,19,0,0,208,209,5,7,0,0,
  	209,210,3,22,11,0,210,211,5,8,0,0,211,212,5,19,0,0,212,213,5,7,0,0,213,
  	214,3,22,11,0,214,216,1,0,0,0,215,217,5,8,0,0,216,215,1,0,0,0,216,217,
  	1,0,0,0,217,218,1,0,0,0,218,219,5,2,0,0,219,220,5,10,0,0,220,221,3,8,
  	4,0,221,222,5,6,0,0,222,224,1,0,0,0,223,199,1,0,0,0,223,205,1,0,0,0,224,
  	21,1,0,0,0,225,233,5,19,0,0,226,233,3,24,12,0,227,233,3,26,13,0,228,233,
  	3,28,14,0,229,233,3,30,15,0,230,233,3,32,16,0,231,233,3,34,17,0,232,225,
  	1,0,0,0,232,226,1,0,0,0,232,227,1,0,0,0,232,228,1,0,0,0,232,229,1,0,0,
  	0,232,230,1,0,0,0,232,231,1,0,0,0,233,23,1,0,0,0,234,235,5,1,0,0,235,
  	236,5,2,0,0,236,25,1,0,0,0,237,238,5,1,0,0,238,243,3,22,11,0,239,240,
  	5,8,0,0,240,242,3,22,11,0,241,239,1,0,0,0,242,245,1,0,0,0,243,241,1,0,
  	0,0,243,244,1,0,0,0,244,247,1,0,0,0,245,243,1,0,0,0,246,248,5,8,0,0,247,
  	246,1,0,0,0,247,248,1,0,0,0,248,249,1,0,0,0,249,250,5,2,0,0,250,27,1,
  	0,0,0,251,252,5,1,0,0,252,253,5,19,0,0,253,254,5,7,0,0,254,261,3,22,11,
  	0,255,256,5,8,0,0,256,257,5,19,0,0,257,258,5,7,0,0,258,260,3,22,11,0,
  	259,255,1,0,0,0,260,263,1,0,0,0,261,259,1,0,0,0,261,262,1,0,0,0,262,265,
  	1,0,0,0,263,261,1,0,0,0,264,266,5,8,0,0,265,264,1,0,0,0,265,266,1,0,0,
  	0,266,267,1,0,0,0,267,268,5,2,0,0,268,29,1,0,0,0,269,270,5,3,0,0,270,
  	271,3,22,11,0,271,272,5,4,0,0,272,31,1,0,0,0,273,274,5,3,0,0,274,275,
  	3,22,11,0,275,276,5,7,0,0,276,277,3,22,11,0,277,278,5,4,0,0,278,33,1,
  	0,0,0,279,280,5,1,0,0,280,281,5,19,0,0,281,282,5,7,0,0,282,283,3,22,11,
  	0,283,284,5,8,0,0,284,285,5,19,0,0,285,286,5,7,0,0,286,287,3,22,11,0,
  	287,289,1,0,0,0,288,290,5,8,0,0,289,288,1,0,0,0,289,290,1,0,0,0,290,291,
  	1,0,0,0,291,292,5,2,0,0,292,293,5,10,0,0,293,294,3,22,11,0,294,35,1,0,
  	0,0,33,37,40,47,51,53,56,59,66,70,72,80,97,101,103,118,126,128,140,144,
  	158,162,172,176,191,195,216,223,232,243,247,261,265,289
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  simplexParserStaticData = std::move(staticData);
}

}

SimplexParser::SimplexParser(TokenStream *input) : SimplexParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

SimplexParser::SimplexParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  SimplexParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *simplexParserStaticData->atn, simplexParserStaticData->decisionToDFA, simplexParserStaticData->sharedContextCache, options);
}

SimplexParser::~SimplexParser() {
  delete _interpreter;
}

const atn::ATN& SimplexParser::getATN() const {
  return *simplexParserStaticData->atn;
}

std::string SimplexParser::getGrammarFileName() const {
  return "Simplex.g4";
}

const std::vector<std::string>& SimplexParser::getRuleNames() const {
  return simplexParserStaticData->ruleNames;
}

const dfa::Vocabulary& SimplexParser::getVocabulary() const {
  return simplexParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView SimplexParser::getSerializedATN() const {
  return simplexParserStaticData->serializedATN;
}


//----------------- ModuleContext ------------------------------------------------------------------

SimplexParser::ModuleContext::ModuleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SimplexParser::ModuleContext::NEWLINE() {
  return getTokens(SimplexParser::NEWLINE);
}

tree::TerminalNode* SimplexParser::ModuleContext::NEWLINE(size_t i) {
  return getToken(SimplexParser::NEWLINE, i);
}

std::vector<SimplexParser::DeclContext *> SimplexParser::ModuleContext::decl() {
  return getRuleContexts<SimplexParser::DeclContext>();
}

SimplexParser::DeclContext* SimplexParser::ModuleContext::decl(size_t i) {
  return getRuleContext<SimplexParser::DeclContext>(i);
}


size_t SimplexParser::ModuleContext::getRuleIndex() const {
  return SimplexParser::RuleModule;
}


std::any SimplexParser::ModuleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimplexVisitor*>(visitor))
    return parserVisitor->visitModule(this);
  else
    return visitor->visitChildren(this);
}

SimplexParser::ModuleContext* SimplexParser::module() {
  ModuleContext *_localctx = _tracker.createInstance<ModuleContext>(_ctx, getState());
  enterRule(_localctx, 0, SimplexParser::RuleModule);
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
    setState(53);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(37);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SimplexParser::NEWLINE) {
        setState(36);
        match(SimplexParser::NEWLINE);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(40);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SimplexParser::NEWLINE) {
        setState(39);
        match(SimplexParser::NEWLINE);
      }
      setState(42);
      decl();
      setState(47);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(43);
          match(SimplexParser::NEWLINE);
          setState(44);
          decl(); 
        }
        setState(49);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
      }
      setState(51);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SimplexParser::NEWLINE) {
        setState(50);
        match(SimplexParser::NEWLINE);
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

//----------------- StatementsContext ------------------------------------------------------------------

SimplexParser::StatementsContext::StatementsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SimplexParser::StatementsContext::NEWLINE() {
  return getTokens(SimplexParser::NEWLINE);
}

tree::TerminalNode* SimplexParser::StatementsContext::NEWLINE(size_t i) {
  return getToken(SimplexParser::NEWLINE, i);
}

std::vector<SimplexParser::StatementContext *> SimplexParser::StatementsContext::statement() {
  return getRuleContexts<SimplexParser::StatementContext>();
}

SimplexParser::StatementContext* SimplexParser::StatementsContext::statement(size_t i) {
  return getRuleContext<SimplexParser::StatementContext>(i);
}


size_t SimplexParser::StatementsContext::getRuleIndex() const {
  return SimplexParser::RuleStatements;
}


std::any SimplexParser::StatementsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimplexVisitor*>(visitor))
    return parserVisitor->visitStatements(this);
  else
    return visitor->visitChildren(this);
}

SimplexParser::StatementsContext* SimplexParser::statements() {
  StatementsContext *_localctx = _tracker.createInstance<StatementsContext>(_ctx, getState());
  enterRule(_localctx, 2, SimplexParser::RuleStatements);
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
    setState(72);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(56);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SimplexParser::NEWLINE) {
        setState(55);
        match(SimplexParser::NEWLINE);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(59);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SimplexParser::NEWLINE) {
        setState(58);
        match(SimplexParser::NEWLINE);
      }
      setState(61);
      statement();
      setState(66);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(62);
          match(SimplexParser::NEWLINE);
          setState(63);
          statement(); 
        }
        setState(68);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
      }
      setState(70);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SimplexParser::NEWLINE) {
        setState(69);
        match(SimplexParser::NEWLINE);
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

//----------------- StatementContext ------------------------------------------------------------------

SimplexParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SimplexParser::DeclContext* SimplexParser::StatementContext::decl() {
  return getRuleContext<SimplexParser::DeclContext>(0);
}


size_t SimplexParser::StatementContext::getRuleIndex() const {
  return SimplexParser::RuleStatement;
}


std::any SimplexParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimplexVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

SimplexParser::StatementContext* SimplexParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 4, SimplexParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(74);
    decl();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclContext ------------------------------------------------------------------

SimplexParser::DeclContext::DeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimplexParser::DeclContext::ID() {
  return getToken(SimplexParser::ID, 0);
}

tree::TerminalNode* SimplexParser::DeclContext::ASSIGN() {
  return getToken(SimplexParser::ASSIGN, 0);
}

SimplexParser::ExprContext* SimplexParser::DeclContext::expr() {
  return getRuleContext<SimplexParser::ExprContext>(0);
}

tree::TerminalNode* SimplexParser::DeclContext::DEF() {
  return getToken(SimplexParser::DEF, 0);
}

tree::TerminalNode* SimplexParser::DeclContext::VAR() {
  return getToken(SimplexParser::VAR, 0);
}

tree::TerminalNode* SimplexParser::DeclContext::CONST() {
  return getToken(SimplexParser::CONST, 0);
}

tree::TerminalNode* SimplexParser::DeclContext::COLON() {
  return getToken(SimplexParser::COLON, 0);
}

SimplexParser::Type_exprContext* SimplexParser::DeclContext::type_expr() {
  return getRuleContext<SimplexParser::Type_exprContext>(0);
}


size_t SimplexParser::DeclContext::getRuleIndex() const {
  return SimplexParser::RuleDecl;
}


std::any SimplexParser::DeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimplexVisitor*>(visitor))
    return parserVisitor->visitDecl(this);
  else
    return visitor->visitChildren(this);
}

SimplexParser::DeclContext* SimplexParser::decl() {
  DeclContext *_localctx = _tracker.createInstance<DeclContext>(_ctx, getState());
  enterRule(_localctx, 6, SimplexParser::RuleDecl);
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
    setState(76);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 229376) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(77);
    match(SimplexParser::ID);
    setState(80);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SimplexParser::COLON) {
      setState(78);
      match(SimplexParser::COLON);
      setState(79);
      type_expr();
    }
    setState(82);
    match(SimplexParser::ASSIGN);
    setState(83);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

SimplexParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimplexParser::ExprContext::L_PAREN() {
  return getToken(SimplexParser::L_PAREN, 0);
}

std::vector<SimplexParser::ExprContext *> SimplexParser::ExprContext::expr() {
  return getRuleContexts<SimplexParser::ExprContext>();
}

SimplexParser::ExprContext* SimplexParser::ExprContext::expr(size_t i) {
  return getRuleContext<SimplexParser::ExprContext>(i);
}

tree::TerminalNode* SimplexParser::ExprContext::R_PAREN() {
  return getToken(SimplexParser::R_PAREN, 0);
}

tree::TerminalNode* SimplexParser::ExprContext::ID() {
  return getToken(SimplexParser::ID, 0);
}

std::vector<tree::TerminalNode *> SimplexParser::ExprContext::COMMA() {
  return getTokens(SimplexParser::COMMA);
}

tree::TerminalNode* SimplexParser::ExprContext::COMMA(size_t i) {
  return getToken(SimplexParser::COMMA, i);
}

tree::TerminalNode* SimplexParser::ExprContext::ADD() {
  return getToken(SimplexParser::ADD, 0);
}

tree::TerminalNode* SimplexParser::ExprContext::SUB() {
  return getToken(SimplexParser::SUB, 0);
}

tree::TerminalNode* SimplexParser::ExprContext::INTEGER() {
  return getToken(SimplexParser::INTEGER, 0);
}

tree::TerminalNode* SimplexParser::ExprContext::TYPE() {
  return getToken(SimplexParser::TYPE, 0);
}

SimplexParser::Type_exprContext* SimplexParser::ExprContext::type_expr() {
  return getRuleContext<SimplexParser::Type_exprContext>(0);
}

SimplexParser::Expr_voidContext* SimplexParser::ExprContext::expr_void() {
  return getRuleContext<SimplexParser::Expr_voidContext>(0);
}

SimplexParser::Expr_tupleContext* SimplexParser::ExprContext::expr_tuple() {
  return getRuleContext<SimplexParser::Expr_tupleContext>(0);
}

SimplexParser::Expr_structContext* SimplexParser::ExprContext::expr_struct() {
  return getRuleContext<SimplexParser::Expr_structContext>(0);
}

SimplexParser::Expr_arrayContext* SimplexParser::ExprContext::expr_array() {
  return getRuleContext<SimplexParser::Expr_arrayContext>(0);
}

SimplexParser::Expr_mapContext* SimplexParser::ExprContext::expr_map() {
  return getRuleContext<SimplexParser::Expr_mapContext>(0);
}

SimplexParser::Expr_funcContext* SimplexParser::ExprContext::expr_func() {
  return getRuleContext<SimplexParser::Expr_funcContext>(0);
}

tree::TerminalNode* SimplexParser::ExprContext::MUL() {
  return getToken(SimplexParser::MUL, 0);
}

tree::TerminalNode* SimplexParser::ExprContext::DIV() {
  return getToken(SimplexParser::DIV, 0);
}


size_t SimplexParser::ExprContext::getRuleIndex() const {
  return SimplexParser::RuleExpr;
}


std::any SimplexParser::ExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimplexVisitor*>(visitor))
    return parserVisitor->visitExpr(this);
  else
    return visitor->visitChildren(this);
}


SimplexParser::ExprContext* SimplexParser::expr() {
   return expr(0);
}

SimplexParser::ExprContext* SimplexParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SimplexParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  SimplexParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 8;
  enterRecursionRule(_localctx, 8, SimplexParser::RuleExpr, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(118);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      setState(86);
      match(SimplexParser::L_PAREN);
      setState(87);
      expr(0);
      setState(88);
      match(SimplexParser::R_PAREN);
      break;
    }

    case 2: {
      setState(90);
      match(SimplexParser::ID);
      setState(91);
      match(SimplexParser::L_PAREN);
      setState(103);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 1841194) != 0)) {
        setState(92);
        expr(0);
        setState(97);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(93);
            match(SimplexParser::COMMA);
            setState(94);
            expr(0); 
          }
          setState(99);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
        }
        setState(101);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SimplexParser::COMMA) {
          setState(100);
          match(SimplexParser::COMMA);
        }
      }
      setState(105);
      match(SimplexParser::R_PAREN);
      break;
    }

    case 3: {
      setState(106);
      _la = _input->LA(1);
      if (!(_la == SimplexParser::ADD

      || _la == SimplexParser::SUB)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(107);
      expr(12);
      break;
    }

    case 4: {
      setState(108);
      match(SimplexParser::ID);
      break;
    }

    case 5: {
      setState(109);
      match(SimplexParser::INTEGER);
      break;
    }

    case 6: {
      setState(110);
      match(SimplexParser::TYPE);
      setState(111);
      type_expr();
      break;
    }

    case 7: {
      setState(112);
      expr_void();
      break;
    }

    case 8: {
      setState(113);
      expr_tuple();
      break;
    }

    case 9: {
      setState(114);
      expr_struct();
      break;
    }

    case 10: {
      setState(115);
      expr_array();
      break;
    }

    case 11: {
      setState(116);
      expr_map();
      break;
    }

    case 12: {
      setState(117);
      expr_func();
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(128);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(126);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(120);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(121);
          _la = _input->LA(1);
          if (!(_la == SimplexParser::MUL

          || _la == SimplexParser::DIV)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(122);
          expr(12);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(123);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(124);
          _la = _input->LA(1);
          if (!(_la == SimplexParser::ADD

          || _la == SimplexParser::SUB)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(125);
          expr(11);
          break;
        }

        default:
          break;
        } 
      }
      setState(130);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Expr_voidContext ------------------------------------------------------------------

SimplexParser::Expr_voidContext::Expr_voidContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimplexParser::Expr_voidContext::L_PAREN() {
  return getToken(SimplexParser::L_PAREN, 0);
}

tree::TerminalNode* SimplexParser::Expr_voidContext::R_PAREN() {
  return getToken(SimplexParser::R_PAREN, 0);
}


size_t SimplexParser::Expr_voidContext::getRuleIndex() const {
  return SimplexParser::RuleExpr_void;
}


std::any SimplexParser::Expr_voidContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimplexVisitor*>(visitor))
    return parserVisitor->visitExpr_void(this);
  else
    return visitor->visitChildren(this);
}

SimplexParser::Expr_voidContext* SimplexParser::expr_void() {
  Expr_voidContext *_localctx = _tracker.createInstance<Expr_voidContext>(_ctx, getState());
  enterRule(_localctx, 10, SimplexParser::RuleExpr_void);

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
    match(SimplexParser::L_PAREN);
    setState(132);
    match(SimplexParser::R_PAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Expr_tupleContext ------------------------------------------------------------------

SimplexParser::Expr_tupleContext::Expr_tupleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimplexParser::Expr_tupleContext::L_PAREN() {
  return getToken(SimplexParser::L_PAREN, 0);
}

std::vector<SimplexParser::ExprContext *> SimplexParser::Expr_tupleContext::expr() {
  return getRuleContexts<SimplexParser::ExprContext>();
}

SimplexParser::ExprContext* SimplexParser::Expr_tupleContext::expr(size_t i) {
  return getRuleContext<SimplexParser::ExprContext>(i);
}

tree::TerminalNode* SimplexParser::Expr_tupleContext::R_PAREN() {
  return getToken(SimplexParser::R_PAREN, 0);
}

std::vector<tree::TerminalNode *> SimplexParser::Expr_tupleContext::COMMA() {
  return getTokens(SimplexParser::COMMA);
}

tree::TerminalNode* SimplexParser::Expr_tupleContext::COMMA(size_t i) {
  return getToken(SimplexParser::COMMA, i);
}


size_t SimplexParser::Expr_tupleContext::getRuleIndex() const {
  return SimplexParser::RuleExpr_tuple;
}


std::any SimplexParser::Expr_tupleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimplexVisitor*>(visitor))
    return parserVisitor->visitExpr_tuple(this);
  else
    return visitor->visitChildren(this);
}

SimplexParser::Expr_tupleContext* SimplexParser::expr_tuple() {
  Expr_tupleContext *_localctx = _tracker.createInstance<Expr_tupleContext>(_ctx, getState());
  enterRule(_localctx, 12, SimplexParser::RuleExpr_tuple);
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
    setState(134);
    match(SimplexParser::L_PAREN);
    setState(135);
    expr(0);
    setState(140);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(136);
        match(SimplexParser::COMMA);
        setState(137);
        expr(0); 
      }
      setState(142);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
    }
    setState(144);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SimplexParser::COMMA) {
      setState(143);
      match(SimplexParser::COMMA);
    }
    setState(146);
    match(SimplexParser::R_PAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Expr_structContext ------------------------------------------------------------------

SimplexParser::Expr_structContext::Expr_structContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimplexParser::Expr_structContext::L_PAREN() {
  return getToken(SimplexParser::L_PAREN, 0);
}

std::vector<tree::TerminalNode *> SimplexParser::Expr_structContext::ID() {
  return getTokens(SimplexParser::ID);
}

tree::TerminalNode* SimplexParser::Expr_structContext::ID(size_t i) {
  return getToken(SimplexParser::ID, i);
}

std::vector<tree::TerminalNode *> SimplexParser::Expr_structContext::COLON() {
  return getTokens(SimplexParser::COLON);
}

tree::TerminalNode* SimplexParser::Expr_structContext::COLON(size_t i) {
  return getToken(SimplexParser::COLON, i);
}

std::vector<SimplexParser::ExprContext *> SimplexParser::Expr_structContext::expr() {
  return getRuleContexts<SimplexParser::ExprContext>();
}

SimplexParser::ExprContext* SimplexParser::Expr_structContext::expr(size_t i) {
  return getRuleContext<SimplexParser::ExprContext>(i);
}

tree::TerminalNode* SimplexParser::Expr_structContext::R_PAREN() {
  return getToken(SimplexParser::R_PAREN, 0);
}

std::vector<tree::TerminalNode *> SimplexParser::Expr_structContext::COMMA() {
  return getTokens(SimplexParser::COMMA);
}

tree::TerminalNode* SimplexParser::Expr_structContext::COMMA(size_t i) {
  return getToken(SimplexParser::COMMA, i);
}


size_t SimplexParser::Expr_structContext::getRuleIndex() const {
  return SimplexParser::RuleExpr_struct;
}


std::any SimplexParser::Expr_structContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimplexVisitor*>(visitor))
    return parserVisitor->visitExpr_struct(this);
  else
    return visitor->visitChildren(this);
}

SimplexParser::Expr_structContext* SimplexParser::expr_struct() {
  Expr_structContext *_localctx = _tracker.createInstance<Expr_structContext>(_ctx, getState());
  enterRule(_localctx, 14, SimplexParser::RuleExpr_struct);
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
    setState(148);
    match(SimplexParser::L_PAREN);
    setState(149);
    match(SimplexParser::ID);
    setState(150);
    match(SimplexParser::COLON);
    setState(151);
    expr(0);
    setState(158);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(152);
        match(SimplexParser::COMMA);
        setState(153);
        match(SimplexParser::ID);
        setState(154);
        match(SimplexParser::COLON);
        setState(155);
        expr(0); 
      }
      setState(160);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
    }
    setState(162);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SimplexParser::COMMA) {
      setState(161);
      match(SimplexParser::COMMA);
    }
    setState(164);
    match(SimplexParser::R_PAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Expr_arrayContext ------------------------------------------------------------------

SimplexParser::Expr_arrayContext::Expr_arrayContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimplexParser::Expr_arrayContext::L_BRACKET() {
  return getToken(SimplexParser::L_BRACKET, 0);
}

std::vector<SimplexParser::ExprContext *> SimplexParser::Expr_arrayContext::expr() {
  return getRuleContexts<SimplexParser::ExprContext>();
}

SimplexParser::ExprContext* SimplexParser::Expr_arrayContext::expr(size_t i) {
  return getRuleContext<SimplexParser::ExprContext>(i);
}

tree::TerminalNode* SimplexParser::Expr_arrayContext::R_BRACKET() {
  return getToken(SimplexParser::R_BRACKET, 0);
}

std::vector<tree::TerminalNode *> SimplexParser::Expr_arrayContext::COMMA() {
  return getTokens(SimplexParser::COMMA);
}

tree::TerminalNode* SimplexParser::Expr_arrayContext::COMMA(size_t i) {
  return getToken(SimplexParser::COMMA, i);
}


size_t SimplexParser::Expr_arrayContext::getRuleIndex() const {
  return SimplexParser::RuleExpr_array;
}


std::any SimplexParser::Expr_arrayContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimplexVisitor*>(visitor))
    return parserVisitor->visitExpr_array(this);
  else
    return visitor->visitChildren(this);
}

SimplexParser::Expr_arrayContext* SimplexParser::expr_array() {
  Expr_arrayContext *_localctx = _tracker.createInstance<Expr_arrayContext>(_ctx, getState());
  enterRule(_localctx, 16, SimplexParser::RuleExpr_array);
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
    setState(166);
    match(SimplexParser::L_BRACKET);
    setState(167);
    expr(0);
    setState(172);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(168);
        match(SimplexParser::COMMA);
        setState(169);
        expr(0); 
      }
      setState(174);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    }
    setState(176);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SimplexParser::COMMA) {
      setState(175);
      match(SimplexParser::COMMA);
    }
    setState(178);
    match(SimplexParser::R_BRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Expr_mapContext ------------------------------------------------------------------

SimplexParser::Expr_mapContext::Expr_mapContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimplexParser::Expr_mapContext::L_BRACKET() {
  return getToken(SimplexParser::L_BRACKET, 0);
}

std::vector<SimplexParser::ExprContext *> SimplexParser::Expr_mapContext::expr() {
  return getRuleContexts<SimplexParser::ExprContext>();
}

SimplexParser::ExprContext* SimplexParser::Expr_mapContext::expr(size_t i) {
  return getRuleContext<SimplexParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> SimplexParser::Expr_mapContext::COLON() {
  return getTokens(SimplexParser::COLON);
}

tree::TerminalNode* SimplexParser::Expr_mapContext::COLON(size_t i) {
  return getToken(SimplexParser::COLON, i);
}

tree::TerminalNode* SimplexParser::Expr_mapContext::R_BRACKET() {
  return getToken(SimplexParser::R_BRACKET, 0);
}

std::vector<tree::TerminalNode *> SimplexParser::Expr_mapContext::COMMA() {
  return getTokens(SimplexParser::COMMA);
}

tree::TerminalNode* SimplexParser::Expr_mapContext::COMMA(size_t i) {
  return getToken(SimplexParser::COMMA, i);
}


size_t SimplexParser::Expr_mapContext::getRuleIndex() const {
  return SimplexParser::RuleExpr_map;
}


std::any SimplexParser::Expr_mapContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimplexVisitor*>(visitor))
    return parserVisitor->visitExpr_map(this);
  else
    return visitor->visitChildren(this);
}

SimplexParser::Expr_mapContext* SimplexParser::expr_map() {
  Expr_mapContext *_localctx = _tracker.createInstance<Expr_mapContext>(_ctx, getState());
  enterRule(_localctx, 18, SimplexParser::RuleExpr_map);
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
    setState(180);
    match(SimplexParser::L_BRACKET);
    setState(181);
    expr(0);
    setState(182);
    match(SimplexParser::COLON);
    setState(183);
    expr(0);
    setState(191);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(184);
        match(SimplexParser::COMMA);
        setState(185);
        expr(0);
        setState(186);
        match(SimplexParser::COLON);
        setState(187);
        expr(0); 
      }
      setState(193);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
    }
    setState(195);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SimplexParser::COMMA) {
      setState(194);
      match(SimplexParser::COMMA);
    }
    setState(197);
    match(SimplexParser::R_BRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Expr_funcContext ------------------------------------------------------------------

SimplexParser::Expr_funcContext::Expr_funcContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimplexParser::Expr_funcContext::L_BRACE() {
  return getToken(SimplexParser::L_BRACE, 0);
}

SimplexParser::Type_funcContext* SimplexParser::Expr_funcContext::type_func() {
  return getRuleContext<SimplexParser::Type_funcContext>(0);
}

tree::TerminalNode* SimplexParser::Expr_funcContext::NEWLINE() {
  return getToken(SimplexParser::NEWLINE, 0);
}

SimplexParser::StatementsContext* SimplexParser::Expr_funcContext::statements() {
  return getRuleContext<SimplexParser::StatementsContext>(0);
}

tree::TerminalNode* SimplexParser::Expr_funcContext::R_BRACE() {
  return getToken(SimplexParser::R_BRACE, 0);
}

tree::TerminalNode* SimplexParser::Expr_funcContext::L_PAREN() {
  return getToken(SimplexParser::L_PAREN, 0);
}

std::vector<tree::TerminalNode *> SimplexParser::Expr_funcContext::ID() {
  return getTokens(SimplexParser::ID);
}

tree::TerminalNode* SimplexParser::Expr_funcContext::ID(size_t i) {
  return getToken(SimplexParser::ID, i);
}

std::vector<tree::TerminalNode *> SimplexParser::Expr_funcContext::COLON() {
  return getTokens(SimplexParser::COLON);
}

tree::TerminalNode* SimplexParser::Expr_funcContext::COLON(size_t i) {
  return getToken(SimplexParser::COLON, i);
}

std::vector<SimplexParser::Type_exprContext *> SimplexParser::Expr_funcContext::type_expr() {
  return getRuleContexts<SimplexParser::Type_exprContext>();
}

SimplexParser::Type_exprContext* SimplexParser::Expr_funcContext::type_expr(size_t i) {
  return getRuleContext<SimplexParser::Type_exprContext>(i);
}

tree::TerminalNode* SimplexParser::Expr_funcContext::R_PAREN() {
  return getToken(SimplexParser::R_PAREN, 0);
}

tree::TerminalNode* SimplexParser::Expr_funcContext::ARROW() {
  return getToken(SimplexParser::ARROW, 0);
}

SimplexParser::ExprContext* SimplexParser::Expr_funcContext::expr() {
  return getRuleContext<SimplexParser::ExprContext>(0);
}

std::vector<tree::TerminalNode *> SimplexParser::Expr_funcContext::COMMA() {
  return getTokens(SimplexParser::COMMA);
}

tree::TerminalNode* SimplexParser::Expr_funcContext::COMMA(size_t i) {
  return getToken(SimplexParser::COMMA, i);
}


size_t SimplexParser::Expr_funcContext::getRuleIndex() const {
  return SimplexParser::RuleExpr_func;
}


std::any SimplexParser::Expr_funcContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimplexVisitor*>(visitor))
    return parserVisitor->visitExpr_func(this);
  else
    return visitor->visitChildren(this);
}

SimplexParser::Expr_funcContext* SimplexParser::expr_func() {
  Expr_funcContext *_localctx = _tracker.createInstance<Expr_funcContext>(_ctx, getState());
  enterRule(_localctx, 20, SimplexParser::RuleExpr_func);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(223);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(199);
      match(SimplexParser::L_BRACE);
      setState(200);
      type_func();
      setState(201);
      match(SimplexParser::NEWLINE);
      setState(202);
      statements();
      setState(203);
      match(SimplexParser::R_BRACE);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(205);
      match(SimplexParser::L_BRACE);
      setState(206);
      match(SimplexParser::L_PAREN);
      setState(207);
      match(SimplexParser::ID);
      setState(208);
      match(SimplexParser::COLON);
      setState(209);
      type_expr();

      setState(210);
      match(SimplexParser::COMMA);
      setState(211);
      match(SimplexParser::ID);
      setState(212);
      match(SimplexParser::COLON);
      setState(213);
      type_expr();
      setState(216);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SimplexParser::COMMA) {
        setState(215);
        match(SimplexParser::COMMA);
      }
      setState(218);
      match(SimplexParser::R_PAREN);
      setState(219);
      match(SimplexParser::ARROW);
      setState(220);
      expr(0);
      setState(221);
      match(SimplexParser::R_BRACE);
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

//----------------- Type_exprContext ------------------------------------------------------------------

SimplexParser::Type_exprContext::Type_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimplexParser::Type_exprContext::ID() {
  return getToken(SimplexParser::ID, 0);
}

SimplexParser::Type_voidContext* SimplexParser::Type_exprContext::type_void() {
  return getRuleContext<SimplexParser::Type_voidContext>(0);
}

SimplexParser::Type_tupleContext* SimplexParser::Type_exprContext::type_tuple() {
  return getRuleContext<SimplexParser::Type_tupleContext>(0);
}

SimplexParser::Type_structContext* SimplexParser::Type_exprContext::type_struct() {
  return getRuleContext<SimplexParser::Type_structContext>(0);
}

SimplexParser::Type_arrayContext* SimplexParser::Type_exprContext::type_array() {
  return getRuleContext<SimplexParser::Type_arrayContext>(0);
}

SimplexParser::Type_mapContext* SimplexParser::Type_exprContext::type_map() {
  return getRuleContext<SimplexParser::Type_mapContext>(0);
}

SimplexParser::Type_funcContext* SimplexParser::Type_exprContext::type_func() {
  return getRuleContext<SimplexParser::Type_funcContext>(0);
}


size_t SimplexParser::Type_exprContext::getRuleIndex() const {
  return SimplexParser::RuleType_expr;
}


std::any SimplexParser::Type_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimplexVisitor*>(visitor))
    return parserVisitor->visitType_expr(this);
  else
    return visitor->visitChildren(this);
}

SimplexParser::Type_exprContext* SimplexParser::type_expr() {
  Type_exprContext *_localctx = _tracker.createInstance<Type_exprContext>(_ctx, getState());
  enterRule(_localctx, 22, SimplexParser::RuleType_expr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(232);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(225);
      match(SimplexParser::ID);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(226);
      type_void();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(227);
      type_tuple();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(228);
      type_struct();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(229);
      type_array();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(230);
      type_map();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(231);
      type_func();
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

//----------------- Type_voidContext ------------------------------------------------------------------

SimplexParser::Type_voidContext::Type_voidContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimplexParser::Type_voidContext::L_PAREN() {
  return getToken(SimplexParser::L_PAREN, 0);
}

tree::TerminalNode* SimplexParser::Type_voidContext::R_PAREN() {
  return getToken(SimplexParser::R_PAREN, 0);
}


size_t SimplexParser::Type_voidContext::getRuleIndex() const {
  return SimplexParser::RuleType_void;
}


std::any SimplexParser::Type_voidContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimplexVisitor*>(visitor))
    return parserVisitor->visitType_void(this);
  else
    return visitor->visitChildren(this);
}

SimplexParser::Type_voidContext* SimplexParser::type_void() {
  Type_voidContext *_localctx = _tracker.createInstance<Type_voidContext>(_ctx, getState());
  enterRule(_localctx, 24, SimplexParser::RuleType_void);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(234);
    match(SimplexParser::L_PAREN);
    setState(235);
    match(SimplexParser::R_PAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_tupleContext ------------------------------------------------------------------

SimplexParser::Type_tupleContext::Type_tupleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimplexParser::Type_tupleContext::L_PAREN() {
  return getToken(SimplexParser::L_PAREN, 0);
}

std::vector<SimplexParser::Type_exprContext *> SimplexParser::Type_tupleContext::type_expr() {
  return getRuleContexts<SimplexParser::Type_exprContext>();
}

SimplexParser::Type_exprContext* SimplexParser::Type_tupleContext::type_expr(size_t i) {
  return getRuleContext<SimplexParser::Type_exprContext>(i);
}

tree::TerminalNode* SimplexParser::Type_tupleContext::R_PAREN() {
  return getToken(SimplexParser::R_PAREN, 0);
}

std::vector<tree::TerminalNode *> SimplexParser::Type_tupleContext::COMMA() {
  return getTokens(SimplexParser::COMMA);
}

tree::TerminalNode* SimplexParser::Type_tupleContext::COMMA(size_t i) {
  return getToken(SimplexParser::COMMA, i);
}


size_t SimplexParser::Type_tupleContext::getRuleIndex() const {
  return SimplexParser::RuleType_tuple;
}


std::any SimplexParser::Type_tupleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimplexVisitor*>(visitor))
    return parserVisitor->visitType_tuple(this);
  else
    return visitor->visitChildren(this);
}

SimplexParser::Type_tupleContext* SimplexParser::type_tuple() {
  Type_tupleContext *_localctx = _tracker.createInstance<Type_tupleContext>(_ctx, getState());
  enterRule(_localctx, 26, SimplexParser::RuleType_tuple);
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
    setState(237);
    match(SimplexParser::L_PAREN);
    setState(238);
    type_expr();
    setState(243);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(239);
        match(SimplexParser::COMMA);
        setState(240);
        type_expr(); 
      }
      setState(245);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
    }
    setState(247);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SimplexParser::COMMA) {
      setState(246);
      match(SimplexParser::COMMA);
    }
    setState(249);
    match(SimplexParser::R_PAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_structContext ------------------------------------------------------------------

SimplexParser::Type_structContext::Type_structContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimplexParser::Type_structContext::L_PAREN() {
  return getToken(SimplexParser::L_PAREN, 0);
}

std::vector<tree::TerminalNode *> SimplexParser::Type_structContext::ID() {
  return getTokens(SimplexParser::ID);
}

tree::TerminalNode* SimplexParser::Type_structContext::ID(size_t i) {
  return getToken(SimplexParser::ID, i);
}

std::vector<tree::TerminalNode *> SimplexParser::Type_structContext::COLON() {
  return getTokens(SimplexParser::COLON);
}

tree::TerminalNode* SimplexParser::Type_structContext::COLON(size_t i) {
  return getToken(SimplexParser::COLON, i);
}

std::vector<SimplexParser::Type_exprContext *> SimplexParser::Type_structContext::type_expr() {
  return getRuleContexts<SimplexParser::Type_exprContext>();
}

SimplexParser::Type_exprContext* SimplexParser::Type_structContext::type_expr(size_t i) {
  return getRuleContext<SimplexParser::Type_exprContext>(i);
}

tree::TerminalNode* SimplexParser::Type_structContext::R_PAREN() {
  return getToken(SimplexParser::R_PAREN, 0);
}

std::vector<tree::TerminalNode *> SimplexParser::Type_structContext::COMMA() {
  return getTokens(SimplexParser::COMMA);
}

tree::TerminalNode* SimplexParser::Type_structContext::COMMA(size_t i) {
  return getToken(SimplexParser::COMMA, i);
}


size_t SimplexParser::Type_structContext::getRuleIndex() const {
  return SimplexParser::RuleType_struct;
}


std::any SimplexParser::Type_structContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimplexVisitor*>(visitor))
    return parserVisitor->visitType_struct(this);
  else
    return visitor->visitChildren(this);
}

SimplexParser::Type_structContext* SimplexParser::type_struct() {
  Type_structContext *_localctx = _tracker.createInstance<Type_structContext>(_ctx, getState());
  enterRule(_localctx, 28, SimplexParser::RuleType_struct);
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
    setState(251);
    match(SimplexParser::L_PAREN);
    setState(252);
    match(SimplexParser::ID);
    setState(253);
    match(SimplexParser::COLON);
    setState(254);
    type_expr();
    setState(261);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(255);
        match(SimplexParser::COMMA);
        setState(256);
        match(SimplexParser::ID);
        setState(257);
        match(SimplexParser::COLON);
        setState(258);
        type_expr(); 
      }
      setState(263);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx);
    }
    setState(265);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SimplexParser::COMMA) {
      setState(264);
      match(SimplexParser::COMMA);
    }
    setState(267);
    match(SimplexParser::R_PAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_arrayContext ------------------------------------------------------------------

SimplexParser::Type_arrayContext::Type_arrayContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimplexParser::Type_arrayContext::L_BRACKET() {
  return getToken(SimplexParser::L_BRACKET, 0);
}

SimplexParser::Type_exprContext* SimplexParser::Type_arrayContext::type_expr() {
  return getRuleContext<SimplexParser::Type_exprContext>(0);
}

tree::TerminalNode* SimplexParser::Type_arrayContext::R_BRACKET() {
  return getToken(SimplexParser::R_BRACKET, 0);
}


size_t SimplexParser::Type_arrayContext::getRuleIndex() const {
  return SimplexParser::RuleType_array;
}


std::any SimplexParser::Type_arrayContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimplexVisitor*>(visitor))
    return parserVisitor->visitType_array(this);
  else
    return visitor->visitChildren(this);
}

SimplexParser::Type_arrayContext* SimplexParser::type_array() {
  Type_arrayContext *_localctx = _tracker.createInstance<Type_arrayContext>(_ctx, getState());
  enterRule(_localctx, 30, SimplexParser::RuleType_array);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(269);
    match(SimplexParser::L_BRACKET);
    setState(270);
    type_expr();
    setState(271);
    match(SimplexParser::R_BRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_mapContext ------------------------------------------------------------------

SimplexParser::Type_mapContext::Type_mapContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimplexParser::Type_mapContext::L_BRACKET() {
  return getToken(SimplexParser::L_BRACKET, 0);
}

std::vector<SimplexParser::Type_exprContext *> SimplexParser::Type_mapContext::type_expr() {
  return getRuleContexts<SimplexParser::Type_exprContext>();
}

SimplexParser::Type_exprContext* SimplexParser::Type_mapContext::type_expr(size_t i) {
  return getRuleContext<SimplexParser::Type_exprContext>(i);
}

tree::TerminalNode* SimplexParser::Type_mapContext::COLON() {
  return getToken(SimplexParser::COLON, 0);
}

tree::TerminalNode* SimplexParser::Type_mapContext::R_BRACKET() {
  return getToken(SimplexParser::R_BRACKET, 0);
}


size_t SimplexParser::Type_mapContext::getRuleIndex() const {
  return SimplexParser::RuleType_map;
}


std::any SimplexParser::Type_mapContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimplexVisitor*>(visitor))
    return parserVisitor->visitType_map(this);
  else
    return visitor->visitChildren(this);
}

SimplexParser::Type_mapContext* SimplexParser::type_map() {
  Type_mapContext *_localctx = _tracker.createInstance<Type_mapContext>(_ctx, getState());
  enterRule(_localctx, 32, SimplexParser::RuleType_map);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(273);
    match(SimplexParser::L_BRACKET);
    setState(274);
    type_expr();
    setState(275);
    match(SimplexParser::COLON);
    setState(276);
    type_expr();
    setState(277);
    match(SimplexParser::R_BRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_funcContext ------------------------------------------------------------------

SimplexParser::Type_funcContext::Type_funcContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimplexParser::Type_funcContext::L_PAREN() {
  return getToken(SimplexParser::L_PAREN, 0);
}

std::vector<tree::TerminalNode *> SimplexParser::Type_funcContext::ID() {
  return getTokens(SimplexParser::ID);
}

tree::TerminalNode* SimplexParser::Type_funcContext::ID(size_t i) {
  return getToken(SimplexParser::ID, i);
}

std::vector<tree::TerminalNode *> SimplexParser::Type_funcContext::COLON() {
  return getTokens(SimplexParser::COLON);
}

tree::TerminalNode* SimplexParser::Type_funcContext::COLON(size_t i) {
  return getToken(SimplexParser::COLON, i);
}

std::vector<SimplexParser::Type_exprContext *> SimplexParser::Type_funcContext::type_expr() {
  return getRuleContexts<SimplexParser::Type_exprContext>();
}

SimplexParser::Type_exprContext* SimplexParser::Type_funcContext::type_expr(size_t i) {
  return getRuleContext<SimplexParser::Type_exprContext>(i);
}

tree::TerminalNode* SimplexParser::Type_funcContext::R_PAREN() {
  return getToken(SimplexParser::R_PAREN, 0);
}

tree::TerminalNode* SimplexParser::Type_funcContext::ARROW() {
  return getToken(SimplexParser::ARROW, 0);
}

std::vector<tree::TerminalNode *> SimplexParser::Type_funcContext::COMMA() {
  return getTokens(SimplexParser::COMMA);
}

tree::TerminalNode* SimplexParser::Type_funcContext::COMMA(size_t i) {
  return getToken(SimplexParser::COMMA, i);
}


size_t SimplexParser::Type_funcContext::getRuleIndex() const {
  return SimplexParser::RuleType_func;
}


std::any SimplexParser::Type_funcContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimplexVisitor*>(visitor))
    return parserVisitor->visitType_func(this);
  else
    return visitor->visitChildren(this);
}

SimplexParser::Type_funcContext* SimplexParser::type_func() {
  Type_funcContext *_localctx = _tracker.createInstance<Type_funcContext>(_ctx, getState());
  enterRule(_localctx, 34, SimplexParser::RuleType_func);
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
    match(SimplexParser::L_PAREN);
    setState(280);
    match(SimplexParser::ID);
    setState(281);
    match(SimplexParser::COLON);
    setState(282);
    type_expr();

    setState(283);
    match(SimplexParser::COMMA);
    setState(284);
    match(SimplexParser::ID);
    setState(285);
    match(SimplexParser::COLON);
    setState(286);
    type_expr();
    setState(289);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SimplexParser::COMMA) {
      setState(288);
      match(SimplexParser::COMMA);
    }
    setState(291);
    match(SimplexParser::R_PAREN);
    setState(292);
    match(SimplexParser::ARROW);
    setState(293);
    type_expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool SimplexParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 4: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool SimplexParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 11);
    case 1: return precpred(_ctx, 10);

  default:
    break;
  }
  return true;
}

void SimplexParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  simplexParserInitialize();
#else
  ::antlr4::internal::call_once(simplexParserOnceFlag, simplexParserInitialize);
#endif
}
