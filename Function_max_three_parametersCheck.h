//===--- Function_max_three_parametersCheck.h - clang-tidy ------*- C++ -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_CLANG_TOOLS_EXTRA_CLANG_TIDY_MISC_FUNCTION_MAX_THREE_PARAMETERSCHECK_H
#define LLVM_CLANG_TOOLS_EXTRA_CLANG_TIDY_MISC_FUNCTION_MAX_THREE_PARAMETERSCHECK_H

#include "../ClangTidy.h"

namespace clang {
namespace tidy {
namespace misc {

/// FIXME: Write a short description.
///
/// For the user-facing documentation see:
/// http://clang.llvm.org/extra/clang-tidy/checks/misc-function_max_three_parameters.html
class Function_max_three_parametersCheck : public ClangTidyCheck {
public:
  Function_max_three_parametersCheck(StringRef Name, ClangTidyContext *Context)
      : ClangTidyCheck(Name, Context) {}
  void registerMatchers(ast_matchers::MatchFinder *Finder) override;
  void check(const ast_matchers::MatchFinder::MatchResult &Result) override;
};

} // namespace misc
} // namespace tidy
} // namespace clang

#endif // LLVM_CLANG_TOOLS_EXTRA_CLANG_TIDY_MISC_FUNCTION_MAX_THREE_PARAMETERSCHECK_H
