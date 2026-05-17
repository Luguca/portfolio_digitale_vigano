<script>
  // Puoi aggiungere variabili per rendere il testo dinamico
  let nome = "Luca Viganò";
  let specializzazione = "Studente di Informatica";
</script>

<nav>
  <div class="logo">Portfolio</div>
  <div class="links">
    <a href="/">Home</a>
    <a href="/terzo_anno">Terzo Anno</a>
    <a href="/quarto_anno">Quarto Anno</a>
    <a href="/quinto_anno">Quinto Anno</a>
  </div>
</nav>

<main>
  <section class="hero">
    <h1>Ciao, sono {nome}</h1>
    <p class="subtitle">{specializzazione}</p>
    <div class="bio">
      <p>Benvenuti nel mio portfolio digitale. Qui ho raccolto i progetti più significativi del mio percorso scolastico, inclusi i lavori in C, Python e lo sviluppo web.</p>
    </div>
    <div class="cta">
      <a href="/quinto_anno" class="button">Guarda i miei ultimi lavori</a>
    </div>
  </section>
</main>

<style>
  /* Stili globali per un look moderno */
  :global(body) {
    margin: 0;
    font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
    background-color: rgb(221, 221, 221);
    color: #333;
  }

  /* Barra di navigazione */
  nav {
    display: flex;
    justify-content: space-between;
    align-items: center;
    padding: 1rem 5%;
    background: #ffffff;
    box-shadow: 0 2px 10px rgba(0,0,0,0.1);
  }

  .logo {
    font-size: 1.5rem;
    font-weight: bold;
    color: #ff3e00; /* Colore tipico di Svelte */
  }

  nav a {
    text-decoration: none;
    color: #555;
    margin-left: 20px;
    font-weight: 500;
    transition: color 0.3s;
  }

  nav a:hover {
    color: #ff3e00;
  }

  /* Contenuto principale */
  main {
    max-width: 800px;
    margin: 80px auto;
    padding: 0 20px;
    text-align: center;
  }

  h1 {
    font-size: 3rem;
    margin-bottom: 0.5rem;
  }

  .subtitle {
    font-size: 1.2rem;
    color: #666;
    margin-bottom: 2rem;
  }

  .bio {
    font-size: 1.1rem;
    line-height: 1.6;
    color: #444;
    margin-bottom: 3rem;
  }

  /* Bottone */
  .button {
    background-color: #ff3e00;
    color: white;
    padding: 12px 24px;
    border-radius: 25px;
    text-decoration: none;
    font-weight: bold;
    transition: transform 0.2s, background-color 0.2s;
  }

  .button:hover {
    background-color: #e63500;
    transform: translateY(-2px);
  }
</style>