
// Generated from src/Grammar/Simplex.g4 by ANTLR 4.13.2


#include "SimplexLexer.h"


using namespace antlr4;

using namespace sx::grammar;


using namespace antlr4;

namespace {

struct SimplexLexerStaticData final {
  SimplexLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  SimplexLexerStaticData(const SimplexLexerStaticData&) = delete;
  SimplexLexerStaticData(SimplexLexerStaticData&&) = delete;
  SimplexLexerStaticData& operator=(const SimplexLexerStaticData&) = delete;
  SimplexLexerStaticData& operator=(SimplexLexerStaticData&&) = delete;

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

::antlr4::internal::OnceFlag simplexlexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<SimplexLexerStaticData> simplexlexerLexerStaticData = nullptr;

void simplexlexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (simplexlexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(simplexlexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<SimplexLexerStaticData>(
    std::vector<std::string>{
      "NEWLINE", "CHAR"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "", "'\\u6C49\\u5B57'"
    },
    std::vector<std::string>{
      "", "NEWLINE", "CHAR"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,2,13,6,-1,2,0,7,0,2,1,7,1,1,0,4,0,7,8,0,11,0,12,0,8,1,1,1,1,1,1,0,
  	0,2,1,1,3,2,1,0,1,2,0,10,10,13,13,13,0,1,1,0,0,0,0,3,1,0,0,0,1,6,1,0,
  	0,0,3,10,1,0,0,0,5,7,7,0,0,0,6,5,1,0,0,0,7,8,1,0,0,0,8,6,1,0,0,0,8,9,
  	1,0,0,0,9,2,1,0,0,0,10,11,5,27721,0,0,11,12,5,23383,0,0,12,4,1,0,0,0,
  	2,0,8,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  simplexlexerLexerStaticData = std::move(staticData);
}

}

SimplexLexer::SimplexLexer(CharStream *input) : Lexer(input) {
  SimplexLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *simplexlexerLexerStaticData->atn, simplexlexerLexerStaticData->decisionToDFA, simplexlexerLexerStaticData->sharedContextCache);
}

SimplexLexer::~SimplexLexer() {
  delete _interpreter;
}

std::string SimplexLexer::getGrammarFileName() const {
  return "Simplex.g4";
}

const std::vector<std::string>& SimplexLexer::getRuleNames() const {
  return simplexlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& SimplexLexer::getChannelNames() const {
  return simplexlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& SimplexLexer::getModeNames() const {
  return simplexlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& SimplexLexer::getVocabulary() const {
  return simplexlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView SimplexLexer::getSerializedATN() const {
  return simplexlexerLexerStaticData->serializedATN;
}

const atn::ATN& SimplexLexer::getATN() const {
  return *simplexlexerLexerStaticData->atn;
}




void SimplexLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  simplexlexerLexerInitialize();
#else
  ::antlr4::internal::call_once(simplexlexerLexerOnceFlag, simplexlexerLexerInitialize);
#endif
}
