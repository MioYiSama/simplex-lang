
// Generated from SimplexParser.g4 by ANTLR 4.13.2


#include "SimplexParserVisitor.h"

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

::antlr4::internal::OnceFlag simplexparserParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<SimplexParserStaticData> simplexparserParserStaticData = nullptr;

void simplexparserParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (simplexparserParserStaticData != nullptr) {
    return;
  }
#else
  assert(simplexparserParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<SimplexParserStaticData>(
    std::vector<std::string>{
      "module", "block", "statements", "statement", "if_statement", "for_statement", 
      "eos", "decl", "expr", "expr_void", "expr_tuple", "expr_struct", "expr_array", 
      "expr_map", "expr_func", "type_expr", "type_void", "type_tuple", "type_struct", 
      "type_array", "type_map", "type_func"
    },
    std::vector<std::string>{
      "", "'+'", "'-'", "'*'", "'/'", "','", "';'", "':'", "'='", "'=>'", 
      "'('", "')'", "'['", "']'", "'{'", "'}'", "'var'", "'const'", "'def'", 
      "'type'", "'if'", "'else'", "'for'", "'in'", "'continue'", "'break'", 
      "'return'"
    },
    std::vector<std::string>{
      "", "ADD", "SUB", "MUL", "DIV", "COMMA", "SEMI", "COLON", "ASSIGN", 
      "ARROW", "L_PAREN", "R_PAREN", "L_BRACKET", "R_BRACKET", "L_BRACE", 
      "R_BRACE", "VAR", "CONST", "DEF", "TYPE", "IF", "ELSE", "FOR", "IN", 
      "CONTINUE", "BREAK", "RETURN", "ID", "INTEGER", "FLOAT", "CHAR", "STRING", 
      "NEWLINE", "WHITESPACE", "LINE_COMMENT", "BLOCK_COMMENT", "WS_NLSEMI", 
      "COMMENT_NLSEMI", "LINE_COMMENT_NLSEMI", "EOS", "OTHER"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,40,349,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,1,0,1,0,1,0,1,0,5,0,49,8,0,10,0,12,0,52,9,0,1,0,3,0,55,8,0,3,0,57,
  	8,0,1,1,1,1,3,1,61,8,1,1,1,1,1,1,2,1,2,1,2,4,2,68,8,2,11,2,12,2,69,1,
  	3,1,3,1,3,3,3,75,8,3,1,3,1,3,1,3,1,3,3,3,81,8,3,1,4,1,4,1,4,1,4,1,4,1,
  	4,1,4,1,4,5,4,91,8,4,10,4,12,4,94,9,4,1,4,1,4,3,4,98,8,4,1,5,1,5,1,5,
  	1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,3,5,119,
  	8,5,1,6,1,6,1,7,1,7,1,7,1,7,3,7,127,8,7,1,7,1,7,1,7,1,8,1,8,1,8,1,8,1,
  	8,1,8,1,8,1,8,1,8,1,8,5,8,142,8,8,10,8,12,8,145,9,8,1,8,3,8,148,8,8,3,
  	8,150,8,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,3,8,165,
  	8,8,1,8,1,8,1,8,1,8,1,8,1,8,5,8,173,8,8,10,8,12,8,176,9,8,1,9,1,9,1,9,
  	1,10,1,10,1,10,1,10,5,10,185,8,10,10,10,12,10,188,9,10,1,10,3,10,191,
  	8,10,1,10,1,10,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,5,11,203,8,11,
  	10,11,12,11,206,9,11,1,11,3,11,209,8,11,1,11,1,11,1,12,1,12,1,12,1,12,
  	5,12,217,8,12,10,12,12,12,220,9,12,1,12,3,12,223,8,12,1,12,1,12,1,13,
  	1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,5,13,236,8,13,10,13,12,13,239,
  	9,13,1,13,3,13,242,8,13,1,13,1,13,1,14,1,14,1,14,1,14,1,14,1,14,1,14,
  	1,14,1,14,1,14,1,14,1,14,1,14,1,14,5,14,260,8,14,10,14,12,14,263,9,14,
  	1,14,3,14,266,8,14,1,14,1,14,1,14,1,14,1,14,3,14,273,8,14,1,15,1,15,1,
  	15,1,15,1,15,1,15,1,15,3,15,282,8,15,1,16,1,16,1,16,1,17,1,17,1,17,1,
  	17,5,17,291,8,17,10,17,12,17,294,9,17,1,17,3,17,297,8,17,1,17,1,17,1,
  	18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,5,18,309,8,18,10,18,12,18,312,9,
  	18,1,18,3,18,315,8,18,1,18,1,18,1,19,1,19,1,19,1,19,1,20,1,20,1,20,1,
  	20,1,20,1,20,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,5,21,337,8,21,10,
  	21,12,21,340,9,21,1,21,3,21,343,8,21,1,21,1,21,1,21,1,21,1,21,0,1,16,
  	22,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,0,4,2,
  	0,6,6,39,39,1,0,16,18,1,0,1,2,1,0,3,4,381,0,56,1,0,0,0,2,58,1,0,0,0,4,
  	67,1,0,0,0,6,80,1,0,0,0,8,82,1,0,0,0,10,118,1,0,0,0,12,120,1,0,0,0,14,
  	122,1,0,0,0,16,164,1,0,0,0,18,177,1,0,0,0,20,180,1,0,0,0,22,194,1,0,0,
  	0,24,212,1,0,0,0,26,226,1,0,0,0,28,272,1,0,0,0,30,281,1,0,0,0,32,283,
  	1,0,0,0,34,286,1,0,0,0,36,300,1,0,0,0,38,318,1,0,0,0,40,322,1,0,0,0,42,
  	328,1,0,0,0,44,50,3,14,7,0,45,46,3,12,6,0,46,47,3,14,7,0,47,49,1,0,0,
  	0,48,45,1,0,0,0,49,52,1,0,0,0,50,48,1,0,0,0,50,51,1,0,0,0,51,54,1,0,0,
  	0,52,50,1,0,0,0,53,55,3,12,6,0,54,53,1,0,0,0,54,55,1,0,0,0,55,57,1,0,
  	0,0,56,44,1,0,0,0,56,57,1,0,0,0,57,1,1,0,0,0,58,60,5,14,0,0,59,61,3,4,
  	2,0,60,59,1,0,0,0,60,61,1,0,0,0,61,62,1,0,0,0,62,63,5,15,0,0,63,3,1,0,
  	0,0,64,65,3,6,3,0,65,66,3,12,6,0,66,68,1,0,0,0,67,64,1,0,0,0,68,69,1,
  	0,0,0,69,67,1,0,0,0,69,70,1,0,0,0,70,5,1,0,0,0,71,81,3,14,7,0,72,74,5,
  	26,0,0,73,75,3,16,8,0,74,73,1,0,0,0,74,75,1,0,0,0,75,81,1,0,0,0,76,81,
  	5,24,0,0,77,81,5,25,0,0,78,81,3,8,4,0,79,81,3,10,5,0,80,71,1,0,0,0,80,
  	72,1,0,0,0,80,76,1,0,0,0,80,77,1,0,0,0,80,78,1,0,0,0,80,79,1,0,0,0,81,
  	7,1,0,0,0,82,83,5,20,0,0,83,84,3,16,8,0,84,92,3,2,1,0,85,86,5,21,0,0,
  	86,87,5,20,0,0,87,88,3,16,8,0,88,89,3,2,1,0,89,91,1,0,0,0,90,85,1,0,0,
  	0,91,94,1,0,0,0,92,90,1,0,0,0,92,93,1,0,0,0,93,97,1,0,0,0,94,92,1,0,0,
  	0,95,96,5,21,0,0,96,98,3,2,1,0,97,95,1,0,0,0,97,98,1,0,0,0,98,9,1,0,0,
  	0,99,100,5,22,0,0,100,101,5,14,0,0,101,102,3,4,2,0,102,103,5,15,0,0,103,
  	119,1,0,0,0,104,105,5,22,0,0,105,106,3,16,8,0,106,107,5,14,0,0,107,108,
  	3,4,2,0,108,109,5,15,0,0,109,119,1,0,0,0,110,111,5,22,0,0,111,112,5,27,
  	0,0,112,113,5,23,0,0,113,114,3,16,8,0,114,115,5,14,0,0,115,116,3,4,2,
  	0,116,117,5,15,0,0,117,119,1,0,0,0,118,99,1,0,0,0,118,104,1,0,0,0,118,
  	110,1,0,0,0,119,11,1,0,0,0,120,121,7,0,0,0,121,13,1,0,0,0,122,123,7,1,
  	0,0,123,126,5,27,0,0,124,125,5,7,0,0,125,127,3,30,15,0,126,124,1,0,0,
  	0,126,127,1,0,0,0,127,128,1,0,0,0,128,129,5,8,0,0,129,130,3,16,8,0,130,
  	15,1,0,0,0,131,132,6,8,-1,0,132,133,5,10,0,0,133,134,3,16,8,0,134,135,
  	5,11,0,0,135,165,1,0,0,0,136,137,5,27,0,0,137,149,5,10,0,0,138,143,3,
  	16,8,0,139,140,5,5,0,0,140,142,3,16,8,0,141,139,1,0,0,0,142,145,1,0,0,
  	0,143,141,1,0,0,0,143,144,1,0,0,0,144,147,1,0,0,0,145,143,1,0,0,0,146,
  	148,5,5,0,0,147,146,1,0,0,0,147,148,1,0,0,0,148,150,1,0,0,0,149,138,1,
  	0,0,0,149,150,1,0,0,0,150,151,1,0,0,0,151,165,5,11,0,0,152,153,7,2,0,
  	0,153,165,3,16,8,12,154,165,5,27,0,0,155,165,5,28,0,0,156,157,5,19,0,
  	0,157,165,3,30,15,0,158,165,3,18,9,0,159,165,3,20,10,0,160,165,3,22,11,
  	0,161,165,3,24,12,0,162,165,3,26,13,0,163,165,3,28,14,0,164,131,1,0,0,
  	0,164,136,1,0,0,0,164,152,1,0,0,0,164,154,1,0,0,0,164,155,1,0,0,0,164,
  	156,1,0,0,0,164,158,1,0,0,0,164,159,1,0,0,0,164,160,1,0,0,0,164,161,1,
  	0,0,0,164,162,1,0,0,0,164,163,1,0,0,0,165,174,1,0,0,0,166,167,10,11,0,
  	0,167,168,7,3,0,0,168,173,3,16,8,12,169,170,10,10,0,0,170,171,7,2,0,0,
  	171,173,3,16,8,11,172,166,1,0,0,0,172,169,1,0,0,0,173,176,1,0,0,0,174,
  	172,1,0,0,0,174,175,1,0,0,0,175,17,1,0,0,0,176,174,1,0,0,0,177,178,5,
  	10,0,0,178,179,5,11,0,0,179,19,1,0,0,0,180,181,5,10,0,0,181,186,3,16,
  	8,0,182,183,5,5,0,0,183,185,3,16,8,0,184,182,1,0,0,0,185,188,1,0,0,0,
  	186,184,1,0,0,0,186,187,1,0,0,0,187,190,1,0,0,0,188,186,1,0,0,0,189,191,
  	5,5,0,0,190,189,1,0,0,0,190,191,1,0,0,0,191,192,1,0,0,0,192,193,5,11,
  	0,0,193,21,1,0,0,0,194,195,5,10,0,0,195,196,5,27,0,0,196,197,5,7,0,0,
  	197,204,3,16,8,0,198,199,5,5,0,0,199,200,5,27,0,0,200,201,5,7,0,0,201,
  	203,3,16,8,0,202,198,1,0,0,0,203,206,1,0,0,0,204,202,1,0,0,0,204,205,
  	1,0,0,0,205,208,1,0,0,0,206,204,1,0,0,0,207,209,5,5,0,0,208,207,1,0,0,
  	0,208,209,1,0,0,0,209,210,1,0,0,0,210,211,5,11,0,0,211,23,1,0,0,0,212,
  	213,5,12,0,0,213,218,3,16,8,0,214,215,5,5,0,0,215,217,3,16,8,0,216,214,
  	1,0,0,0,217,220,1,0,0,0,218,216,1,0,0,0,218,219,1,0,0,0,219,222,1,0,0,
  	0,220,218,1,0,0,0,221,223,5,5,0,0,222,221,1,0,0,0,222,223,1,0,0,0,223,
  	224,1,0,0,0,224,225,5,13,0,0,225,25,1,0,0,0,226,227,5,12,0,0,227,228,
  	3,16,8,0,228,229,5,7,0,0,229,237,3,16,8,0,230,231,5,5,0,0,231,232,3,16,
  	8,0,232,233,5,7,0,0,233,234,3,16,8,0,234,236,1,0,0,0,235,230,1,0,0,0,
  	236,239,1,0,0,0,237,235,1,0,0,0,237,238,1,0,0,0,238,241,1,0,0,0,239,237,
  	1,0,0,0,240,242,5,5,0,0,241,240,1,0,0,0,241,242,1,0,0,0,242,243,1,0,0,
  	0,243,244,5,13,0,0,244,27,1,0,0,0,245,246,5,14,0,0,246,247,3,42,21,0,
  	247,248,3,4,2,0,248,249,5,15,0,0,249,273,1,0,0,0,250,251,5,14,0,0,251,
  	252,5,10,0,0,252,253,5,27,0,0,253,254,5,7,0,0,254,261,3,30,15,0,255,256,
  	5,5,0,0,256,257,5,27,0,0,257,258,5,7,0,0,258,260,3,30,15,0,259,255,1,
  	0,0,0,260,263,1,0,0,0,261,259,1,0,0,0,261,262,1,0,0,0,262,265,1,0,0,0,
  	263,261,1,0,0,0,264,266,5,5,0,0,265,264,1,0,0,0,265,266,1,0,0,0,266,267,
  	1,0,0,0,267,268,5,11,0,0,268,269,5,9,0,0,269,270,3,16,8,0,270,271,5,15,
  	0,0,271,273,1,0,0,0,272,245,1,0,0,0,272,250,1,0,0,0,273,29,1,0,0,0,274,
  	282,5,27,0,0,275,282,3,32,16,0,276,282,3,34,17,0,277,282,3,36,18,0,278,
  	282,3,38,19,0,279,282,3,40,20,0,280,282,3,42,21,0,281,274,1,0,0,0,281,
  	275,1,0,0,0,281,276,1,0,0,0,281,277,1,0,0,0,281,278,1,0,0,0,281,279,1,
  	0,0,0,281,280,1,0,0,0,282,31,1,0,0,0,283,284,5,10,0,0,284,285,5,11,0,
  	0,285,33,1,0,0,0,286,287,5,10,0,0,287,292,3,30,15,0,288,289,5,5,0,0,289,
  	291,3,30,15,0,290,288,1,0,0,0,291,294,1,0,0,0,292,290,1,0,0,0,292,293,
  	1,0,0,0,293,296,1,0,0,0,294,292,1,0,0,0,295,297,5,5,0,0,296,295,1,0,0,
  	0,296,297,1,0,0,0,297,298,1,0,0,0,298,299,5,11,0,0,299,35,1,0,0,0,300,
  	301,5,10,0,0,301,302,5,27,0,0,302,303,5,7,0,0,303,310,3,30,15,0,304,305,
  	5,5,0,0,305,306,5,27,0,0,306,307,5,7,0,0,307,309,3,30,15,0,308,304,1,
  	0,0,0,309,312,1,0,0,0,310,308,1,0,0,0,310,311,1,0,0,0,311,314,1,0,0,0,
  	312,310,1,0,0,0,313,315,5,5,0,0,314,313,1,0,0,0,314,315,1,0,0,0,315,316,
  	1,0,0,0,316,317,5,11,0,0,317,37,1,0,0,0,318,319,5,12,0,0,319,320,3,30,
  	15,0,320,321,5,13,0,0,321,39,1,0,0,0,322,323,5,12,0,0,323,324,3,30,15,
  	0,324,325,5,7,0,0,325,326,3,30,15,0,326,327,5,13,0,0,327,41,1,0,0,0,328,
  	329,5,10,0,0,329,330,5,27,0,0,330,331,5,7,0,0,331,338,3,30,15,0,332,333,
  	5,5,0,0,333,334,5,27,0,0,334,335,5,7,0,0,335,337,3,30,15,0,336,332,1,
  	0,0,0,337,340,1,0,0,0,338,336,1,0,0,0,338,339,1,0,0,0,339,342,1,0,0,0,
  	340,338,1,0,0,0,341,343,5,5,0,0,342,341,1,0,0,0,342,343,1,0,0,0,343,344,
  	1,0,0,0,344,345,5,11,0,0,345,346,5,9,0,0,346,347,3,30,15,0,347,43,1,0,
  	0,0,35,50,54,56,60,69,74,80,92,97,118,126,143,147,149,164,172,174,186,
  	190,204,208,218,222,237,241,261,265,272,281,292,296,310,314,338,342
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  simplexparserParserStaticData = std::move(staticData);
}

}

SimplexParser::SimplexParser(TokenStream *input) : SimplexParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

SimplexParser::SimplexParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  SimplexParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *simplexparserParserStaticData->atn, simplexparserParserStaticData->decisionToDFA, simplexparserParserStaticData->sharedContextCache, options);
}

