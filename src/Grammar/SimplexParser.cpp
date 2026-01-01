
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
  	4,1,40,346,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,1,0,1,0,1,0,1,0,5,0,49,8,0,10,0,12,0,52,9,0,3,0,54,8,0,1,1,1,1,3,1,
  	58,8,1,1,1,1,1,1,2,1,2,1,2,4,2,65,8,2,11,2,12,2,66,1,3,1,3,1,3,3,3,72,
  	8,3,1,3,1,3,1,3,1,3,3,3,78,8,3,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,5,4,88,
  	8,4,10,4,12,4,91,9,4,1,4,1,4,3,4,95,8,4,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,
  	5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,3,5,116,8,5,1,6,1,6,1,7,
  	1,7,1,7,1,7,3,7,124,8,7,1,7,1,7,1,7,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,
  	8,1,8,5,8,139,8,8,10,8,12,8,142,9,8,1,8,3,8,145,8,8,3,8,147,8,8,1,8,1,
  	8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,3,8,162,8,8,1,8,1,8,1,8,
  	1,8,1,8,1,8,5,8,170,8,8,10,8,12,8,173,9,8,1,9,1,9,1,9,1,10,1,10,1,10,
  	1,10,5,10,182,8,10,10,10,12,10,185,9,10,1,10,3,10,188,8,10,1,10,1,10,
  	1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,5,11,200,8,11,10,11,12,11,203,
  	9,11,1,11,3,11,206,8,11,1,11,1,11,1,12,1,12,1,12,1,12,5,12,214,8,12,10,
  	12,12,12,217,9,12,1,12,3,12,220,8,12,1,12,1,12,1,13,1,13,1,13,1,13,1,
  	13,1,13,1,13,1,13,1,13,5,13,233,8,13,10,13,12,13,236,9,13,1,13,3,13,239,
  	8,13,1,13,1,13,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,
  	1,14,1,14,1,14,5,14,257,8,14,10,14,12,14,260,9,14,1,14,3,14,263,8,14,
  	1,14,1,14,1,14,1,14,1,14,3,14,270,8,14,1,15,1,15,1,15,1,15,1,15,1,15,
  	1,15,3,15,279,8,15,1,16,1,16,1,16,1,17,1,17,1,17,1,17,5,17,288,8,17,10,
  	17,12,17,291,9,17,1,17,3,17,294,8,17,1,17,1,17,1,18,1,18,1,18,1,18,1,
  	18,1,18,1,18,1,18,5,18,306,8,18,10,18,12,18,309,9,18,1,18,3,18,312,8,
  	18,1,18,1,18,1,19,1,19,1,19,1,19,1,20,1,20,1,20,1,20,1,20,1,20,1,21,1,
  	21,1,21,1,21,1,21,1,21,1,21,1,21,5,21,334,8,21,10,21,12,21,337,9,21,1,
  	21,3,21,340,8,21,1,21,1,21,1,21,1,21,1,21,0,1,16,22,0,2,4,6,8,10,12,14,
  	16,18,20,22,24,26,28,30,32,34,36,38,40,42,0,4,2,0,6,6,39,39,1,0,16,18,
  	1,0,1,2,1,0,3,4,377,0,53,1,0,0,0,2,55,1,0,0,0,4,64,1,0,0,0,6,77,1,0,0,
  	0,8,79,1,0,0,0,10,115,1,0,0,0,12,117,1,0,0,0,14,119,1,0,0,0,16,161,1,
  	0,0,0,18,174,1,0,0,0,20,177,1,0,0,0,22,191,1,0,0,0,24,209,1,0,0,0,26,
  	223,1,0,0,0,28,269,1,0,0,0,30,278,1,0,0,0,32,280,1,0,0,0,34,283,1,0,0,
  	0,36,297,1,0,0,0,38,315,1,0,0,0,40,319,1,0,0,0,42,325,1,0,0,0,44,50,3,
  	14,7,0,45,46,3,12,6,0,46,47,3,14,7,0,47,49,1,0,0,0,48,45,1,0,0,0,49,52,
  	1,0,0,0,50,48,1,0,0,0,50,51,1,0,0,0,51,54,1,0,0,0,52,50,1,0,0,0,53,44,
  	1,0,0,0,53,54,1,0,0,0,54,1,1,0,0,0,55,57,5,14,0,0,56,58,3,4,2,0,57,56,
  	1,0,0,0,57,58,1,0,0,0,58,59,1,0,0,0,59,60,5,15,0,0,60,3,1,0,0,0,61,62,
  	3,6,3,0,62,63,3,12,6,0,63,65,1,0,0,0,64,61,1,0,0,0,65,66,1,0,0,0,66,64,
  	1,0,0,0,66,67,1,0,0,0,67,5,1,0,0,0,68,78,3,14,7,0,69,71,5,26,0,0,70,72,
  	3,16,8,0,71,70,1,0,0,0,71,72,1,0,0,0,72,78,1,0,0,0,73,78,5,24,0,0,74,
  	78,5,25,0,0,75,78,3,8,4,0,76,78,3,10,5,0,77,68,1,0,0,0,77,69,1,0,0,0,
  	77,73,1,0,0,0,77,74,1,0,0,0,77,75,1,0,0,0,77,76,1,0,0,0,78,7,1,0,0,0,
  	79,80,5,20,0,0,80,81,3,16,8,0,81,89,3,2,1,0,82,83,5,21,0,0,83,84,5,20,
  	0,0,84,85,3,16,8,0,85,86,3,2,1,0,86,88,1,0,0,0,87,82,1,0,0,0,88,91,1,
  	0,0,0,89,87,1,0,0,0,89,90,1,0,0,0,90,94,1,0,0,0,91,89,1,0,0,0,92,93,5,
  	21,0,0,93,95,3,2,1,0,94,92,1,0,0,0,94,95,1,0,0,0,95,9,1,0,0,0,96,97,5,
  	22,0,0,97,98,5,14,0,0,98,99,3,4,2,0,99,100,5,15,0,0,100,116,1,0,0,0,101,
  	102,5,22,0,0,102,103,3,16,8,0,103,104,5,14,0,0,104,105,3,4,2,0,105,106,
  	5,15,0,0,106,116,1,0,0,0,107,108,5,22,0,0,108,109,5,27,0,0,109,110,5,
  	23,0,0,110,111,3,16,8,0,111,112,5,14,0,0,112,113,3,4,2,0,113,114,5,15,
  	0,0,114,116,1,0,0,0,115,96,1,0,0,0,115,101,1,0,0,0,115,107,1,0,0,0,116,
  	11,1,0,0,0,117,118,7,0,0,0,118,13,1,0,0,0,119,120,7,1,0,0,120,123,5,27,
  	0,0,121,122,5,7,0,0,122,124,3,30,15,0,123,121,1,0,0,0,123,124,1,0,0,0,
  	124,125,1,0,0,0,125,126,5,8,0,0,126,127,3,16,8,0,127,15,1,0,0,0,128,129,
  	6,8,-1,0,129,130,5,10,0,0,130,131,3,16,8,0,131,132,5,11,0,0,132,162,1,
  	0,0,0,133,134,5,27,0,0,134,146,5,10,0,0,135,140,3,16,8,0,136,137,5,5,
  	0,0,137,139,3,16,8,0,138,136,1,0,0,0,139,142,1,0,0,0,140,138,1,0,0,0,
  	140,141,1,0,0,0,141,144,1,0,0,0,142,140,1,0,0,0,143,145,5,5,0,0,144,143,
  	1,0,0,0,144,145,1,0,0,0,145,147,1,0,0,0,146,135,1,0,0,0,146,147,1,0,0,
  	0,147,148,1,0,0,0,148,162,5,11,0,0,149,150,7,2,0,0,150,162,3,16,8,12,
  	151,162,5,27,0,0,152,162,5,28,0,0,153,154,5,19,0,0,154,162,3,30,15,0,
  	155,162,3,18,9,0,156,162,3,20,10,0,157,162,3,22,11,0,158,162,3,24,12,
  	0,159,162,3,26,13,0,160,162,3,28,14,0,161,128,1,0,0,0,161,133,1,0,0,0,
  	161,149,1,0,0,0,161,151,1,0,0,0,161,152,1,0,0,0,161,153,1,0,0,0,161,155,
  	1,0,0,0,161,156,1,0,0,0,161,157,1,0,0,0,161,158,1,0,0,0,161,159,1,0,0,
  	0,161,160,1,0,0,0,162,171,1,0,0,0,163,164,10,11,0,0,164,165,7,3,0,0,165,
  	170,3,16,8,12,166,167,10,10,0,0,167,168,7,2,0,0,168,170,3,16,8,11,169,
  	163,1,0,0,0,169,166,1,0,0,0,170,173,1,0,0,0,171,169,1,0,0,0,171,172,1,
  	0,0,0,172,17,1,0,0,0,173,171,1,0,0,0,174,175,5,10,0,0,175,176,5,11,0,
  	0,176,19,1,0,0,0,177,178,5,10,0,0,178,183,3,16,8,0,179,180,5,5,0,0,180,
  	182,3,16,8,0,181,179,1,0,0,0,182,185,1,0,0,0,183,181,1,0,0,0,183,184,
  	1,0,0,0,184,187,1,0,0,0,185,183,1,0,0,0,186,188,5,5,0,0,187,186,1,0,0,
  	0,187,188,1,0,0,0,188,189,1,0,0,0,189,190,5,11,0,0,190,21,1,0,0,0,191,
  	192,5,10,0,0,192,193,5,27,0,0,193,194,5,7,0,0,194,201,3,16,8,0,195,196,
  	5,5,0,0,196,197,5,27,0,0,197,198,5,7,0,0,198,200,3,16,8,0,199,195,1,0,
  	0,0,200,203,1,0,0,0,201,199,1,0,0,0,201,202,1,0,0,0,202,205,1,0,0,0,203,
  	201,1,0,0,0,204,206,5,5,0,0,205,204,1,0,0,0,205,206,1,0,0,0,206,207,1,
  	0,0,0,207,208,5,11,0,0,208,23,1,0,0,0,209,210,5,12,0,0,210,215,3,16,8,
  	0,211,212,5,5,0,0,212,214,3,16,8,0,213,211,1,0,0,0,214,217,1,0,0,0,215,
  	213,1,0,0,0,215,216,1,0,0,0,216,219,1,0,0,0,217,215,1,0,0,0,218,220,5,
  	5,0,0,219,218,1,0,0,0,219,220,1,0,0,0,220,221,1,0,0,0,221,222,5,13,0,
  	0,222,25,1,0,0,0,223,224,5,12,0,0,224,225,3,16,8,0,225,226,5,7,0,0,226,
  	234,3,16,8,0,227,228,5,5,0,0,228,229,3,16,8,0,229,230,5,7,0,0,230,231,
  	3,16,8,0,231,233,1,0,0,0,232,227,1,0,0,0,233,236,1,0,0,0,234,232,1,0,
  	0,0,234,235,1,0,0,0,235,238,1,0,0,0,236,234,1,0,0,0,237,239,5,5,0,0,238,
  	237,1,0,0,0,238,239,1,0,0,0,239,240,1,0,0,0,240,241,5,13,0,0,241,27,1,
  	0,0,0,242,243,5,14,0,0,243,244,3,42,21,0,244,245,3,4,2,0,245,246,5,15,
  	0,0,246,270,1,0,0,0,247,248,5,14,0,0,248,249,5,10,0,0,249,250,5,27,0,
  	0,250,251,5,7,0,0,251,258,3,30,15,0,252,253,5,5,0,0,253,254,5,27,0,0,
  	254,255,5,7,0,0,255,257,3,30,15,0,256,252,1,0,0,0,257,260,1,0,0,0,258,
  	256,1,0,0,0,258,259,1,0,0,0,259,262,1,0,0,0,260,258,1,0,0,0,261,263,5,
  	5,0,0,262,261,1,0,0,0,262,263,1,0,0,0,263,264,1,0,0,0,264,265,5,11,0,
  	0,265,266,5,9,0,0,266,267,3,16,8,0,267,268,5,15,0,0,268,270,1,0,0,0,269,
  	242,1,0,0,0,269,247,1,0,0,0,270,29,1,0,0,0,271,279,5,27,0,0,272,279,3,
  	32,16,0,273,279,3,34,17,0,274,279,3,36,18,0,275,279,3,38,19,0,276,279,
  	3,40,20,0,277,279,3,42,21,0,278,271,1,0,0,0,278,272,1,0,0,0,278,273,1,
  	0,0,0,278,274,1,0,0,0,278,275,1,0,0,0,278,276,1,0,0,0,278,277,1,0,0,0,
  	279,31,1,0,0,0,280,281,5,10,0,0,281,282,5,11,0,0,282,33,1,0,0,0,283,284,
  	5,10,0,0,284,289,3,30,15,0,285,286,5,5,0,0,286,288,3,30,15,0,287,285,
  	1,0,0,0,288,291,1,0,0,0,289,287,1,0,0,0,289,290,1,0,0,0,290,293,1,0,0,
  	0,291,289,1,0,0,0,292,294,5,5,0,0,293,292,1,0,0,0,293,294,1,0,0,0,294,
  	295,1,0,0,0,295,296,5,11,0,0,296,35,1,0,0,0,297,298,5,10,0,0,298,299,
  	5,27,0,0,299,300,5,7,0,0,300,307,3,30,15,0,301,302,5,5,0,0,302,303,5,
  	27,0,0,303,304,5,7,0,0,304,306,3,30,15,0,305,301,1,0,0,0,306,309,1,0,
  	0,0,307,305,1,0,0,0,307,308,1,0,0,0,308,311,1,0,0,0,309,307,1,0,0,0,310,
  	312,5,5,0,0,311,310,1,0,0,0,311,312,1,0,0,0,312,313,1,0,0,0,313,314,5,
  	11,0,0,314,37,1,0,0,0,315,316,5,12,0,0,316,317,3,30,15,0,317,318,5,13,
  	0,0,318,39,1,0,0,0,319,320,5,12,0,0,320,321,3,30,15,0,321,322,5,7,0,0,
  	322,323,3,30,15,0,323,324,5,13,0,0,324,41,1,0,0,0,325,326,5,10,0,0,326,
  	327,5,27,0,0,327,328,5,7,0,0,328,335,3,30,15,0,329,330,5,5,0,0,330,331,
  	5,27,0,0,331,332,5,7,0,0,332,334,3,30,15,0,333,329,1,0,0,0,334,337,1,
  	0,0,0,335,333,1,0,0,0,335,336,1,0,0,0,336,339,1,0,0,0,337,335,1,0,0,0,
  	338,340,5,5,0,0,339,338,1,0,0,0,339,340,1,0,0,0,340,341,1,0,0,0,341,342,
  	5,11,0,0,342,343,5,9,0,0,343,344,3,30,15,0,344,43,1,0,0,0,34,50,53,57,
  	66,71,77,89,94,115,123,140,144,146,161,169,171,183,187,201,205,215,219,
  	234,238,258,262,269,278,289,293,307,311,335,339
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
    enterOuterAlt(_localctx, 1);
    setState(53);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 458752) != 0)) {
      setState(44);
      decl();
      setState(50);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SimplexParser::SEMI

      || _la == SimplexParser::EOS) {
        setState(45);
        eos();
        setState(46);
        decl();
        setState(52);
        _errHandler->sync(this);
        _la = _input->LA(1);
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
    setState(55);
    match(SimplexParser::L_BRACE);
    setState(57);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 123142144) != 0)) {
      setState(56);
      statements();
    }
    setState(59);
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
    setState(64); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(61);
      statement();
      setState(62);
      eos();
      setState(66); 
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
    setState(77);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SimplexParser::VAR:
      case SimplexParser::CONST:
      case SimplexParser::DEF: {
        enterOuterAlt(_localctx, 1);
        setState(68);
        decl();
        break;
      }

      case SimplexParser::RETURN: {
        enterOuterAlt(_localctx, 2);
        setState(69);
        match(SimplexParser::RETURN);
        setState(71);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 403198982) != 0)) {
          setState(70);
          expr(0);
        }
        break;
      }

      case SimplexParser::CONTINUE: {
        enterOuterAlt(_localctx, 3);
        setState(73);
        match(SimplexParser::CONTINUE);
        break;
      }

      case SimplexParser::BREAK: {
        enterOuterAlt(_localctx, 4);
        setState(74);
        match(SimplexParser::BREAK);
        break;
      }

      case SimplexParser::IF: {
        enterOuterAlt(_localctx, 5);
        setState(75);
        if_statement();
        break;
      }

      case SimplexParser::FOR: {
        enterOuterAlt(_localctx, 6);
        setState(76);
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
    setState(79);
    match(SimplexParser::IF);
    setState(80);
    expr(0);
    setState(81);
    block();
    setState(89);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(82);
        match(SimplexParser::ELSE);
        setState(83);
        match(SimplexParser::IF);
        setState(84);
        expr(0);
        setState(85);
        block(); 
      }
      setState(91);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    }
    setState(94);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SimplexParser::ELSE) {
      setState(92);
      match(SimplexParser::ELSE);
      setState(93);
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
    setState(115);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<SimplexParser::LoopContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(96);
      match(SimplexParser::FOR);
      setState(97);
      match(SimplexParser::L_BRACE);
      setState(98);
      statements();
      setState(99);
      match(SimplexParser::R_BRACE);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<SimplexParser::Conditional_loopContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(101);
      match(SimplexParser::FOR);
      setState(102);
      expr(0);
      setState(103);
      match(SimplexParser::L_BRACE);
      setState(104);
      statements();
      setState(105);
      match(SimplexParser::R_BRACE);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<SimplexParser::For_eachContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(107);
      match(SimplexParser::FOR);
      setState(108);
      match(SimplexParser::ID);
      setState(109);
      match(SimplexParser::IN);
      setState(110);
      expr(0);
      setState(111);
      match(SimplexParser::L_BRACE);
      setState(112);
      statements();
      setState(113);
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
    setState(117);
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
    setState(119);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 458752) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(120);
    match(SimplexParser::ID);
    setState(123);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SimplexParser::COLON) {
      setState(121);
      match(SimplexParser::COLON);
      setState(122);
      type_expr();
    }
    setState(125);
    match(SimplexParser::ASSIGN);
    setState(126);
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
    setState(161);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      setState(129);
      match(SimplexParser::L_PAREN);
      setState(130);
      expr(0);
      setState(131);
      match(SimplexParser::R_PAREN);
      break;
    }

    case 2: {
      setState(133);
      match(SimplexParser::ID);
      setState(134);
      match(SimplexParser::L_PAREN);
      setState(146);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 403198982) != 0)) {
        setState(135);
        expr(0);
        setState(140);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(136);
            match(SimplexParser::COMMA);
            setState(137);
            expr(0); 
          }
          setState(142);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
        }
        setState(144);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SimplexParser::COMMA) {
          setState(143);
          match(SimplexParser::COMMA);
        }
      }
      setState(148);
      match(SimplexParser::R_PAREN);
      break;
    }

    case 3: {
      setState(149);
      _la = _input->LA(1);
      if (!(_la == SimplexParser::ADD

      || _la == SimplexParser::SUB)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(150);
      expr(12);
      break;
    }

    case 4: {
      setState(151);
      match(SimplexParser::ID);
      break;
    }

    case 5: {
      setState(152);
      match(SimplexParser::INTEGER);
      break;
    }

    case 6: {
      setState(153);
      match(SimplexParser::TYPE);
      setState(154);
      type_expr();
      break;
    }

    case 7: {
      setState(155);
      expr_void();
      break;
    }

    case 8: {
      setState(156);
      expr_tuple();
      break;
    }

    case 9: {
      setState(157);
      expr_struct();
      break;
    }

    case 10: {
      setState(158);
      expr_array();
      break;
    }

    case 11: {
      setState(159);
      expr_map();
      break;
    }

    case 12: {
      setState(160);
      expr_func();
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(171);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(169);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(163);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(164);
          _la = _input->LA(1);
          if (!(_la == SimplexParser::MUL

          || _la == SimplexParser::DIV)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(165);
          expr(12);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(166);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(167);
          _la = _input->LA(1);
          if (!(_la == SimplexParser::ADD

          || _la == SimplexParser::SUB)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(168);
          expr(11);
          break;
        }

        default:
          break;
        } 
      }
      setState(173);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
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
    setState(174);
    match(SimplexParser::L_PAREN);
    setState(175);
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
    setState(177);
    match(SimplexParser::L_PAREN);
    setState(178);
    expr(0);
    setState(183);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(179);
        match(SimplexParser::COMMA);
        setState(180);
        expr(0); 
      }
      setState(185);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    }
    setState(187);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SimplexParser::COMMA) {
      setState(186);
      match(SimplexParser::COMMA);
    }
    setState(189);
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
    setState(191);
    match(SimplexParser::L_PAREN);
    setState(192);
    match(SimplexParser::ID);
    setState(193);
    match(SimplexParser::COLON);
    setState(194);
    expr(0);
    setState(201);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(195);
        match(SimplexParser::COMMA);
        setState(196);
        match(SimplexParser::ID);
        setState(197);
        match(SimplexParser::COLON);
        setState(198);
        expr(0); 
      }
      setState(203);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    }
    setState(205);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SimplexParser::COMMA) {
      setState(204);
      match(SimplexParser::COMMA);
    }
    setState(207);
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
    setState(209);
    match(SimplexParser::L_BRACKET);
    setState(210);
    expr(0);
    setState(215);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(211);
        match(SimplexParser::COMMA);
        setState(212);
        expr(0); 
      }
      setState(217);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    }
    setState(219);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SimplexParser::COMMA) {
      setState(218);
      match(SimplexParser::COMMA);
    }
    setState(221);
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
    setState(223);
    match(SimplexParser::L_BRACKET);
    setState(224);
    expr(0);
    setState(225);
    match(SimplexParser::COLON);
    setState(226);
    expr(0);
    setState(234);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(227);
        match(SimplexParser::COMMA);
        setState(228);
        expr(0);
        setState(229);
        match(SimplexParser::COLON);
        setState(230);
        expr(0); 
      }
      setState(236);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    }
    setState(238);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SimplexParser::COMMA) {
      setState(237);
      match(SimplexParser::COMMA);
    }
    setState(240);
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
    setState(269);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(242);
      match(SimplexParser::L_BRACE);
      setState(243);
      type_func();
      setState(244);
      statements();
      setState(245);
      match(SimplexParser::R_BRACE);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(247);
      match(SimplexParser::L_BRACE);
      setState(248);
      match(SimplexParser::L_PAREN);
      setState(249);
      match(SimplexParser::ID);
      setState(250);
      match(SimplexParser::COLON);
      setState(251);
      type_expr();
      setState(258);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(252);
          match(SimplexParser::COMMA);
          setState(253);
          match(SimplexParser::ID);
          setState(254);
          match(SimplexParser::COLON);
          setState(255);
          type_expr(); 
        }
        setState(260);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
      }
      setState(262);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SimplexParser::COMMA) {
        setState(261);
        match(SimplexParser::COMMA);
      }
      setState(264);
      match(SimplexParser::R_PAREN);
      setState(265);
      match(SimplexParser::ARROW);
      setState(266);
      expr(0);
      setState(267);
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
    setState(278);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(271);
      match(SimplexParser::ID);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(272);
      type_void();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(273);
      type_tuple();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(274);
      type_struct();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(275);
      type_array();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(276);
      type_map();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(277);
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
    setState(280);
    match(SimplexParser::L_PAREN);
    setState(281);
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
    setState(283);
    match(SimplexParser::L_PAREN);
    setState(284);
    type_expr();
    setState(289);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(285);
        match(SimplexParser::COMMA);
        setState(286);
        type_expr(); 
      }
      setState(291);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
    }
    setState(293);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SimplexParser::COMMA) {
      setState(292);
      match(SimplexParser::COMMA);
    }
    setState(295);
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
    setState(297);
    match(SimplexParser::L_PAREN);
    setState(298);
    match(SimplexParser::ID);
    setState(299);
    match(SimplexParser::COLON);
    setState(300);
    type_expr();
    setState(307);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(301);
        match(SimplexParser::COMMA);
        setState(302);
        match(SimplexParser::ID);
        setState(303);
        match(SimplexParser::COLON);
        setState(304);
        type_expr(); 
      }
      setState(309);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx);
    }
    setState(311);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SimplexParser::COMMA) {
      setState(310);
      match(SimplexParser::COMMA);
    }
    setState(313);
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
    setState(315);
    match(SimplexParser::L_BRACKET);
    setState(316);
    type_expr();
    setState(317);
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
    setState(319);
    match(SimplexParser::L_BRACKET);
    setState(320);
    type_expr();
    setState(321);
    match(SimplexParser::COLON);
    setState(322);
    type_expr();
    setState(323);
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
    setState(325);
    match(SimplexParser::L_PAREN);
    setState(326);
    match(SimplexParser::ID);
    setState(327);
    match(SimplexParser::COLON);
    setState(328);
    type_expr();
    setState(335);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(329);
        match(SimplexParser::COMMA);
        setState(330);
        match(SimplexParser::ID);
        setState(331);
        match(SimplexParser::COLON);
        setState(332);
        type_expr(); 
      }
      setState(337);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx);
    }
    setState(339);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SimplexParser::COMMA) {
      setState(338);
      match(SimplexParser::COMMA);
    }
    setState(341);
    match(SimplexParser::R_PAREN);
    setState(342);
    match(SimplexParser::ARROW);
    setState(343);
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
