**PROGRAMMAZIONE I E LABORATORIO DI PROGRAMMAZIONE I**  
**Esercizi per la prova all’impronta di Programmazione I e Lab.**

Di seguito sono mostrate le tracce degli esercizi tra le quali viene estratta la prova individuale all’impronta.

---

### **TRACCIA 1**  
Sviluppare una funzione in C che, dati come parametri di input un array di interi e il suo size, determina e restituisce come parametro di output il secondo più grande elemento dell'array (NB: non bisogna ordinare prima l'array).

### **TRACCIA 2**  
Sviluppare una funzione in C che, dato come parametro di input un array di tipo `struct punto { double x; double y; }` e il suo size, determina e restituisce come parametri di output gli indici dei due punti che hanno la distanza minima tra loro. I campi `x` e `y` contengono l'ascissa e l'ordinata, rispettivamente, di un punto.

### **TRACCIA 3**  
Sviluppare una funzione in C che, dato come parametro di input un array di tipo `struct punto { double x; double y; }` e il suo size, determina e restituisce come parametro di output la massima distanza tra i punti.

### **TRACCIA 4**  
Sviluppare una funzione in C che, dati come parametri di input un array 2D di `double`, il numero delle righe e il numero delle colonne, determina e restituisce come parametro di output il massimo tra le somme degli elementi di ogni colonna.

### **TRACCIA 5**  
Sviluppare una funzione in C che, dati come parametri di input un array 2D di `int`, il numero delle righe e il numero delle colonne, determina e restituisce come parametro di output il massimo tra le somme degli elementi di ogni riga.

### **TRACCIA 6**  
Scrivere una funzione che, dati in input due array ordinati (rispetto al campo matricola) di elementi della seguente struttura:

```c
struct studente {
    char *nome;
    char *cognome;
    int matricola;
};
```

Revisiti in output l’array fusionato dei due array. La fusione deve avvenire in base al campo matricola.

### **TRACCIA 7**  
Scrivere una funzione che, dati in input due array di strutture del seguente tipo:

```c
struct prodotto {
    char *nome;
    int codice;
    double prezzo;
};
```

Restituisce in output `1` se i due array di `struct` sono uguali, `0` se non lo sono. Due `struct` sono uguali se sono uguali tutti i loro campi.

### **TRACCIA 8**  
Sviluppare una funzione in C che, data come parametro di input una stringa che rappresenta un testo in italiano, determina e restituisce come parametro di output il numero di parole di tre lettere contenute nel testo. Nel testo, le parole sono separate da un unico spazio.

### **TRACCIA 9**  
Sviluppare una funzione in C che, dato come parametro di input una stringa che rappresenta un testo in italiano, determina e restituisce come parametro di output il numero di parole che terminano in "are" contenute nel testo.

### **TRACCIA 10**  
Sviluppare una funzione in C che, dato come parametro di input una stringa che rappresenta un testo in italiano, determina e restituisce come parametro di output il numero di parole che iniziano con "a" e terminano con "e" contenute nel testo.

### **TRACCIA 11**  
Sviluppare una funzione in C che, dato come parametro di input una stringa che rappresenta un testo in italiano, determina e restituisce come parametro di output il numero delle parole contenute nel testo che hanno almeno 5 vocali.

### **TRACCIA 12**  
Sviluppare una funzione in C che, dato come parametro di input una stringa che rappresenta un testo in italiano, determina e restituisce come parametri di output la parola di lunghezza massima contenuta nel testo e la sua lunghezza.

### **TRACCIA 13**  
Sviluppare una funzione in C che, dato come parametro di input una stringa che rappresenta un testo in italiano, determina e restituisce come parametri di output la parola di lunghezza minima contenuta nel testo e la sua lunghezza.

### **TRACCIA 14**  
Sviluppare una funzione in C che, dato come parametro di input una stringa che rappresenta un testo in italiano, determina e restituisce come parametri di output la parola di lunghezza minima contenuta nel testo e la posizione di inizio della parola nella stringa.

### **TRACCIA 15**  
Sviluppare una funzione in C che, dati come parametri di input un array di `char` e il suo size, determina e restituisce come parametro di output l'array (di size 21) del numero delle occorrenze delle 21 lettere dell'alfabeto italiano.

### **TRACCIA 16**  
Sviluppare una funzione in C che, dati come parametri di input un array di `char` e il suo size, determina e restituisce come parametro di output l'array `occorrenze` (di size 21) del numero delle occorrenze dell'evento "a precede" ognuna delle 21 lettere dell'alfabeto italiano.

### **TRACCIA 17**  
Sviluppare una funzione in C che, dati come parametri di input un array di `char` e il suo size, determina e restituisce come parametro un dato logico che indica se il testo nell'array è un pangramma (ovvero contiene, almeno una volta, tutte le 21 lettere dell'alfabeto italiano).

### **TRACCIA 18**  
Sviluppare una funzione in C che, dati come parametri di input un array di `char` e il suo size, determina e restituisce come parametro di output il carattere più frequente.

### **TRACCIA 19**  
Sviluppare una funzione in C che, dati come parametri di input un array di `char` e il suo size, determina e restituisce come parametro di output il carattere meno frequente.

### **TRACCIA 20**  
Dato un elenco (array) di persone partecipanti a un concorso, ordinare l'elenco in ordine alfabetico in base al campo cognome. La struttura che identifica il partecipante è:

```c
struct persona {
    char *nome;
    char *cognome;
};

typedef struct persona id;

struct partecipante {
    id *utente;
    unsigned short codice;
};
```

### **TRACCIA 21**  
Scrivere un programma per simulare l'inserimento di un PIN per il telefonino.  
Nella prima fase viene costruito il PIN di riferimento, che deve essere di lunghezza 5 e deve essere costruito in modo casuale.  
Nella seconda fase l'utente inserisce il codice di tentativo e ha al massimo 3 tentativi per indovinarlo.

### **TRACCIA 22**  
Due giocatori si sfidano lanciando un “dado truccato”. Il dado ha dei valori interi nell’intervallo [5, 15]. A ogni turno vince il giocatore che ottiene un punteggio maggiore. In caso di parità, il punto viene assegnato a entrambi. Simulare 10 sfide e visualizzare il giocatore che vince più volte.

### **TRACCIA 23**  
Scrivere una funzione in C che, come input, riceve i dati che identificano uno studente (nome, cognome, matricola) e restituisce in output una struttura dati opportuna, che contiene i dati di identificazione e il libretto universitario con al massimo 20 esami. Ogni esame è caratterizzato da denominazione, cfu e voto.


