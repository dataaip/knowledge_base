#include "c/basics/basics.h"

/**
* @brief             c 语言基础知识学习练习 入口函数
* @return  int       Return Description
*
* @note              统一管理 c 语言基础知识学习练习代码
*/
int basics_fn(void) {
/***********************************************************************/

#ifdef DECLARATIONS_FN
  declarations_fn();
#endif // DECLARATIONS_FN

#ifdef INITIALIZATION_FN
  initialization_fn();
#endif // INITIALIZATION_FN

#ifdef KEYWORDS_FN
  keywords_fn();
#endif // KEYWORDS_FN

#ifdef STATICASSERTION_FN
  staticassertion_fn();
#endif // STATICASSERTION_FN

/***********************************************************************/

#ifdef ATOMICS_FN
  atomics_fn();
#endif // ATOMICS_FN

#ifdef CONST_FN
  const_fn();
#endif // CONST_FN

#ifdef RESTRICT_FN
  restrict_fn();
#endif // RESTRICT_FN

#ifdef VOLATILE_FN
  volatile_fn();
#endif // VOLATILE_FN

/***********************************************************************/

#ifdef INTEGER_FN
  integer_fn();
#endif // INTEGER_FN

#ifdef BOOLEAN_FN
  boolean_fn();
#endif // BOOLEAN_FN

#ifdef CHARACTER_FN
  character_fn();
#endif // CHARACTER_FN

#ifdef STRING_FN
  string_fn();
#endif // STRING_FN

#ifdef FLOATING_FN
  floating_fn();
#endif // FLOATING_FN

#ifdef ENUMERATED_FN
  enumerated_fn();
#endif // ENUMERATED_FN

#ifdef STRUCTURE_FN
  structure_fn();
#endif // STRUCTURE_FN

#ifdef UNIONS_FN
  unoins_fn();
#endif // UNIONS_FN

#ifdef ARRAYS_FN
  arrays_fn();
#endif // ARRAYS_FN

#ifdef POINTERS_FN
  pointers_fn();
#endif // POINTERS_FN

#ifdef FUNCTIONS_FN
  functions_fn();
#endif // FUNCTIONS_FN

#ifdef VOIDTYPES_FN
  voidtypes_fn();
#endif // VOIDTYPES_FN

#ifdef BITFIELDS_FN
  bitfields_fn();
#endif // BITFIELDS_FN

/***********************************************************************/

#ifdef ALIGNAS_FN
  alignas_fn();
#endif // ALIGNAS_FN

#ifdef ATTRIBUTE_FN
  attribute_fn();
#endif // ATTRIBUTE_FN

#ifdef CONSTEXPR_FN
  constexpr_fn();
#endif // CONSTEXPR_FN

#ifdef INLINE_FN
  inline_fn();
#endif // INLINE_FN

#ifdef NORETURN_FN
  noreturn_fn();
#endif // NORETURN_FN

#ifdef AUTO_FN
  auto_fn();
#endif // AUTO_FN

#ifdef REGISTER_FN
  register_fn();
#endif // REGISTER_FN

#ifdef EXTERN_FN
  extern_fn();
#endif // EXTERN_FN

#ifdef STATIC_FN
  static_fn();
#endif // STATIC_FN

#ifdef THREADLOCAL_FN
  threadlocal_fn();
#endif // THREADLOCAL_FN

#ifdef TYPEDEF_FN
  typedef_fn();
#endif // TYPEDEF_FN

#ifdef TYPEOF_FN
  typeof_fn();
#endif // TYPEOF_FN

/***********************************************************************/

#ifdef EXPRESSIONS_FN
  expressions_fn();
#endif // EXPRESSIONS_FN

#ifdef VALUE_CATEGORY
  valueCategory_fn();
#endif // VALUE_CATEGORY

#ifdef EVALUATION_ORDER
  evaluationOrder_fn();
#endif // EVALUATION_ORDER

#ifdef CONSTANT_EXPRESSIONS
  constantExpressions_fn();
#endif // CONSTANT_EXPRESSIONS

#ifdef IMPLICIT_CONVERSIONS
  implicitConversions_fn();
#endif // IMPLICIT_CONVERSIONS

#ifdef GENERIC_SELECTION
  genericSelection_fn();
#endif // GENERIC_SELECTION

/***********************************************************************/

  return 0;
}