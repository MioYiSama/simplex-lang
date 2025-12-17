
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
      "file"
    },
    std::vector<std::string>{
      "", "", "'\\u6C49\\u5B57'"
    },
    std::vector<std::string>{
      "", "NEWLINE", "CHAR"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,2,10,2,0,7,0,1,0,1,0,5,0,5,8,0,10,0,12,0,8,9,0,1,0,0,0,1,0,0,0,9,
  	0,2,1,0,0,0,2,6,5,2,0,0,3,5,5,1,0,0,4,3,1,0,0,0,5,8,1,0,0,0,6,4,1,0,0,
  	0,6,7,1,0,0,0,7,1,1,0,0,0,8,6,1,0,0,0,1,6
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


//----------------- FileContext ------------------------------------------------------------------

SimplexParser::FileContext::FileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimplexParser::FileContext::CHAR() {
  return getToken(SimplexParser::CHAR, 0);
}

std::vector<tree::TerminalNode *> SimplexParser::FileContext::NEWLINE() {
  return getTokens(SimplexParser::NEWLINE);
}

tree::TerminalNode* SimplexParser::FileContext::NEWLINE(size_t i) {
  return getToken(SimplexParser::NEWLINE, i);
}


size_t SimplexParser::FileContext::getRuleIndex() const {
  return SimplexParser::RuleFile;
}


std::any SimplexParser::FileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimplexVisitor*>(visitor))
    return parserVisitor->visitFile(this);
  else
    return visitor->visitChildren(this);
}

SimplexParser::FileContext* SimplexParser::file() {
  FileContext *_localctx = _tracker.createInstance<FileContext>(_ctx, getState());
  enterRule(_localctx, 0, SimplexParser::RuleFile);
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
    setState(2);
    match(SimplexParser::CHAR);
    setState(6);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SimplexParser::NEWLINE) {
      setState(3);
      match(SimplexParser::NEWLINE);
      setState(8);
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

void SimplexParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  simplexParserInitialize();
#else
  ::antlr4::internal::call_once(simplexParserOnceFlag, simplexParserInitialize);
#endif
}
