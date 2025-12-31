// Generated from src/Grammar/Simplex.g4 by ANTLR 4.13.2
package sx::grammar;
import org.antlr.v4.runtime.tree.ParseTreeVisitor;

/**
 * This interface defines a complete generic visitor for a parse tree produced
 * by {@link SimplexParser}.
 *
 * @param <T> The return type of the visit operation. Use {@link Void} for
 * operations with no return type.
 */
public interface SimplexVisitor<T> extends ParseTreeVisitor<T> {
	/**
	 * Visit a parse tree produced by {@link SimplexParser#module}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitModule(SimplexParser.ModuleContext ctx);
	/**
	 * Visit a parse tree produced by {@link SimplexParser#statements}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStatements(SimplexParser.StatementsContext ctx);
	/**
	 * Visit a parse tree produced by {@link SimplexParser#statement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStatement(SimplexParser.StatementContext ctx);
	/**
	 * Visit a parse tree produced by {@link SimplexParser#decl}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitDecl(SimplexParser.DeclContext ctx);
	/**
	 * Visit a parse tree produced by {@link SimplexParser#expr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitExpr(SimplexParser.ExprContext ctx);
	/**
	 * Visit a parse tree produced by {@link SimplexParser#expr_void}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitExpr_void(SimplexParser.Expr_voidContext ctx);
	/**
	 * Visit a parse tree produced by {@link SimplexParser#expr_tuple}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitExpr_tuple(SimplexParser.Expr_tupleContext ctx);
	/**
	 * Visit a parse tree produced by {@link SimplexParser#expr_struct}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitExpr_struct(SimplexParser.Expr_structContext ctx);
	/**
	 * Visit a parse tree produced by {@link SimplexParser#expr_array}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitExpr_array(SimplexParser.Expr_arrayContext ctx);
	/**
	 * Visit a parse tree produced by {@link SimplexParser#expr_map}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitExpr_map(SimplexParser.Expr_mapContext ctx);
	/**
	 * Visit a parse tree produced by {@link SimplexParser#expr_func}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitExpr_func(SimplexParser.Expr_funcContext ctx);
	/**
	 * Visit a parse tree produced by {@link SimplexParser#type_expr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitType_expr(SimplexParser.Type_exprContext ctx);
	/**
	 * Visit a parse tree produced by {@link SimplexParser#type_void}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitType_void(SimplexParser.Type_voidContext ctx);
	/**
	 * Visit a parse tree produced by {@link SimplexParser#type_tuple}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitType_tuple(SimplexParser.Type_tupleContext ctx);
	/**
	 * Visit a parse tree produced by {@link SimplexParser#type_struct}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitType_struct(SimplexParser.Type_structContext ctx);
	/**
	 * Visit a parse tree produced by {@link SimplexParser#type_array}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitType_array(SimplexParser.Type_arrayContext ctx);
	/**
	 * Visit a parse tree produced by {@link SimplexParser#type_map}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitType_map(SimplexParser.Type_mapContext ctx);
	/**
	 * Visit a parse tree produced by {@link SimplexParser#type_func}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitType_func(SimplexParser.Type_funcContext ctx);
}