SimplexParser::~SimplexParser() {
  delete _interpreter;
}

const atn::ATN& SimplexParser::getATN() const {
  return *simplexparserParserStaticData->atn;
}

std::string SimplexParser::getGrammarFileName() const {
  return "SimplexParser.g4";
}

const std::vector<std::string>& SimplexParser::getRuleNames() const {
  return simplexparserParserStaticData->ruleNames;
}

const dfa::Vocabulary& SimplexParser::getVocabulary() const {
  return simplexparserParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView SimplexParser::getSerializedATN() const {
  return simplexparserParserStaticData->serializedATN;
}


//----------------- ModuleContext ------------------------------------------------------------------

SimplexParser::ModuleContext::ModuleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SimplexParser::DeclContext *> SimplexParser::ModuleContext::decl() {
  return getRuleContexts<SimplexParser::DeclContext>();
}

SimplexParser::DeclContext* SimplexParser::ModuleContext::decl(size_t i) {
  return getRuleContext<SimplexParser::DeclContext>(i);
}

std::vector<SimplexParser::EosContext *> SimplexParser::ModuleContext::eos() {
  return getRuleContexts<SimplexParser::EosContext>();
}

SimplexParser::EosContext* SimplexParser::ModuleContext::eos(size_t i) {
  return getRuleContext<SimplexParser::EosContext>(i);
}


size_t SimplexParser::ModuleContext::getRuleIndex() const {
  return SimplexParser::RuleModule;
}


std::any SimplexParser::ModuleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimplexParserVisitor*>(visitor))
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
    enterOuterAlt(_localctx, 1);
    setState(56);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 458752) != 0)) {
      setState(44);
      decl();
      setState(50);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(45);
          eos();
          setState(46);
          decl(); 
        }
        setState(52);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
      }
      setState(54);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SimplexParser::SEMI

      || _la == SimplexParser::EOS) {
        setState(53);
        eos();
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

//----------------- BlockContext ------------------------------------------------------------------

SimplexParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimplexParser::BlockContext::L_BRACE() {
  return getToken(SimplexParser::L_BRACE, 0);
}

tree::TerminalNode* SimplexParser::BlockContext::R_BRACE() {
  return getToken(SimplexParser::R_BRACE, 0);
}

SimplexParser::StatementsContext* SimplexParser::BlockContext::statements() {
  return getRuleContext<SimplexParser::StatementsContext>(0);
}


size_t SimplexParser::BlockContext::getRuleIndex() const {
  return SimplexParser::RuleBlock;
}


std::any SimplexParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimplexParserVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

SimplexParser::BlockContext* SimplexParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 2, SimplexParser::RuleBlock);
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
    setState(58);
    match(SimplexParser::L_BRACE);
    setState(60);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 123142144) != 0)) {
      setState(59);
      statements();
    }
    setState(62);
    match(SimplexParser::R_BRACE);
   
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

