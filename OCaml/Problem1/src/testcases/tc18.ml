assert ((test (Times [Const 2; Sum [Var "x"; Var "y"]; Power ("x", 3)], "x") [("x",2); ("y", 1)]) = 88)