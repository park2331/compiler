#ifndef TYPECHECK_H
#define TYPECHECK_H

treeptr populatesymtab( treeptr, tableptr );
treeptr handle_funcdef( treeptr , tableptr );

typedef enum { 

  
  declaration_seq_504 = 7012,

  decl_specifier_seq_540 = 8747,

  simple_declaration_526 = 3096,
  
  class_specifier_832 = 7999,
  
  class_head_836 = 8963,
  
  parameter_declaration_list_792 = 7418,
  
  declarator_717 = 2255,
  
  assignment_expression_404 = 2995,
  
  function_definition_804 = 1943,

  init_declarator_712 = 1081,
  
  direct_declarator_725 = 7314,
  
  parameter_declaration_796 = 8281,
  
  compound_statement_457 = 4322,
  
  statement_seq_462 = 3376

} prodrule_t;

#endif /* TYPECHECK_H */