std::vector<SimplexParser::StatementContext *> SimplexParser::StatementsContext::statement() {
  return getRuleContexts<SimplexParser::StatementContext>();
}

SimplexParser::StatementContext* SimplexParser::StatementsContext::statement(size_t i) {
  return getRuleContext<SimplexParser::StatementContext>(i);
}

std::vector<SimplexParser::EosContext *> SimplexParser::StatementsContext::eos() {
  return getRuleContexts<SimplexParser::EosContext>();
}

SimplexParser::EosContext* SimplexParser::StatementsContext::eos(size_t i) {
  return getRuleContext<SimplexParser::EosContext>(i);
}


size_t SimplexParser::StatementsContext::getRuleIndex() const {
  return SimplexParser::RuleStatements;
}


std::any SimplexParser::StatementsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimplexParserVisitor*>(visitor))
    return parserVisitor->visitStatements(this);
  else
    return visitor->visitChildren(this);
}

SimplexParser::StatementsContext* SimplexParser::statements() {
  StatementsContext *_localctx = _tracker.createInstance<StatementsContext>(_ctx, getState());
  enterRule(_localctx, 4, SimplexParser::RuleStatements);
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
    setState(67); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(64);
      statement();
      setState(65);
      eos();
      setState(69); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 123142144) != 0));
   
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

