#pragma once

class Parser
{
public:
	Parser(Lexer l);
	~Parser();
	void program();
private:
	Lexer lex;
	Tag look;
private:
	void move();
	bool match(Tag t);
	void get_error();
private:
	void prog();
	void block();
	void condecl();
	void constexp();
	void vardecl();
	void proc();
	void body();
	void statement();
	
	void lexp();
	void exp();
	void term();
	void factor();
	
	void aop();
	void mop();
	void lop();
	bool is_aop(Tag t);
	bool is_mop(Tag t);
	bool is_lop(Tag t);
	bool is_exp(Tag t);
};
