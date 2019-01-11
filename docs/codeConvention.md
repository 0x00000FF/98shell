# Coding convention for 98Shell Project

This document describes about coding convention for 98Shell project. Anyone who want to participate this project should follow these clauses. 

## Naming

Originally, Microsoft developers used Hungarian Notation to develop their products at early time. Bunch of legacy codes including Windows API are written in the notation, however, we won't use it. There are no `lpsz` or `wc` or even `dw` or `aul` In short, Never use capital letter of the type name as a prefix. We will name in this way:

 * For Namespace and Class, Global functions: **PascalCase**
 * For Public members, local variables, parameters : **camelCase**
 * For Private members: **camelCase** with `m_` prefix
 * For Global variables : **camelCase** with `g_` prefix
 * For Macros, Constants: **SNAKE** (not snake, all characters must be UPPER CASE)
 
 
## Braces

Braces should be placed in [Allman style](https://en.wikipedia.org/wiki/Indentation_style#Allman_style). However, there's a exception for lambda expressions. For example, If a lambda expression is passed as argument of specific function, then K&R style should be applied.

## Spaces

Tab indent is not recommended, but use space indent. Every indents should have 4 spaces.

## Comments

No comments are allowed for describing specific logic. Real programmer talks with codes, not comment. Other purposes such as Doxygen comments of License header is allowed.
