//===--- Function_max_three_parametersCheck.cpp - clang-tidy --------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#include "Function_max_three_parametersCheck.h"
#include "clang/AST/ASTContext.h"
#include "clang/ASTMatchers/ASTMatchFinder.h"

using namespace clang::ast_matchers;

namespace clang {
namespace tidy {
namespace misc {

void Function_max_three_parametersCheck::registerMatchers(MatchFinder *Finder) {
  // FIXME: Add matchers.
  Finder->addMatcher(functionDecl().bind("x"), this);
}

void Function_max_three_parametersCheck::check(const MatchFinder::MatchResult &Result) {
  // FIXME: Add callback implementation.
  const auto *MatchedDecl = Result.Nodes.getNodeAs<FunctionDecl>("x");
  if (MatchedDecl->getNumParams() < 4)
    return;
  diag(MatchedDecl->getLocation(), "Warning: Functions must not have more than three parameters: function %0 has more")
      << MatchedDecl
      << FixItHint::CreateInsertion(MatchedDecl->getLocation(), "Here");
}

} // namespace misc
} // namespace tidy
} // namespace clang
