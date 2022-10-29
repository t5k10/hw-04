#pragma once
#include <string>
#include "astnode.hpp"

class Div : public ASTNode{
  public:
    Div(ASTNode *lhs, ASTNode *rhs); 
  
  private:
    ASTNode *lhs_;
    ASTNode *rhs_;
};