tree::TerminalNode* SimplexParser::StatementContext::RETURN() {
  return getToken(SimplexParser::RETURN, 0);
}

SimplexParser::ExprContext* SimplexParser::StatementContext::expr() {
  return getRuleContext<SimplexParser::ExprContext>(0);
}

tree::TerminalNode* SimplexParser::StatementContext::CONTINUE() {
  return getToken(SimplexParser::CONTINUE, 0);
}

tree::TerminalNode* SimplexParser::StatementContext::BREAK() {
  return getToken(SimplexParser::BREAK, 0);
}

SimplexParser::If_statementContext* SimplexParser::StatementContext::if_statement() {
  return getRuleContext<SimplexParser::If_statementContext>(0);
}

SimplexParser::For_statementContext* SimplexParser::StatementContext::for_statement() {
  return getRuleContext<SimplexParser::For_statementContext>(0);
}


size_t SimplexParser::StatementContext::getRuleIndex() const {
  return SimplexParser::RuleStatement;
}


std::any SimplexParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimplexParserVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

SimplexParser::StatementContext* SimplexParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 6, SimplexParser::RuleStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(80);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SimplexParser::VAR:
      case SimplexParser::CONST:
      case SimplexParser::DEF: {
        enterOuterAlt(_localctx, 1);
        setState(71);
        decl();
        break;
      }

      case SimplexParser::RETURN: {
        enterOuterAlt(_localctx, 2);
        setState(72);
        match(SimplexParser::RETURN);
        setState(74);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 403198982) != 0)) {
          setState(73);
          expr(0);
        }
        break;
      }

      case SimplexParser::CONTINUE: {
        enterOuterAlt(_localctx, 3);
        setState(76);
        match(SimplexParser::CONTINUE);
        break;
      }

      case SimplexParser::BREAK: {
        enterOuterAlt(_localctx, 4);
        setState(77);
        match(SimplexParser::BREAK);
        break;
      }

      case SimplexParser::IF: {
        enterOuterAlt(_localctx, 5);
        setState(78);
        if_statement();
        break;
      }

      case SimplexParser::FOR: {
        enterOuterAlt(_localctx, 6);
        setState(79);
        for_statement();
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

//----------------- If_statementContext ------------------------------------------------------------------

SimplexParser::If_statementContext::If_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SimplexParser::If_statementContext::IF() {
  return getTokens(SimplexParser::IF);
}

tree::TerminalNode* SimplexParser::If_statementContext::IF(size_t i) {
  return getToken(SimplexParser::IF, i);
}

std::vector<SimplexParser::ExprContext *> SimplexParser::If_statementContext::expr() {
  return getRuleContexts<SimplexParser::ExprContext>();
}

SimplexParser::ExprContext* SimplexParser::If_statementContext::expr(size_t i) {
  return getRuleContext<SimplexParser::ExprContext>(i);
}

std::vector<SimplexParser::BlockContext *> SimplexParser::If_statementContext::block() {
  return getRuleContexts<SimplexParser::BlockContext>();
}

SimplexParser::BlockContext* SimplexParser::If_statementContext::block(size_t i) {
  return getRuleContext<SimplexParser::BlockContext>(i);
}

std::vector<tree::TerminalNode *> SimplexParser::If_statementContext::ELSE() {
  return getTokens(SimplexParser::ELSE);
}

tree::TerminalNode* SimplexParser::If_statementContext::ELSE(size_t i) {
  return getToken(SimplexParser::ELSE, i);
}


size_t SimplexParser::If_statementContext::getRuleIndex() const {
  return SimplexParser::RuleIf_statement;
}


std::any SimplexParser::If_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimplexParserVisitor*>(visitor))
    return parserVisitor->visitIf_statement(this);
  else
    return visitor->visitChildren(this);
}

