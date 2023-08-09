// La funzione fflush(stdin)
/*  Serve a ripulire il Buffer(L'Input) da caratteri indesiderati
    utile quando dobbiamo scannerizzare molti input dall'utente
*/
// Esempio:
// Per esempio nel caso un utente inseriesca "69ab" in un input che richiedeva un intero, il primo scanf prenderà il 69 ma lascierà sul buffer ab che saranno erroneamente presi dal prossimo scanf(), se mettiamo fflush(stdin) dei due input nel mezzo allora saremo sicuri che il secondo scanf() funzioni correttamente.