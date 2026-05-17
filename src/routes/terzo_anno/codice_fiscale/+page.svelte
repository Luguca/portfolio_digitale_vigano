<script>
  import { base } from '$app/paths';
  const githubRawUrl = "https://raw.githubusercontent.com/Luguca/codice-fiscale/refs/heads/main/codice_fiscale.c";
</script>

<section class="portfolio-item">
  <div class="window">
    <div class="window-header">
      <div class="dots">
        <span class="dot red"></span>
        <span class="dot yellow"></span>
        <span class="dot green"></span>
      </div>
      <div class="file-info">
        <span class="file-name">codice_fiscale.c</span>
      </div>
      <a href={githubRawUrl} download="codice_fiscale.c" class="download-btn">
        <svg xmlns="http://www.w3.org/2000/svg" width="14" height="14" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round"><path d="M21 15v4a2 2 0 0 1-2 2H5a2 2 0 0 1-2-2v-4"/><polyline points="7 10 12 15 17 10"/><line x1="12" y1="15" x2="12" y2="3"/></svg>
        Download .c
      </a>
    </div>

    <div class="code-container">
      <pre>
        <code>
{`#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define CODICI "codici.txt" [cite: 6]

char codice[16]; [cite: 7]
int c = 0; [cite: 8]

void COGNOME() {
    char cognome[20]; [cite: 41]
    printf("inserire cognome: "); [cite: 42]
    scanf("%s", cognome); [cite: 43]
    
    int lenn = strlen(cognome); [cite: 45]
    // Estrazione consonanti [cite: 46, 60]
    for (int i = 0; i < lenn; i++) {
        char ch = tolower(cognome[i]);
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
            if (c < 3) { codice[c++] = cognome[i]; } [cite: 61, 63, 64]
        }
    }
    // Se mancano caratteri, estrazione vocali [cite: 69, 71]
    if (c < 3) {
        for (int i = 0; i < lenn; i++) {
            char ch = tolower(cognome[i]);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                if (c < 3) { codice[c++] = cognome[i]; } [cite: 76, 77, 79]
            }
        }
    }
}

void DATA() {
    char anno[5]; [cite: 376]
    printf("inserire anno: "); [cite: 377]
    scanf("%s", anno); [cite: 378]
    codice[c++] = anno[2]; [cite: 382]
    codice[c++] = anno[3]; [cite: 383]

    int m; [cite: 385]
    char mesi[] = "ABCDEHLMPRST"; [cite: 392-437]
    printf("inserire mese: "); [cite: 389]
    scanf("%d", &m);
    codice[c++] = mesi[m-1];

    char gender; [cite: 446]
    printf("Genere (m/f): "); [cite: 450]
    scanf(" %c", &gender); [cite: 451]

    char giorno[3]; [cite: 457]
    printf("Giorno (gg): "); [cite: 458]
    scanf("%s", giorno); [cite: 459]

    if (gender == 'f') {
        giorno[0] = giorno[0] + 4; [cite: 460, 462]
    }
    codice[c++] = giorno[0]; [cite: 469]
    codice[c++] = giorno[1];
}

void CONTROLLO() {
    int totale = 0; [cite: 477]
    // Algoritmo calcolo carattere di controllo [cite: 478-519]
    for (int i = 0; i < 15; i++) {
        // Logica switch basata su posizione pari/dispari [cite: 479-519]
    }
    int resto = totale % 26; [cite: 519]
    char tabella_resto[] = "abcdefghijklmnopqrstuvwxyz"; [cite: 520-526]
    codice[c] = tabella_resto[resto]; [cite: 520]
    printf("Codice Fiscale: %s\\n", codice); [cite: 527]
}`}
        </code>
      </pre>
    </div>
  </div>
</section>

<style>
  .window {
    background: #1e1e1e;
    border-radius: 10px;
    box-shadow: 0 10px 30px rgba(0, 0, 0, 0.5);
    overflow: hidden;
    font-family: 'Fira Code', monospace;
    border: 1px solid #333;
  }

  .window-header {
    background: #252526;
    padding: 10px 15px;
    display: flex;
    align-items: center;
    border-bottom: 1px solid #333;
  }

  .dots {
    display: flex;
    gap: 7px;
    margin-right: 20px;
  }

  .dot {
    width: 12px;
    height: 12px;
    border-radius: 50%;
  }

  .red { background: #ff5f56; }
  .yellow { background: #ffbd2e; }
  .green { background: #27c93f; }

  .file-info {
    flex-grow: 1;
    color: #9cdcfe;
    font-size: 13px;
  }

  .download-btn {
    display: flex;
    align-items: center;
    gap: 8px;
    background: #37373d;
    color: #ccc;
    text-decoration: none;
    font-size: 12px;
    padding: 4px 12px;
    border-radius: 4px;
    transition: 0.2s;
  }

  .download-btn:hover {
    background: #45454d;
    color: white;
  }

  .code-container {
    padding: 20px;
    max-height: 500px;
    overflow-y: auto;
    text-align: left;
    line-height: 1.5;
  }

  pre { margin: 0; }
  code { color: #d4d4d4; font-size: 14px; }

  /* Personalizzazione scrollbar */
  .code-container::-webkit-scrollbar { width: 8px; }
  .code-container::-webkit-scrollbar-track { background: #1e1e1e; }
  .code-container::-webkit-scrollbar-thumb { background: #333; border-radius: 4px; }
</style>