SimplexParser::If_statementContext* SimplexParser::if_statement() {
  If_statementContext *_localctx = _tracker.createInstance<If_statementContext>(_ctx, getState());
  enterRule(_localctx, 8, SimplexParser::RuleIf_statement);
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
    setState(82);
    match(SimplexParser::IF);
    setState(83);
    expr(0);
    setState(84);
    block();
    setState(92);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(85);
        match(SimplexParser::ELSE);
        setState(86);
        match(SimplexParser::IF);
        setState(87);
        expr(0);
        setState(88);
        block(); 
      }
      setState(94);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    }
    setState(97);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SimplexParser::ELSE) {
      setState(95);
      match(SimplexParser::ELSE);
      setState(96);
      block();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- For_statementContext ------------------------------------------------------------------

SimplexParser::For_statementContext::For_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SimplexParser::For_statementContext::getRuleIndex() const {
  return SimplexParser::RuleFor_statement;
}

void SimplexParser::For_statementContext::copyFrom(For_statementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- LoopContext ------------------------------------------------------------------

tree::TerminalNode* SimplexParser::LoopContext::FOR() {
  return getToken(SimplexParser::FOR, 0);
}

tree::TerminalNode* SimplexParser::LoopContext::L_BRACE() {
  return getToken(SimplexParser::L_BRACE, 0);
}

SimplexParser::StatementsContext* SimplexParser::LoopContext::statements() {
  return getRuleContext<SimplexParser::StatementsContext>(0);
}

tree::TerminalNode* SimplexParser::LoopContext::R_BRACE() {
  return getToken(SimplexParser::R_BRACE, 0);
}

SimplexParser::LoopContext::LoopContext(For_statementContext *ctx) { copyFrom(ctx); }


std::any SimplexParser::LoopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimplexParserVisitor*>(visitor))
    return parserVisitor->visitLoop(this);
  else
    return visitor->visitChildren(this);
}
//----------------- For_eachContext ------------------------------------------------------------------

tree::TerminalNode* SimplexParser::For_eachContext::FOR() {
  return getToken(SimplexParser::FOR, 0);
}

tree::TerminalNode* SimplexParser::For_eachContext::ID() {
  return getToken(SimplexParser::ID, 0);
}

tree::TerminalNode* SimplexParser::For_eachContext::IN() {
  return getToken(SimplexParser::IN, 0);
}

SimplexParser::ExprContext* SimplexParser::For_eachContext::expr() {
  return getRuleContext<SimplexParser::ExprContext>(0);
}

tree::TerminalNode* SimplexParser::For_eachContext::L_BRACE() {
  return getToken(SimplexParser::L_BRACE, 0);
}

SimplexParser::StatementsContext* SimplexParser::For_eachContext::statements() {
  return getRuleContext<SimplexParser::StatementsContext>(0);
}

tree::TerminalNode* SimplexParser::For_eachContext::R_BRACE() {
  return getToken(SimplexParser::R_BRACE, 0);
}

SimplexParser::For_eachContext::For_eachContext(For_statementContext *ctx) { copyFrom(ctx); }


