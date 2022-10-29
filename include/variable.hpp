#pragma once
#include <string>
#include "astnode.hpp"

class Variable : public ASTNode{
  public:
    Variable(std::string val);  
    
  private:
    std::string val_;
};
