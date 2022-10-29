#pragma once
#include <string>
#include "astnode.hpp"

class Sub : public ASTNode{
  public:
    Sub(ASTNode *lhs, ASTNode *rhs); 
  
  private:
    ASTNode *lhs_;
    ASTNode *rhs_;
};