std::any SimplexParser::For_eachContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimplexParserVisitor*>(visitor))
    return parserVisitor->visitFor_each(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Conditional_loopContext ------------------------------------------------------------------

tree::TerminalNode* SimplexParser::Conditional_loopContext::FOR() {
  return getToken(SimplexParser::FOR, 0);
}

SimplexParser::ExprContext* SimplexParser::Conditional_loopContext::expr() {
  return getRuleContext<SimplexParser::ExprContext>(0);
}

tree::TerminalNode* SimplexParser::Conditional_loopContext::L_BRACE() {
  return getToken(SimplexParser::L_BRACE, 0);
}

SimplexParser::StatementsContext* SimplexParser::Conditional_loopContext::statements() {
  return getRuleContext<SimplexParser::StatementsContext>(0);
}

tree::TerminalNode* SimplexParser::Conditional_loopContext::R_BRACE() {
  return getToken(SimplexParser::R_BRACE, 0);
}

SimplexParser::Conditional_loopContext::Conditional_loopContext(For_statementContext *ctx) { copyFrom(ctx); }


std::any SimplexParser::Conditional_loopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimplexParserVisitor*>(visitor))
    return parserVisitor->visitConditional_loop(this);
  else
    return visitor->visitChildren(this);
}
SimplexParser::For_statementContext* SimplexParser::for_statement() {
  For_statementContext *_localctx = _tracker.createInstance<For_statementContext>(_ctx, getState());
  enterRule(_localctx, 10, SimplexParser::RuleFor_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(118);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<SimplexParser::LoopContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(99);
      match(SimplexParser::FOR);
      setState(100);
      match(SimplexParser::L_BRACE);
      setState(101);
      statements();
      setState(102);
      match(SimplexParser::R_BRACE);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<SimplexParser::Conditional_loopContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(104);
      match(SimplexParser::FOR);
      setState(105);
      expr(0);
      setState(106);
      match(SimplexParser::L_BRACE);
      setState(107);
      statements();
      setState(108);
      match(SimplexParser::R_BRACE);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<SimplexParser::For_eachContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(110);
      match(SimplexParser::FOR);
      setState(111);
      match(SimplexParser::ID);
      setState(112);
      match(SimplexParser::IN);
      setState(113);
      expr(0);
      setState(114);
      match(SimplexParser::L_BRACE);
      setState(115);
      statements();
      setState(116);
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

//----------------- EosContext ------------------------------------------------------------------

SimplexParser::EosContext::EosContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimplexParser::EosContext::SEMI() {
  return getToken(SimplexParser::SEMI, 0);
}

tree::TerminalNode* SimplexParser::EosContext::EOS() {
  return getToken(SimplexParser::EOS, 0);
}


size_t SimplexParser::EosContext::getRuleIndex() const {
  return SimplexParser::RuleEos;
}


std::any SimplexParser::EosContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimplexParserVisitor*>(visitor))
    return parserVisitor->visitEos(this);
  else
    return visitor->visitChildren(this);
}

SimplexParser::EosContext* SimplexParser::eos() {
  EosContext *_localctx = _tracker.createInstance<EosContext>(_ctx, getState());
  enterRule(_localctx, 12, SimplexParser::RuleEos);
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
    setState(120);
    _la = _input->LA(1);
    if (!(_la == SimplexParser::SEMI

    || _la == SimplexParser::EOS)) {
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
  if (auto parserVisitor = dynamic_cast<SimplexParserVisitor*>(visitor))
    return parserVisitor->visitDecl(this);
  else
    return visitor->visitChildren(this);
}

SimplexParser::DeclContext* SimplexParser::decl() {
  DeclContext *_localctx = _tracker.createInstance<DeclContext>(_ctx, getState());
  enterRule(_localctx, 14, SimplexParser::RuleDecl);
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
    setState(122);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 458752) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(123);
    match(SimplexParser::ID);
    setState(126);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SimplexParser::COLON) {
      setState(124);
      match(SimplexParser::COLON);
      setState(125);
      type_expr();
    }
    setState(128);
    match(SimplexParser::ASSIGN);
    setState(129);
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
  if (auto parserVisitor = dynamic_cast<SimplexParserVisitor*>(visitor))
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
  size_t startState = 16;
  enterRecursionRule(_localctx, 16, SimplexParser::RuleExpr, precedence);

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
    setState(164);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      setState(132);
      match(SimplexParser::L_PAREN);
      setState(133);
      expr(0);
      setState(134);
      match(SimplexParser::R_PAREN);
      break;
    }

    case 2: {
      setState(136);
      match(SimplexParser::ID);
      setState(137);
      match(SimplexParser::L_PAREN);
      setState(149);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 403198982) != 0)) {
        setState(138);
        expr(0);
        setState(143);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(139);
            match(SimplexParser::COMMA);
            setState(140);
            expr(0); 
          }
          setState(145);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
        }
        setState(147);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SimplexParser::COMMA) {
          setState(146);
          match(SimplexParser::COMMA);
        }
      }
      setState(151);
      match(SimplexParser::R_PAREN);
      break;
    }

    case 3: {
      setState(152);
      _la = _input->LA(1);
      if (!(_la == SimplexParser::ADD

      || _la == SimplexParser::SUB)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(153);
      expr(12);
      break;
    }

    case 4: {
      setState(154);
      match(SimplexParser::ID);
      break;
    }

    case 5: {
      setState(155);
      match(SimplexParser::INTEGER);
      break;
    }

    case 6: {
      setState(156);
      match(SimplexParser::TYPE);
      setState(157);
      type_expr();
      break;
    }

    case 7: {
      setState(158);
      expr_void();
      break;
    }

    case 8: {
      setState(159);
      expr_tuple();
      break;
    }

    case 9: {
      setState(160);
      expr_struct();
      break;
    }

    case 10: {
      setState(161);
      expr_array();
      break;
    }

    case 11: {
      setState(162);
      expr_map();
      break;
    }

    case 12: {
      setState(163);
      expr_func();
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(174);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(172);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(166);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(167);
          _la = _input->LA(1);
          if (!(_la == SimplexParser::MUL

          || _la == SimplexParser::DIV)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(168);
          expr(12);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(169);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(170);
          _la = _input->LA(1);
          if (!(_la == SimplexParser::ADD

          || _la == SimplexParser::SUB)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(171);
          expr(11);
          break;
        }

        default:
          break;
        } 
      }
      setState(176);
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
  if (auto parserVisitor = dynamic_cast<SimplexParserVisitor*>(visitor))
    return parserVisitor->visitExpr_void(this);
  else
    return visitor->visitChildren(this);
}

