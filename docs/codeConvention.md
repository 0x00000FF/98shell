# Coding convention for 98Shell Project

This document describes about coding convention for 98Shell project. Anyone who want to participate this project should follow these clauses. 

## Naming

Originally, Microsoft developers used Hungarian Notation to develop their products at early time. Bunch of legacy codes including Windows API are written in the notation, however, we won't use it. There are no `lpsz` or `wc` or even `dw` and `aul`. We will code in this way:

 * For Namespace and Class, Global Functions: **PascalCase**
 * For Public members, local variables: **camelCase**
 * For Private members: **camelCase** with `m_` prefix
