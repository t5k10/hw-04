#pragma once
#include <string>
#include "astnode.hpp"

class Add : public ASTNode{
  public:
    Add(ASTNode *lhs, ASTNode *rhs); 
  
  private:
    ASTNode *lhs_;
    ASTNode *rhs_;
};
