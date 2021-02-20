(define (main args)
  (let* ((c1 (read)) (c2 (read)) (c3 (read)))
        (print 
         (string-ref (x->string c1) 0)
         (string-ref (x->string c2) 1)
         (string-ref (x->string c3) 2)
        ))
  0)