SimplexParser::Expr_voidContext* SimplexParser::expr_void() {
  Expr_voidContext *_localctx = _tracker.createInstance<Expr_voidContext>(_ctx, getState());
  enterRule(_localctx, 18, SimplexParser::RuleExpr_void);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(177);
    match(SimplexParser::L_PAREN);
    setState(178);
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
  if (auto parserVisitor = dynamic_cast<SimplexParserVisitor*>(visitor))
    return parserVisitor->visitExpr_tuple(this);
  else
    return visitor->visitChildren(this);
}

SimplexParser::Expr_tupleContext* SimplexParser::expr_tuple() {
  Expr_tupleContext *_localctx = _tracker.createInstance<Expr_tupleContext>(_ctx, getState());
  enterRule(_localctx, 20, SimplexParser::RuleExpr_tuple);
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
    match(SimplexParser::L_PAREN);
    setState(181);
    expr(0);
    setState(186);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(182);
        match(SimplexParser::COMMA);
        setState(183);
        expr(0); 
      }
      setState(188);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
    }
    setState(190);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SimplexParser::COMMA) {
      setState(189);
      match(SimplexParser::COMMA);
    }
    setState(192);
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
  if (auto parserVisitor = dynamic_cast<SimplexParserVisitor*>(visitor))
    return parserVisitor->visitExpr_struct(this);
  else
    return visitor->visitChildren(this);
}

SimplexParser::Expr_structContext* SimplexParser::expr_struct() {
  Expr_structContext *_localctx = _tracker.createInstance<Expr_structContext>(_ctx, getState());
  enterRule(_localctx, 22, SimplexParser::RuleExpr_struct);
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
    setState(194);
    match(SimplexParser::L_PAREN);
    setState(195);
    match(SimplexParser::ID);
    setState(196);
    match(SimplexParser::COLON);
    setState(197);
    expr(0);
    setState(204);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(198);
        match(SimplexParser::COMMA);
        setState(199);
        match(SimplexParser::ID);
        setState(200);
        match(SimplexParser::COLON);
        setState(201);
        expr(0); 
      }
      setState(206);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
    }
    setState(208);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SimplexParser::COMMA) {
      setState(207);
      match(SimplexParser::COMMA);
    }
    setState(210);
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
  if (auto parserVisitor = dynamic_cast<SimplexParserVisitor*>(visitor))
    return parserVisitor->visitExpr_array(this);
  else
    return visitor->visitChildren(this);
}

SimplexParser::Expr_arrayContext* SimplexParser::expr_array() {
  Expr_arrayContext *_localctx = _tracker.createInstance<Expr_arrayContext>(_ctx, getState());
  enterRule(_localctx, 24, SimplexParser::RuleExpr_array);
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
    setState(212);
    match(SimplexParser::L_BRACKET);
    setState(213);
    expr(0);
    setState(218);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(214);
        match(SimplexParser::COMMA);
        setState(215);
        expr(0); 
      }
      setState(220);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    }
    setState(222);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SimplexParser::COMMA) {
      setState(221);
      match(SimplexParser::COMMA);
    }
    setState(224);
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
  if (auto parserVisitor = dynamic_cast<SimplexParserVisitor*>(visitor))
    return parserVisitor->visitExpr_map(this);
  else
    return visitor->visitChildren(this);
}

SimplexParser::Expr_mapContext* SimplexParser::expr_map() {
  Expr_mapContext *_localctx = _tracker.createInstance<Expr_mapContext>(_ctx, getState());
  enterRule(_localctx, 26, SimplexParser::RuleExpr_map);
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
    setState(226);
    match(SimplexParser::L_BRACKET);
    setState(227);
    expr(0);
    setState(228);
    match(SimplexParser::COLON);
    setState(229);
    expr(0);
    setState(237);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(230);
        match(SimplexParser::COMMA);
        setState(231);
        expr(0);
        setState(232);
        match(SimplexParser::COLON);
        setState(233);
        expr(0); 
      }
      setState(239);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
    }
    setState(241);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SimplexParser::COMMA) {
      setState(240);
      match(SimplexParser::COMMA);
    }
    setState(243);
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
  if (auto parserVisitor = dynamic_cast<SimplexParserVisitor*>(visitor))
    return parserVisitor->visitExpr_func(this);
  else
    return visitor->visitChildren(this);
}

SimplexParser::Expr_funcContext* SimplexParser::expr_func() {
  Expr_funcContext *_localctx = _tracker.createInstance<Expr_funcContext>(_ctx, getState());
  enterRule(_localctx, 28, SimplexParser::RuleExpr_func);
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
    setState(272);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(245);
      match(SimplexParser::L_BRACE);
      setState(246);
      type_func();
      setState(247);
      statements();
      setState(248);
      match(SimplexParser::R_BRACE);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(250);
      match(SimplexParser::L_BRACE);
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
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
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
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
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
      setState(268);
      match(SimplexParser::ARROW);
      setState(269);
      expr(0);
      setState(270);
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
  if (auto parserVisitor = dynamic_cast<SimplexParserVisitor*>(visitor))
    return parserVisitor->visitType_expr(this);
  else
    return visitor->visitChildren(this);
}

