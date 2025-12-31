// Generated from src/Grammar/Simplex.g4 by ANTLR 4.13.2
package sx::grammar;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast", "CheckReturnValue", "this-escape"})
public class SimplexParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.13.2", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		L_PAREN=1, R_PAREN=2, L_BRACKET=3, R_BRACKET=4, L_BRACE=5, R_BRACE=6, 
		COLON=7, COMMA=8, ASSIGN=9, ARROW=10, ADD=11, SUB=12, MUL=13, DIV=14, 
		VAR=15, CONST=16, DEF=17, TYPE=18, ID=19, INTEGER=20, NEWLINE=21, WHITESPACE=22;
	public static final int
		RULE_module = 0, RULE_statements = 1, RULE_statement = 2, RULE_decl = 3, 
		RULE_expr = 4, RULE_expr_void = 5, RULE_expr_tuple = 6, RULE_expr_struct = 7, 
		RULE_expr_array = 8, RULE_expr_map = 9, RULE_expr_func = 10, RULE_type_expr = 11, 
		RULE_type_void = 12, RULE_type_tuple = 13, RULE_type_struct = 14, RULE_type_array = 15, 
		RULE_type_map = 16, RULE_type_func = 17;
	private static String[] makeRuleNames() {
		return new String[] {
			"module", "statements", "statement", "decl", "expr", "expr_void", "expr_tuple", 
			"expr_struct", "expr_array", "expr_map", "expr_func", "type_expr", "type_void", 
			"type_tuple", "type_struct", "type_array", "type_map", "type_func"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'('", "')'", "'['", "']'", "'{'", "'}'", "':'", "','", "'='", 
			"'=>'", "'+'", "'-'", "'*'", "'/'", "'var'", "'const'", "'def'", "'type'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "L_PAREN", "R_PAREN", "L_BRACKET", "R_BRACKET", "L_BRACE", "R_BRACE", 
			"COLON", "COMMA", "ASSIGN", "ARROW", "ADD", "SUB", "MUL", "DIV", "VAR", 
			"CONST", "DEF", "TYPE", "ID", "INTEGER", "NEWLINE", "WHITESPACE"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "Simplex.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public SimplexParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ModuleContext extends ParserRuleContext {
		public List<TerminalNode> NEWLINE() { return getTokens(SimplexParser.NEWLINE); }
		public TerminalNode NEWLINE(int i) {
			return getToken(SimplexParser.NEWLINE, i);
		}
		public List<DeclContext> decl() {
			return getRuleContexts(DeclContext.class);
		}
		public DeclContext decl(int i) {
			return getRuleContext(DeclContext.class,i);
		}
		public ModuleContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_module; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof SimplexVisitor ) return ((SimplexVisitor<? extends T>)visitor).visitModule(this);
			else return visitor.visitChildren(this);
		}
	}

	public final ModuleContext module() throws RecognitionException {
		ModuleContext _localctx = new ModuleContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_module);
		int _la;
		try {
			int _alt;
			setState(53);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,4,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(37);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==NEWLINE) {
					{
					setState(36);
					match(NEWLINE);
					}
				}

				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(40);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==NEWLINE) {
					{
					setState(39);
					match(NEWLINE);
					}
				}

				setState(42);
				decl();
				setState(47);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,2,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(43);
						match(NEWLINE);
						setState(44);
						decl();
						}
						} 
					}
					setState(49);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,2,_ctx);
				}
				setState(51);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==NEWLINE) {
					{
					setState(50);
					match(NEWLINE);
					}
				}

				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class StatementsContext extends ParserRuleContext {
		public List<TerminalNode> NEWLINE() { return getTokens(SimplexParser.NEWLINE); }
		public TerminalNode NEWLINE(int i) {
			return getToken(SimplexParser.NEWLINE, i);
		}
		public List<StatementContext> statement() {
			return getRuleContexts(StatementContext.class);
		}
		public StatementContext statement(int i) {
			return getRuleContext(StatementContext.class,i);
		}
		public StatementsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_statements; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof SimplexVisitor ) return ((SimplexVisitor<? extends T>)visitor).visitStatements(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StatementsContext statements() throws RecognitionException {
		StatementsContext _localctx = new StatementsContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_statements);
		int _la;
		try {
			int _alt;
			setState(72);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,9,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(56);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==NEWLINE) {
					{
					setState(55);
					match(NEWLINE);
					}
				}

				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(59);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==NEWLINE) {
					{
					setState(58);
					match(NEWLINE);
					}
				}

				setState(61);
				statement();
				setState(66);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,7,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(62);
						match(NEWLINE);
						setState(63);
						statement();
						}
						} 
					}
					setState(68);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,7,_ctx);
				}
				setState(70);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==NEWLINE) {
					{
					setState(69);
					match(NEWLINE);
					}
				}

				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class StatementContext extends ParserRuleContext {
		public DeclContext decl() {
			return getRuleContext(DeclContext.class,0);
		}
		public StatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_statement; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof SimplexVisitor ) return ((SimplexVisitor<? extends T>)visitor).visitStatement(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StatementContext statement() throws RecognitionException {
		StatementContext _localctx = new StatementContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_statement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(74);
			decl();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class DeclContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(SimplexParser.ID, 0); }
		public TerminalNode ASSIGN() { return getToken(SimplexParser.ASSIGN, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public TerminalNode DEF() { return getToken(SimplexParser.DEF, 0); }
		public TerminalNode VAR() { return getToken(SimplexParser.VAR, 0); }
		public TerminalNode CONST() { return getToken(SimplexParser.CONST, 0); }
		public TerminalNode COLON() { return getToken(SimplexParser.COLON, 0); }
		public Type_exprContext type_expr() {
			return getRuleContext(Type_exprContext.class,0);
		}
		public DeclContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_decl; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof SimplexVisitor ) return ((SimplexVisitor<? extends T>)visitor).visitDecl(this);
			else return visitor.visitChildren(this);
		}
	}

	public final DeclContext decl() throws RecognitionException {
		DeclContext _localctx = new DeclContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_decl);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(76);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 229376L) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(77);
			match(ID);
			setState(80);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==COLON) {
				{
				setState(78);
				match(COLON);
				setState(79);
				type_expr();
				}
			}

			setState(82);
			match(ASSIGN);
			setState(83);
			expr(0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ExprContext extends ParserRuleContext {
		public TerminalNode L_PAREN() { return getToken(SimplexParser.L_PAREN, 0); }
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public TerminalNode R_PAREN() { return getToken(SimplexParser.R_PAREN, 0); }
		public TerminalNode ID() { return getToken(SimplexParser.ID, 0); }
		public List<TerminalNode> COMMA() { return getTokens(SimplexParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(SimplexParser.COMMA, i);
		}
		public TerminalNode ADD() { return getToken(SimplexParser.ADD, 0); }
		public TerminalNode SUB() { return getToken(SimplexParser.SUB, 0); }
		public TerminalNode INTEGER() { return getToken(SimplexParser.INTEGER, 0); }
		public TerminalNode TYPE() { return getToken(SimplexParser.TYPE, 0); }
		public Type_exprContext type_expr() {
			return getRuleContext(Type_exprContext.class,0);
		}
		public Expr_voidContext expr_void() {
			return getRuleContext(Expr_voidContext.class,0);
		}
		public Expr_tupleContext expr_tuple() {
			return getRuleContext(Expr_tupleContext.class,0);
		}
		public Expr_structContext expr_struct() {
			return getRuleContext(Expr_structContext.class,0);
		}
		public Expr_arrayContext expr_array() {
			return getRuleContext(Expr_arrayContext.class,0);
		}
		public Expr_mapContext expr_map() {
			return getRuleContext(Expr_mapContext.class,0);
		}
		public Expr_funcContext expr_func() {
			return getRuleContext(Expr_funcContext.class,0);
		}
		public TerminalNode MUL() { return getToken(SimplexParser.MUL, 0); }
		public TerminalNode DIV() { return getToken(SimplexParser.DIV, 0); }
		public ExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expr; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof SimplexVisitor ) return ((SimplexVisitor<? extends T>)visitor).visitExpr(this);
			else return visitor.visitChildren(this);
		}
	}

	public final ExprContext expr() throws RecognitionException {
		return expr(0);
	}

	private ExprContext expr(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ExprContext _localctx = new ExprContext(_ctx, _parentState);
		ExprContext _prevctx = _localctx;
		int _startState = 8;
		enterRecursionRule(_localctx, 8, RULE_expr, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(118);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,14,_ctx) ) {
			case 1:
				{
				setState(86);
				match(L_PAREN);
				setState(87);
				expr(0);
				setState(88);
				match(R_PAREN);
				}
				break;
			case 2:
				{
				setState(90);
				match(ID);
				setState(91);
				match(L_PAREN);
				setState(103);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 1841194L) != 0)) {
					{
					setState(92);
					expr(0);
					setState(97);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,11,_ctx);
					while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
						if ( _alt==1 ) {
							{
							{
							setState(93);
							match(COMMA);
							setState(94);
							expr(0);
							}
							} 
						}
						setState(99);
						_errHandler.sync(this);
						_alt = getInterpreter().adaptivePredict(_input,11,_ctx);
					}
					setState(101);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if (_la==COMMA) {
						{
						setState(100);
						match(COMMA);
						}
					}

					}
				}

				setState(105);
				match(R_PAREN);
				}
				break;
			case 3:
				{
				setState(106);
				_la = _input.LA(1);
				if ( !(_la==ADD || _la==SUB) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(107);
				expr(12);
				}
				break;
			case 4:
				{
				setState(108);
				match(ID);
				}
				break;
			case 5:
				{
				setState(109);
				match(INTEGER);
				}
				break;
			case 6:
				{
				setState(110);
				match(TYPE);
				setState(111);
				type_expr();
				}
				break;
			case 7:
				{
				setState(112);
				expr_void();
				}
				break;
			case 8:
				{
				setState(113);
				expr_tuple();
				}
				break;
			case 9:
				{
				setState(114);
				expr_struct();
				}
				break;
			case 10:
				{
				setState(115);
				expr_array();
				}
				break;
			case 11:
				{
				setState(116);
				expr_map();
				}
				break;
			case 12:
				{
				setState(117);
				expr_func();
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(128);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,16,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(126);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,15,_ctx) ) {
					case 1:
						{
						_localctx = new ExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(120);
						if (!(precpred(_ctx, 11))) throw new FailedPredicateException(this, "precpred(_ctx, 11)");
						setState(121);
						_la = _input.LA(1);
						if ( !(_la==MUL || _la==DIV) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(122);
						expr(12);
						}
						break;
					case 2:
						{
						_localctx = new ExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(123);
						if (!(precpred(_ctx, 10))) throw new FailedPredicateException(this, "precpred(_ctx, 10)");
						setState(124);
						_la = _input.LA(1);
						if ( !(_la==ADD || _la==SUB) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(125);
						expr(11);
						}
						break;
					}
					} 
				}
				setState(130);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,16,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Expr_voidContext extends ParserRuleContext {
		public TerminalNode L_PAREN() { return getToken(SimplexParser.L_PAREN, 0); }
		public TerminalNode R_PAREN() { return getToken(SimplexParser.R_PAREN, 0); }
		public Expr_voidContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expr_void; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof SimplexVisitor ) return ((SimplexVisitor<? extends T>)visitor).visitExpr_void(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Expr_voidContext expr_void() throws RecognitionException {
		Expr_voidContext _localctx = new Expr_voidContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_expr_void);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(131);
			match(L_PAREN);
			setState(132);
			match(R_PAREN);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Expr_tupleContext extends ParserRuleContext {
		public TerminalNode L_PAREN() { return getToken(SimplexParser.L_PAREN, 0); }
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public TerminalNode R_PAREN() { return getToken(SimplexParser.R_PAREN, 0); }
		public List<TerminalNode> COMMA() { return getTokens(SimplexParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(SimplexParser.COMMA, i);
		}
		public Expr_tupleContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expr_tuple; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof SimplexVisitor ) return ((SimplexVisitor<? extends T>)visitor).visitExpr_tuple(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Expr_tupleContext expr_tuple() throws RecognitionException {
		Expr_tupleContext _localctx = new Expr_tupleContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_expr_tuple);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(134);
			match(L_PAREN);
			setState(135);
			expr(0);
			setState(140);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,17,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(136);
					match(COMMA);
					setState(137);
					expr(0);
					}
					} 
				}
				setState(142);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,17,_ctx);
			}
			setState(144);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==COMMA) {
				{
				setState(143);
				match(COMMA);
				}
			}

			setState(146);
			match(R_PAREN);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Expr_structContext extends ParserRuleContext {
		public TerminalNode L_PAREN() { return getToken(SimplexParser.L_PAREN, 0); }
		public List<TerminalNode> ID() { return getTokens(SimplexParser.ID); }
		public TerminalNode ID(int i) {
			return getToken(SimplexParser.ID, i);
		}
		public List<TerminalNode> COLON() { return getTokens(SimplexParser.COLON); }
		public TerminalNode COLON(int i) {
			return getToken(SimplexParser.COLON, i);
		}
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public TerminalNode R_PAREN() { return getToken(SimplexParser.R_PAREN, 0); }
		public List<TerminalNode> COMMA() { return getTokens(SimplexParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(SimplexParser.COMMA, i);
		}
		public Expr_structContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expr_struct; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof SimplexVisitor ) return ((SimplexVisitor<? extends T>)visitor).visitExpr_struct(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Expr_structContext expr_struct() throws RecognitionException {
		Expr_structContext _localctx = new Expr_structContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_expr_struct);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(148);
			match(L_PAREN);
			setState(149);
			match(ID);
			setState(150);
			match(COLON);
			setState(151);
			expr(0);
			setState(158);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,19,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(152);
					match(COMMA);
					setState(153);
					match(ID);
					setState(154);
					match(COLON);
					setState(155);
					expr(0);
					}
					} 
				}
				setState(160);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,19,_ctx);
			}
			setState(162);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==COMMA) {
				{
				setState(161);
				match(COMMA);
				}
			}

			setState(164);
			match(R_PAREN);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Expr_arrayContext extends ParserRuleContext {
		public TerminalNode L_BRACKET() { return getToken(SimplexParser.L_BRACKET, 0); }
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public TerminalNode R_BRACKET() { return getToken(SimplexParser.R_BRACKET, 0); }
		public List<TerminalNode> COMMA() { return getTokens(SimplexParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(SimplexParser.COMMA, i);
		}
		public Expr_arrayContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expr_array; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof SimplexVisitor ) return ((SimplexVisitor<? extends T>)visitor).visitExpr_array(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Expr_arrayContext expr_array() throws RecognitionException {
		Expr_arrayContext _localctx = new Expr_arrayContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_expr_array);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(166);
			match(L_BRACKET);
			setState(167);
			expr(0);
			setState(172);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,21,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(168);
					match(COMMA);
					setState(169);
					expr(0);
					}
					} 
				}
				setState(174);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,21,_ctx);
			}
			setState(176);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==COMMA) {
				{
				setState(175);
				match(COMMA);
				}
			}

			setState(178);
			match(R_BRACKET);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Expr_mapContext extends ParserRuleContext {
		public TerminalNode L_BRACKET() { return getToken(SimplexParser.L_BRACKET, 0); }
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public List<TerminalNode> COLON() { return getTokens(SimplexParser.COLON); }
		public TerminalNode COLON(int i) {
			return getToken(SimplexParser.COLON, i);
		}
		public TerminalNode R_BRACKET() { return getToken(SimplexParser.R_BRACKET, 0); }
		public List<TerminalNode> COMMA() { return getTokens(SimplexParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(SimplexParser.COMMA, i);
		}
		public Expr_mapContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expr_map; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof SimplexVisitor ) return ((SimplexVisitor<? extends T>)visitor).visitExpr_map(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Expr_mapContext expr_map() throws RecognitionException {
		Expr_mapContext _localctx = new Expr_mapContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_expr_map);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(180);
			match(L_BRACKET);
			setState(181);
			expr(0);
			setState(182);
			match(COLON);
			setState(183);
			expr(0);
			setState(191);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,23,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(184);
					match(COMMA);
					setState(185);
					expr(0);
					setState(186);
					match(COLON);
					setState(187);
					expr(0);
					}
					} 
				}
				setState(193);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,23,_ctx);
			}
			setState(195);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==COMMA) {
				{
				setState(194);
				match(COMMA);
				}
			}

			setState(197);
			match(R_BRACKET);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Expr_funcContext extends ParserRuleContext {
		public TerminalNode L_BRACE() { return getToken(SimplexParser.L_BRACE, 0); }
		public Type_funcContext type_func() {
			return getRuleContext(Type_funcContext.class,0);
		}
		public TerminalNode NEWLINE() { return getToken(SimplexParser.NEWLINE, 0); }
		public StatementsContext statements() {
			return getRuleContext(StatementsContext.class,0);
		}
		public TerminalNode R_BRACE() { return getToken(SimplexParser.R_BRACE, 0); }
		public TerminalNode L_PAREN() { return getToken(SimplexParser.L_PAREN, 0); }
		public List<TerminalNode> ID() { return getTokens(SimplexParser.ID); }
		public TerminalNode ID(int i) {
			return getToken(SimplexParser.ID, i);
		}
		public List<TerminalNode> COLON() { return getTokens(SimplexParser.COLON); }
		public TerminalNode COLON(int i) {
			return getToken(SimplexParser.COLON, i);
		}
		public List<Type_exprContext> type_expr() {
			return getRuleContexts(Type_exprContext.class);
		}
		public Type_exprContext type_expr(int i) {
			return getRuleContext(Type_exprContext.class,i);
		}
		public TerminalNode R_PAREN() { return getToken(SimplexParser.R_PAREN, 0); }
		public TerminalNode ARROW() { return getToken(SimplexParser.ARROW, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public List<TerminalNode> COMMA() { return getTokens(SimplexParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(SimplexParser.COMMA, i);
		}
		public Expr_funcContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expr_func; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof SimplexVisitor ) return ((SimplexVisitor<? extends T>)visitor).visitExpr_func(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Expr_funcContext expr_func() throws RecognitionException {
		Expr_funcContext _localctx = new Expr_funcContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_expr_func);
		int _la;
		try {
			int _alt;
			setState(227);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,27,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(199);
				match(L_BRACE);
				setState(200);
				type_func();
				setState(201);
				match(NEWLINE);
				setState(202);
				statements();
				setState(203);
				match(R_BRACE);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(205);
				match(L_BRACE);
				setState(206);
				match(L_PAREN);
				setState(207);
				match(ID);
				setState(208);
				match(COLON);
				setState(209);
				type_expr();
				setState(216);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,25,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(210);
						match(COMMA);
						setState(211);
						match(ID);
						setState(212);
						match(COLON);
						setState(213);
						type_expr();
						}
						} 
					}
					setState(218);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,25,_ctx);
				}
				setState(220);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==COMMA) {
					{
					setState(219);
					match(COMMA);
					}
				}

				setState(222);
				match(R_PAREN);
				setState(223);
				match(ARROW);
				setState(224);
				expr(0);
				setState(225);
				match(R_BRACE);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Type_exprContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(SimplexParser.ID, 0); }
		public Type_voidContext type_void() {
			return getRuleContext(Type_voidContext.class,0);
		}
		public Type_tupleContext type_tuple() {
			return getRuleContext(Type_tupleContext.class,0);
		}
		public Type_structContext type_struct() {
			return getRuleContext(Type_structContext.class,0);
		}
		public Type_arrayContext type_array() {
			return getRuleContext(Type_arrayContext.class,0);
		}
		public Type_mapContext type_map() {
			return getRuleContext(Type_mapContext.class,0);
		}
		public Type_funcContext type_func() {
			return getRuleContext(Type_funcContext.class,0);
		}
		public Type_exprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_type_expr; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof SimplexVisitor ) return ((SimplexVisitor<? extends T>)visitor).visitType_expr(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Type_exprContext type_expr() throws RecognitionException {
		Type_exprContext _localctx = new Type_exprContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_type_expr);
		try {
			setState(236);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,28,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(229);
				match(ID);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(230);
				type_void();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(231);
				type_tuple();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(232);
				type_struct();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(233);
				type_array();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(234);
				type_map();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(235);
				type_func();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Type_voidContext extends ParserRuleContext {
		public TerminalNode L_PAREN() { return getToken(SimplexParser.L_PAREN, 0); }
		public TerminalNode R_PAREN() { return getToken(SimplexParser.R_PAREN, 0); }
		public Type_voidContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_type_void; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof SimplexVisitor ) return ((SimplexVisitor<? extends T>)visitor).visitType_void(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Type_voidContext type_void() throws RecognitionException {
		Type_voidContext _localctx = new Type_voidContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_type_void);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(238);
			match(L_PAREN);
			setState(239);
			match(R_PAREN);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Type_tupleContext extends ParserRuleContext {
		public TerminalNode L_PAREN() { return getToken(SimplexParser.L_PAREN, 0); }
		public List<Type_exprContext> type_expr() {
			return getRuleContexts(Type_exprContext.class);
		}
		public Type_exprContext type_expr(int i) {
			return getRuleContext(Type_exprContext.class,i);
		}
		public TerminalNode R_PAREN() { return getToken(SimplexParser.R_PAREN, 0); }
		public List<TerminalNode> COMMA() { return getTokens(SimplexParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(SimplexParser.COMMA, i);
		}
		public Type_tupleContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_type_tuple; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof SimplexVisitor ) return ((SimplexVisitor<? extends T>)visitor).visitType_tuple(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Type_tupleContext type_tuple() throws RecognitionException {
		Type_tupleContext _localctx = new Type_tupleContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_type_tuple);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(241);
			match(L_PAREN);
			setState(242);
			type_expr();
			setState(247);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,29,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(243);
					match(COMMA);
					setState(244);
					type_expr();
					}
					} 
				}
				setState(249);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,29,_ctx);
			}
			setState(251);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==COMMA) {
				{
				setState(250);
				match(COMMA);
				}
			}

			setState(253);
			match(R_PAREN);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Type_structContext extends ParserRuleContext {
		public TerminalNode L_PAREN() { return getToken(SimplexParser.L_PAREN, 0); }
		public List<TerminalNode> ID() { return getTokens(SimplexParser.ID); }
		public TerminalNode ID(int i) {
			return getToken(SimplexParser.ID, i);
		}
		public List<TerminalNode> COLON() { return getTokens(SimplexParser.COLON); }
		public TerminalNode COLON(int i) {
			return getToken(SimplexParser.COLON, i);
		}
		public List<Type_exprContext> type_expr() {
			return getRuleContexts(Type_exprContext.class);
		}
		public Type_exprContext type_expr(int i) {
			return getRuleContext(Type_exprContext.class,i);
		}
		public TerminalNode R_PAREN() { return getToken(SimplexParser.R_PAREN, 0); }
		public List<TerminalNode> COMMA() { return getTokens(SimplexParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(SimplexParser.COMMA, i);
		}
		public Type_structContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_type_struct; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof SimplexVisitor ) return ((SimplexVisitor<? extends T>)visitor).visitType_struct(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Type_structContext type_struct() throws RecognitionException {
		Type_structContext _localctx = new Type_structContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_type_struct);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(255);
			match(L_PAREN);
			setState(256);
			match(ID);
			setState(257);
			match(COLON);
			setState(258);
			type_expr();
			setState(265);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,31,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(259);
					match(COMMA);
					setState(260);
					match(ID);
					setState(261);
					match(COLON);
					setState(262);
					type_expr();
					}
					} 
				}
				setState(267);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,31,_ctx);
			}
			setState(269);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==COMMA) {
				{
				setState(268);
				match(COMMA);
				}
			}

			setState(271);
			match(R_PAREN);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Type_arrayContext extends ParserRuleContext {
		public TerminalNode L_BRACKET() { return getToken(SimplexParser.L_BRACKET, 0); }
		public Type_exprContext type_expr() {
			return getRuleContext(Type_exprContext.class,0);
		}
		public TerminalNode R_BRACKET() { return getToken(SimplexParser.R_BRACKET, 0); }
		public Type_arrayContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_type_array; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof SimplexVisitor ) return ((SimplexVisitor<? extends T>)visitor).visitType_array(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Type_arrayContext type_array() throws RecognitionException {
		Type_arrayContext _localctx = new Type_arrayContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_type_array);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(273);
			match(L_BRACKET);
			setState(274);
			type_expr();
			setState(275);
			match(R_BRACKET);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Type_mapContext extends ParserRuleContext {
		public TerminalNode L_BRACKET() { return getToken(SimplexParser.L_BRACKET, 0); }
		public List<Type_exprContext> type_expr() {
			return getRuleContexts(Type_exprContext.class);
		}
		public Type_exprContext type_expr(int i) {
			return getRuleContext(Type_exprContext.class,i);
		}
		public TerminalNode COLON() { return getToken(SimplexParser.COLON, 0); }
		public TerminalNode R_BRACKET() { return getToken(SimplexParser.R_BRACKET, 0); }
		public Type_mapContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_type_map; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof SimplexVisitor ) return ((SimplexVisitor<? extends T>)visitor).visitType_map(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Type_mapContext type_map() throws RecognitionException {
		Type_mapContext _localctx = new Type_mapContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_type_map);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(277);
			match(L_BRACKET);
			setState(278);
			type_expr();
			setState(279);
			match(COLON);
			setState(280);
			type_expr();
			setState(281);
			match(R_BRACKET);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Type_funcContext extends ParserRuleContext {
		public TerminalNode L_PAREN() { return getToken(SimplexParser.L_PAREN, 0); }
		public List<TerminalNode> ID() { return getTokens(SimplexParser.ID); }
		public TerminalNode ID(int i) {
			return getToken(SimplexParser.ID, i);
		}
		public List<TerminalNode> COLON() { return getTokens(SimplexParser.COLON); }
		public TerminalNode COLON(int i) {
			return getToken(SimplexParser.COLON, i);
		}
		public List<Type_exprContext> type_expr() {
			return getRuleContexts(Type_exprContext.class);
		}
		public Type_exprContext type_expr(int i) {
			return getRuleContext(Type_exprContext.class,i);
		}
		public TerminalNode R_PAREN() { return getToken(SimplexParser.R_PAREN, 0); }
		public TerminalNode ARROW() { return getToken(SimplexParser.ARROW, 0); }
		public List<TerminalNode> COMMA() { return getTokens(SimplexParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(SimplexParser.COMMA, i);
		}
		public Type_funcContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_type_func; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof SimplexVisitor ) return ((SimplexVisitor<? extends T>)visitor).visitType_func(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Type_funcContext type_func() throws RecognitionException {
		Type_funcContext _localctx = new Type_funcContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_type_func);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(283);
			match(L_PAREN);
			setState(284);
			match(ID);
			setState(285);
			match(COLON);
			setState(286);
			type_expr();
			setState(293);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,33,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(287);
					match(COMMA);
					setState(288);
					match(ID);
					setState(289);
					match(COLON);
					setState(290);
					type_expr();
					}
					} 
				}
				setState(295);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,33,_ctx);
			}
			setState(297);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==COMMA) {
				{
				setState(296);
				match(COMMA);
				}
			}

			setState(299);
			match(R_PAREN);
			setState(300);
			match(ARROW);
			setState(301);
			type_expr();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public boolean sempred(RuleContext _localctx, int ruleIndex, int predIndex) {
		switch (ruleIndex) {
		case 4:
			return expr_sempred((ExprContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean expr_sempred(ExprContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0:
			return precpred(_ctx, 11);
		case 1:
			return precpred(_ctx, 10);
		}
		return true;
	}

	public static final String _serializedATN =
		"\u0004\u0001\u0016\u0130\u0002\u0000\u0007\u0000\u0002\u0001\u0007\u0001"+
		"\u0002\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004\u0007\u0004"+
		"\u0002\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002\u0007\u0007\u0007"+
		"\u0002\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002\u000b\u0007\u000b"+
		"\u0002\f\u0007\f\u0002\r\u0007\r\u0002\u000e\u0007\u000e\u0002\u000f\u0007"+
		"\u000f\u0002\u0010\u0007\u0010\u0002\u0011\u0007\u0011\u0001\u0000\u0003"+
		"\u0000&\b\u0000\u0001\u0000\u0003\u0000)\b\u0000\u0001\u0000\u0001\u0000"+
		"\u0001\u0000\u0005\u0000.\b\u0000\n\u0000\f\u00001\t\u0000\u0001\u0000"+
		"\u0003\u00004\b\u0000\u0003\u00006\b\u0000\u0001\u0001\u0003\u00019\b"+
		"\u0001\u0001\u0001\u0003\u0001<\b\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0005\u0001A\b\u0001\n\u0001\f\u0001D\t\u0001\u0001\u0001\u0003"+
		"\u0001G\b\u0001\u0003\u0001I\b\u0001\u0001\u0002\u0001\u0002\u0001\u0003"+
		"\u0001\u0003\u0001\u0003\u0001\u0003\u0003\u0003Q\b\u0003\u0001\u0003"+
		"\u0001\u0003\u0001\u0003\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004"+
		"\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004"+
		"\u0005\u0004`\b\u0004\n\u0004\f\u0004c\t\u0004\u0001\u0004\u0003\u0004"+
		"f\b\u0004\u0003\u0004h\b\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001"+
		"\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001"+
		"\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0003\u0004w\b\u0004\u0001"+
		"\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0005"+
		"\u0004\u007f\b\u0004\n\u0004\f\u0004\u0082\t\u0004\u0001\u0005\u0001\u0005"+
		"\u0001\u0005\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006\u0005\u0006"+
		"\u008b\b\u0006\n\u0006\f\u0006\u008e\t\u0006\u0001\u0006\u0003\u0006\u0091"+
		"\b\u0006\u0001\u0006\u0001\u0006\u0001\u0007\u0001\u0007\u0001\u0007\u0001"+
		"\u0007\u0001\u0007\u0001\u0007\u0001\u0007\u0001\u0007\u0005\u0007\u009d"+
		"\b\u0007\n\u0007\f\u0007\u00a0\t\u0007\u0001\u0007\u0003\u0007\u00a3\b"+
		"\u0007\u0001\u0007\u0001\u0007\u0001\b\u0001\b\u0001\b\u0001\b\u0005\b"+
		"\u00ab\b\b\n\b\f\b\u00ae\t\b\u0001\b\u0003\b\u00b1\b\b\u0001\b\u0001\b"+
		"\u0001\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001"+
		"\t\u0005\t\u00be\b\t\n\t\f\t\u00c1\t\t\u0001\t\u0003\t\u00c4\b\t\u0001"+
		"\t\u0001\t\u0001\n\u0001\n\u0001\n\u0001\n\u0001\n\u0001\n\u0001\n\u0001"+
		"\n\u0001\n\u0001\n\u0001\n\u0001\n\u0001\n\u0001\n\u0001\n\u0005\n\u00d7"+
		"\b\n\n\n\f\n\u00da\t\n\u0001\n\u0003\n\u00dd\b\n\u0001\n\u0001\n\u0001"+
		"\n\u0001\n\u0001\n\u0003\n\u00e4\b\n\u0001\u000b\u0001\u000b\u0001\u000b"+
		"\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0003\u000b\u00ed\b\u000b"+
		"\u0001\f\u0001\f\u0001\f\u0001\r\u0001\r\u0001\r\u0001\r\u0005\r\u00f6"+
		"\b\r\n\r\f\r\u00f9\t\r\u0001\r\u0003\r\u00fc\b\r\u0001\r\u0001\r\u0001"+
		"\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0001"+
		"\u000e\u0001\u000e\u0005\u000e\u0108\b\u000e\n\u000e\f\u000e\u010b\t\u000e"+
		"\u0001\u000e\u0003\u000e\u010e\b\u000e\u0001\u000e\u0001\u000e\u0001\u000f"+
		"\u0001\u000f\u0001\u000f\u0001\u000f\u0001\u0010\u0001\u0010\u0001\u0010"+
		"\u0001\u0010\u0001\u0010\u0001\u0010\u0001\u0011\u0001\u0011\u0001\u0011"+
		"\u0001\u0011\u0001\u0011\u0001\u0011\u0001\u0011\u0001\u0011\u0005\u0011"+
		"\u0124\b\u0011\n\u0011\f\u0011\u0127\t\u0011\u0001\u0011\u0003\u0011\u012a"+
		"\b\u0011\u0001\u0011\u0001\u0011\u0001\u0011\u0001\u0011\u0001\u0011\u0000"+
		"\u0001\b\u0012\u0000\u0002\u0004\u0006\b\n\f\u000e\u0010\u0012\u0014\u0016"+
		"\u0018\u001a\u001c\u001e \"\u0000\u0003\u0001\u0000\u000f\u0011\u0001"+
		"\u0000\u000b\f\u0001\u0000\r\u000e\u014f\u00005\u0001\u0000\u0000\u0000"+
		"\u0002H\u0001\u0000\u0000\u0000\u0004J\u0001\u0000\u0000\u0000\u0006L"+
		"\u0001\u0000\u0000\u0000\bv\u0001\u0000\u0000\u0000\n\u0083\u0001\u0000"+
		"\u0000\u0000\f\u0086\u0001\u0000\u0000\u0000\u000e\u0094\u0001\u0000\u0000"+
		"\u0000\u0010\u00a6\u0001\u0000\u0000\u0000\u0012\u00b4\u0001\u0000\u0000"+
		"\u0000\u0014\u00e3\u0001\u0000\u0000\u0000\u0016\u00ec\u0001\u0000\u0000"+
		"\u0000\u0018\u00ee\u0001\u0000\u0000\u0000\u001a\u00f1\u0001\u0000\u0000"+
		"\u0000\u001c\u00ff\u0001\u0000\u0000\u0000\u001e\u0111\u0001\u0000\u0000"+
		"\u0000 \u0115\u0001\u0000\u0000\u0000\"\u011b\u0001\u0000\u0000\u0000"+
		"$&\u0005\u0015\u0000\u0000%$\u0001\u0000\u0000\u0000%&\u0001\u0000\u0000"+
		"\u0000&6\u0001\u0000\u0000\u0000\')\u0005\u0015\u0000\u0000(\'\u0001\u0000"+
		"\u0000\u0000()\u0001\u0000\u0000\u0000)*\u0001\u0000\u0000\u0000*/\u0003"+
		"\u0006\u0003\u0000+,\u0005\u0015\u0000\u0000,.\u0003\u0006\u0003\u0000"+
		"-+\u0001\u0000\u0000\u0000.1\u0001\u0000\u0000\u0000/-\u0001\u0000\u0000"+
		"\u0000/0\u0001\u0000\u0000\u000003\u0001\u0000\u0000\u00001/\u0001\u0000"+
		"\u0000\u000024\u0005\u0015\u0000\u000032\u0001\u0000\u0000\u000034\u0001"+
		"\u0000\u0000\u000046\u0001\u0000\u0000\u00005%\u0001\u0000\u0000\u0000"+
		"5(\u0001\u0000\u0000\u00006\u0001\u0001\u0000\u0000\u000079\u0005\u0015"+
		"\u0000\u000087\u0001\u0000\u0000\u000089\u0001\u0000\u0000\u00009I\u0001"+
		"\u0000\u0000\u0000:<\u0005\u0015\u0000\u0000;:\u0001\u0000\u0000\u0000"+
		";<\u0001\u0000\u0000\u0000<=\u0001\u0000\u0000\u0000=B\u0003\u0004\u0002"+
		"\u0000>?\u0005\u0015\u0000\u0000?A\u0003\u0004\u0002\u0000@>\u0001\u0000"+
		"\u0000\u0000AD\u0001\u0000\u0000\u0000B@\u0001\u0000\u0000\u0000BC\u0001"+
		"\u0000\u0000\u0000CF\u0001\u0000\u0000\u0000DB\u0001\u0000\u0000\u0000"+
		"EG\u0005\u0015\u0000\u0000FE\u0001\u0000\u0000\u0000FG\u0001\u0000\u0000"+
		"\u0000GI\u0001\u0000\u0000\u0000H8\u0001\u0000\u0000\u0000H;\u0001\u0000"+
		"\u0000\u0000I\u0003\u0001\u0000\u0000\u0000JK\u0003\u0006\u0003\u0000"+
		"K\u0005\u0001\u0000\u0000\u0000LM\u0007\u0000\u0000\u0000MP\u0005\u0013"+
		"\u0000\u0000NO\u0005\u0007\u0000\u0000OQ\u0003\u0016\u000b\u0000PN\u0001"+
		"\u0000\u0000\u0000PQ\u0001\u0000\u0000\u0000QR\u0001\u0000\u0000\u0000"+
		"RS\u0005\t\u0000\u0000ST\u0003\b\u0004\u0000T\u0007\u0001\u0000\u0000"+
		"\u0000UV\u0006\u0004\uffff\uffff\u0000VW\u0005\u0001\u0000\u0000WX\u0003"+
		"\b\u0004\u0000XY\u0005\u0002\u0000\u0000Yw\u0001\u0000\u0000\u0000Z[\u0005"+
		"\u0013\u0000\u0000[g\u0005\u0001\u0000\u0000\\a\u0003\b\u0004\u0000]^"+
		"\u0005\b\u0000\u0000^`\u0003\b\u0004\u0000_]\u0001\u0000\u0000\u0000`"+
		"c\u0001\u0000\u0000\u0000a_\u0001\u0000\u0000\u0000ab\u0001\u0000\u0000"+
		"\u0000be\u0001\u0000\u0000\u0000ca\u0001\u0000\u0000\u0000df\u0005\b\u0000"+
		"\u0000ed\u0001\u0000\u0000\u0000ef\u0001\u0000\u0000\u0000fh\u0001\u0000"+
		"\u0000\u0000g\\\u0001\u0000\u0000\u0000gh\u0001\u0000\u0000\u0000hi\u0001"+
		"\u0000\u0000\u0000iw\u0005\u0002\u0000\u0000jk\u0007\u0001\u0000\u0000"+
		"kw\u0003\b\u0004\flw\u0005\u0013\u0000\u0000mw\u0005\u0014\u0000\u0000"+
		"no\u0005\u0012\u0000\u0000ow\u0003\u0016\u000b\u0000pw\u0003\n\u0005\u0000"+
		"qw\u0003\f\u0006\u0000rw\u0003\u000e\u0007\u0000sw\u0003\u0010\b\u0000"+
		"tw\u0003\u0012\t\u0000uw\u0003\u0014\n\u0000vU\u0001\u0000\u0000\u0000"+
		"vZ\u0001\u0000\u0000\u0000vj\u0001\u0000\u0000\u0000vl\u0001\u0000\u0000"+
		"\u0000vm\u0001\u0000\u0000\u0000vn\u0001\u0000\u0000\u0000vp\u0001\u0000"+
		"\u0000\u0000vq\u0001\u0000\u0000\u0000vr\u0001\u0000\u0000\u0000vs\u0001"+
		"\u0000\u0000\u0000vt\u0001\u0000\u0000\u0000vu\u0001\u0000\u0000\u0000"+
		"w\u0080\u0001\u0000\u0000\u0000xy\n\u000b\u0000\u0000yz\u0007\u0002\u0000"+
		"\u0000z\u007f\u0003\b\u0004\f{|\n\n\u0000\u0000|}\u0007\u0001\u0000\u0000"+
		"}\u007f\u0003\b\u0004\u000b~x\u0001\u0000\u0000\u0000~{\u0001\u0000\u0000"+
		"\u0000\u007f\u0082\u0001\u0000\u0000\u0000\u0080~\u0001\u0000\u0000\u0000"+
		"\u0080\u0081\u0001\u0000\u0000\u0000\u0081\t\u0001\u0000\u0000\u0000\u0082"+
		"\u0080\u0001\u0000\u0000\u0000\u0083\u0084\u0005\u0001\u0000\u0000\u0084"+
		"\u0085\u0005\u0002\u0000\u0000\u0085\u000b\u0001\u0000\u0000\u0000\u0086"+
		"\u0087\u0005\u0001\u0000\u0000\u0087\u008c\u0003\b\u0004\u0000\u0088\u0089"+
		"\u0005\b\u0000\u0000\u0089\u008b\u0003\b\u0004\u0000\u008a\u0088\u0001"+
		"\u0000\u0000\u0000\u008b\u008e\u0001\u0000\u0000\u0000\u008c\u008a\u0001"+
		"\u0000\u0000\u0000\u008c\u008d\u0001\u0000\u0000\u0000\u008d\u0090\u0001"+
		"\u0000\u0000\u0000\u008e\u008c\u0001\u0000\u0000\u0000\u008f\u0091\u0005"+
		"\b\u0000\u0000\u0090\u008f\u0001\u0000\u0000\u0000\u0090\u0091\u0001\u0000"+
		"\u0000\u0000\u0091\u0092\u0001\u0000\u0000\u0000\u0092\u0093\u0005\u0002"+
		"\u0000\u0000\u0093\r\u0001\u0000\u0000\u0000\u0094\u0095\u0005\u0001\u0000"+
		"\u0000\u0095\u0096\u0005\u0013\u0000\u0000\u0096\u0097\u0005\u0007\u0000"+
		"\u0000\u0097\u009e\u0003\b\u0004\u0000\u0098\u0099\u0005\b\u0000\u0000"+
		"\u0099\u009a\u0005\u0013\u0000\u0000\u009a\u009b\u0005\u0007\u0000\u0000"+
		"\u009b\u009d\u0003\b\u0004\u0000\u009c\u0098\u0001\u0000\u0000\u0000\u009d"+
		"\u00a0\u0001\u0000\u0000\u0000\u009e\u009c\u0001\u0000\u0000\u0000\u009e"+
		"\u009f\u0001\u0000\u0000\u0000\u009f\u00a2\u0001\u0000\u0000\u0000\u00a0"+
		"\u009e\u0001\u0000\u0000\u0000\u00a1\u00a3\u0005\b\u0000\u0000\u00a2\u00a1"+
		"\u0001\u0000\u0000\u0000\u00a2\u00a3\u0001\u0000\u0000\u0000\u00a3\u00a4"+
		"\u0001\u0000\u0000\u0000\u00a4\u00a5\u0005\u0002\u0000\u0000\u00a5\u000f"+
		"\u0001\u0000\u0000\u0000\u00a6\u00a7\u0005\u0003\u0000\u0000\u00a7\u00ac"+
		"\u0003\b\u0004\u0000\u00a8\u00a9\u0005\b\u0000\u0000\u00a9\u00ab\u0003"+
		"\b\u0004\u0000\u00aa\u00a8\u0001\u0000\u0000\u0000\u00ab\u00ae\u0001\u0000"+
		"\u0000\u0000\u00ac\u00aa\u0001\u0000\u0000\u0000\u00ac\u00ad\u0001\u0000"+
		"\u0000\u0000\u00ad\u00b0\u0001\u0000\u0000\u0000\u00ae\u00ac\u0001\u0000"+
		"\u0000\u0000\u00af\u00b1\u0005\b\u0000\u0000\u00b0\u00af\u0001\u0000\u0000"+
		"\u0000\u00b0\u00b1\u0001\u0000\u0000\u0000\u00b1\u00b2\u0001\u0000\u0000"+
		"\u0000\u00b2\u00b3\u0005\u0004\u0000\u0000\u00b3\u0011\u0001\u0000\u0000"+
		"\u0000\u00b4\u00b5\u0005\u0003\u0000\u0000\u00b5\u00b6\u0003\b\u0004\u0000"+
		"\u00b6\u00b7\u0005\u0007\u0000\u0000\u00b7\u00bf\u0003\b\u0004\u0000\u00b8"+
		"\u00b9\u0005\b\u0000\u0000\u00b9\u00ba\u0003\b\u0004\u0000\u00ba\u00bb"+
		"\u0005\u0007\u0000\u0000\u00bb\u00bc\u0003\b\u0004\u0000\u00bc\u00be\u0001"+
		"\u0000\u0000\u0000\u00bd\u00b8\u0001\u0000\u0000\u0000\u00be\u00c1\u0001"+
		"\u0000\u0000\u0000\u00bf\u00bd\u0001\u0000\u0000\u0000\u00bf\u00c0\u0001"+
		"\u0000\u0000\u0000\u00c0\u00c3\u0001\u0000\u0000\u0000\u00c1\u00bf\u0001"+
		"\u0000\u0000\u0000\u00c2\u00c4\u0005\b\u0000\u0000\u00c3\u00c2\u0001\u0000"+
		"\u0000\u0000\u00c3\u00c4\u0001\u0000\u0000\u0000\u00c4\u00c5\u0001\u0000"+
		"\u0000\u0000\u00c5\u00c6\u0005\u0004\u0000\u0000\u00c6\u0013\u0001\u0000"+
		"\u0000\u0000\u00c7\u00c8\u0005\u0005\u0000\u0000\u00c8\u00c9\u0003\"\u0011"+
		"\u0000\u00c9\u00ca\u0005\u0015\u0000\u0000\u00ca\u00cb\u0003\u0002\u0001"+
		"\u0000\u00cb\u00cc\u0005\u0006\u0000\u0000\u00cc\u00e4\u0001\u0000\u0000"+
		"\u0000\u00cd\u00ce\u0005\u0005\u0000\u0000\u00ce\u00cf\u0005\u0001\u0000"+
		"\u0000\u00cf\u00d0\u0005\u0013\u0000\u0000\u00d0\u00d1\u0005\u0007\u0000"+
		"\u0000\u00d1\u00d8\u0003\u0016\u000b\u0000\u00d2\u00d3\u0005\b\u0000\u0000"+
		"\u00d3\u00d4\u0005\u0013\u0000\u0000\u00d4\u00d5\u0005\u0007\u0000\u0000"+
		"\u00d5\u00d7\u0003\u0016\u000b\u0000\u00d6\u00d2\u0001\u0000\u0000\u0000"+
		"\u00d7\u00da\u0001\u0000\u0000\u0000\u00d8\u00d6\u0001\u0000\u0000\u0000"+
		"\u00d8\u00d9\u0001\u0000\u0000\u0000\u00d9\u00dc\u0001\u0000\u0000\u0000"+
		"\u00da\u00d8\u0001\u0000\u0000\u0000\u00db\u00dd\u0005\b\u0000\u0000\u00dc"+
		"\u00db\u0001\u0000\u0000\u0000\u00dc\u00dd\u0001\u0000\u0000\u0000\u00dd"+
		"\u00de\u0001\u0000\u0000\u0000\u00de\u00df\u0005\u0002\u0000\u0000\u00df"+
		"\u00e0\u0005\n\u0000\u0000\u00e0\u00e1\u0003\b\u0004\u0000\u00e1\u00e2"+
		"\u0005\u0006\u0000\u0000\u00e2\u00e4\u0001\u0000\u0000\u0000\u00e3\u00c7"+
		"\u0001\u0000\u0000\u0000\u00e3\u00cd\u0001\u0000\u0000\u0000\u00e4\u0015"+
		"\u0001\u0000\u0000\u0000\u00e5\u00ed\u0005\u0013\u0000\u0000\u00e6\u00ed"+
		"\u0003\u0018\f\u0000\u00e7\u00ed\u0003\u001a\r\u0000\u00e8\u00ed\u0003"+
		"\u001c\u000e\u0000\u00e9\u00ed\u0003\u001e\u000f\u0000\u00ea\u00ed\u0003"+
		" \u0010\u0000\u00eb\u00ed\u0003\"\u0011\u0000\u00ec\u00e5\u0001\u0000"+
		"\u0000\u0000\u00ec\u00e6\u0001\u0000\u0000\u0000\u00ec\u00e7\u0001\u0000"+
		"\u0000\u0000\u00ec\u00e8\u0001\u0000\u0000\u0000\u00ec\u00e9\u0001\u0000"+
		"\u0000\u0000\u00ec\u00ea\u0001\u0000\u0000\u0000\u00ec\u00eb\u0001\u0000"+
		"\u0000\u0000\u00ed\u0017\u0001\u0000\u0000\u0000\u00ee\u00ef\u0005\u0001"+
		"\u0000\u0000\u00ef\u00f0\u0005\u0002\u0000\u0000\u00f0\u0019\u0001\u0000"+
		"\u0000\u0000\u00f1\u00f2\u0005\u0001\u0000\u0000\u00f2\u00f7\u0003\u0016"+
		"\u000b\u0000\u00f3\u00f4\u0005\b\u0000\u0000\u00f4\u00f6\u0003\u0016\u000b"+
		"\u0000\u00f5\u00f3\u0001\u0000\u0000\u0000\u00f6\u00f9\u0001\u0000\u0000"+
		"\u0000\u00f7\u00f5\u0001\u0000\u0000\u0000\u00f7\u00f8\u0001\u0000\u0000"+
		"\u0000\u00f8\u00fb\u0001\u0000\u0000\u0000\u00f9\u00f7\u0001\u0000\u0000"+
		"\u0000\u00fa\u00fc\u0005\b\u0000\u0000\u00fb\u00fa\u0001\u0000\u0000\u0000"+
		"\u00fb\u00fc\u0001\u0000\u0000\u0000\u00fc\u00fd\u0001\u0000\u0000\u0000"+
		"\u00fd\u00fe\u0005\u0002\u0000\u0000\u00fe\u001b\u0001\u0000\u0000\u0000"+
		"\u00ff\u0100\u0005\u0001\u0000\u0000\u0100\u0101\u0005\u0013\u0000\u0000"+
		"\u0101\u0102\u0005\u0007\u0000\u0000\u0102\u0109\u0003\u0016\u000b\u0000"+
		"\u0103\u0104\u0005\b\u0000\u0000\u0104\u0105\u0005\u0013\u0000\u0000\u0105"+
		"\u0106\u0005\u0007\u0000\u0000\u0106\u0108\u0003\u0016\u000b\u0000\u0107"+
		"\u0103\u0001\u0000\u0000\u0000\u0108\u010b\u0001\u0000\u0000\u0000\u0109"+
		"\u0107\u0001\u0000\u0000\u0000\u0109\u010a\u0001\u0000\u0000\u0000\u010a"+
		"\u010d\u0001\u0000\u0000\u0000\u010b\u0109\u0001\u0000\u0000\u0000\u010c"+
		"\u010e\u0005\b\u0000\u0000\u010d\u010c\u0001\u0000\u0000\u0000\u010d\u010e"+
		"\u0001\u0000\u0000\u0000\u010e\u010f\u0001\u0000\u0000\u0000\u010f\u0110"+
		"\u0005\u0002\u0000\u0000\u0110\u001d\u0001\u0000\u0000\u0000\u0111\u0112"+
		"\u0005\u0003\u0000\u0000\u0112\u0113\u0003\u0016\u000b\u0000\u0113\u0114"+
		"\u0005\u0004\u0000\u0000\u0114\u001f\u0001\u0000\u0000\u0000\u0115\u0116"+
		"\u0005\u0003\u0000\u0000\u0116\u0117\u0003\u0016\u000b\u0000\u0117\u0118"+
		"\u0005\u0007\u0000\u0000\u0118\u0119\u0003\u0016\u000b\u0000\u0119\u011a"+
		"\u0005\u0004\u0000\u0000\u011a!\u0001\u0000\u0000\u0000\u011b\u011c\u0005"+
		"\u0001\u0000\u0000\u011c\u011d\u0005\u0013\u0000\u0000\u011d\u011e\u0005"+
		"\u0007\u0000\u0000\u011e\u0125\u0003\u0016\u000b\u0000\u011f\u0120\u0005"+
		"\b\u0000\u0000\u0120\u0121\u0005\u0013\u0000\u0000\u0121\u0122\u0005\u0007"+
		"\u0000\u0000\u0122\u0124\u0003\u0016\u000b\u0000\u0123\u011f\u0001\u0000"+
		"\u0000\u0000\u0124\u0127\u0001\u0000\u0000\u0000\u0125\u0123\u0001\u0000"+
		"\u0000\u0000\u0125\u0126\u0001\u0000\u0000\u0000\u0126\u0129\u0001\u0000"+
		"\u0000\u0000\u0127\u0125\u0001\u0000\u0000\u0000\u0128\u012a\u0005\b\u0000"+
		"\u0000\u0129\u0128\u0001\u0000\u0000\u0000\u0129\u012a\u0001\u0000\u0000"+
		"\u0000\u012a\u012b\u0001\u0000\u0000\u0000\u012b\u012c\u0005\u0002\u0000"+
		"\u0000\u012c\u012d\u0005\n\u0000\u0000\u012d\u012e\u0003\u0016\u000b\u0000"+
		"\u012e#\u0001\u0000\u0000\u0000#%(/358;BFHPaegv~\u0080\u008c\u0090\u009e"+
		"\u00a2\u00ac\u00b0\u00bf\u00c3\u00d8\u00dc\u00e3\u00ec\u00f7\u00fb\u0109"+
		"\u010d\u0125\u0129";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}