SimplexParser::Type_exprContext* SimplexParser::type_expr() {
  Type_exprContext *_localctx = _tracker.createInstance<Type_exprContext>(_ctx, getState());
  enterRule(_localctx, 30, SimplexParser::RuleType_expr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(281);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(274);
      match(SimplexParser::ID);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(275);
      type_void();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(276);
      type_tuple();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(277);
      type_struct();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(278);
      type_array();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(279);
      type_map();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(280);
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
  if (auto parserVisitor = dynamic_cast<SimplexParserVisitor*>(visitor))
    return parserVisitor->visitType_void(this);
  else
    return visitor->visitChildren(this);
}

SimplexParser::Type_voidContext* SimplexParser::type_void() {
  Type_voidContext *_localctx = _tracker.createInstance<Type_voidContext>(_ctx, getState());
  enterRule(_localctx, 32, SimplexParser::RuleType_void);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(283);
    match(SimplexParser::L_PAREN);
    setState(284);
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
  if (auto parserVisitor = dynamic_cast<SimplexParserVisitor*>(visitor))
    return parserVisitor->visitType_tuple(this);
  else
    return visitor->visitChildren(this);
}

SimplexParser::Type_tupleContext* SimplexParser::type_tuple() {
  Type_tupleContext *_localctx = _tracker.createInstance<Type_tupleContext>(_ctx, getState());
  enterRule(_localctx, 34, SimplexParser::RuleType_tuple);
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
    setState(286);
    match(SimplexParser::L_PAREN);
    setState(287);
    type_expr();
    setState(292);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(288);
        match(SimplexParser::COMMA);
        setState(289);
        type_expr(); 
      }
      setState(294);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx);
    }
    setState(296);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SimplexParser::COMMA) {
      setState(295);
      match(SimplexParser::COMMA);
    }
    setState(298);
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
  if (auto parserVisitor = dynamic_cast<SimplexParserVisitor*>(visitor))
    return parserVisitor->visitType_struct(this);
  else
    return visitor->visitChildren(this);
}

SimplexParser::Type_structContext* SimplexParser::type_struct() {
  Type_structContext *_localctx = _tracker.createInstance<Type_structContext>(_ctx, getState());
  enterRule(_localctx, 36, SimplexParser::RuleType_struct);
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
    setState(300);
    match(SimplexParser::L_PAREN);
    setState(301);
    match(SimplexParser::ID);
    setState(302);
    match(SimplexParser::COLON);
    setState(303);
    type_expr();
    setState(310);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(304);
        match(SimplexParser::COMMA);
        setState(305);
        match(SimplexParser::ID);
        setState(306);
        match(SimplexParser::COLON);
        setState(307);
        type_expr(); 
      }
      setState(312);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
    }
    setState(314);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SimplexParser::COMMA) {
      setState(313);
      match(SimplexParser::COMMA);
    }
    setState(316);
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
  if (auto parserVisitor = dynamic_cast<SimplexParserVisitor*>(visitor))
    return parserVisitor->visitType_array(this);
  else
    return visitor->visitChildren(this);
}

SimplexParser::Type_arrayContext* SimplexParser::type_array() {
  Type_arrayContext *_localctx = _tracker.createInstance<Type_arrayContext>(_ctx, getState());
  enterRule(_localctx, 38, SimplexParser::RuleType_array);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(318);
    match(SimplexParser::L_BRACKET);
    setState(319);
    type_expr();
    setState(320);
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
  if (auto parserVisitor = dynamic_cast<SimplexParserVisitor*>(visitor))
    return parserVisitor->visitType_map(this);
  else
    return visitor->visitChildren(this);
}

SimplexParser::Type_mapContext* SimplexParser::type_map() {
  Type_mapContext *_localctx = _tracker.createInstance<Type_mapContext>(_ctx, getState());
  enterRule(_localctx, 40, SimplexParser::RuleType_map);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(322);
    match(SimplexParser::L_BRACKET);
    setState(323);
    type_expr();
    setState(324);
    match(SimplexParser::COLON);
    setState(325);
    type_expr();
    setState(326);
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
  if (auto parserVisitor = dynamic_cast<SimplexParserVisitor*>(visitor))
    return parserVisitor->visitType_func(this);
  else
    return visitor->visitChildren(this);
}

SimplexParser::Type_funcContext* SimplexParser::type_func() {
  Type_funcContext *_localctx = _tracker.createInstance<Type_funcContext>(_ctx, getState());
  enterRule(_localctx, 42, SimplexParser::RuleType_func);
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
    setState(328);
    match(SimplexParser::L_PAREN);
    setState(329);
    match(SimplexParser::ID);
    setState(330);
    match(SimplexParser::COLON);
    setState(331);
    type_expr();
    setState(338);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(332);
        match(SimplexParser::COMMA);
        setState(333);
        match(SimplexParser::ID);
        setState(334);
        match(SimplexParser::COLON);
        setState(335);
        type_expr(); 
      }
      setState(340);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx);
    }
    setState(342);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SimplexParser::COMMA) {
      setState(341);
      match(SimplexParser::COMMA);
    }
    setState(344);
    match(SimplexParser::R_PAREN);
    setState(345);
    match(SimplexParser::ARROW);
    setState(346);
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
    case 8: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

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
  simplexparserParserInitialize();
#else
  ::antlr4::internal::call_once(simplexparserParserOnceFlag, simplexparserParserInitialize);
#endif
}
