<script>
  let immagine_esempio = "/parte_del_funzionamento.png";
  let immagine_codice_ristretto = "/Codice_ristretto.png";
</script>

<nav class="navbar">
  <div class="nav-container">
    <a href="/" class="brand">Portfolio</a>
    <div class="nav-links">
      <a href="/">Home</a>
      <a href="/terzo_anno" class="active">Terzo Anno</a>
      <a href="/quarto_anno">Quarto Anno</a>
      <a href="/quinto_anno">Quinto Anno</a>
    </div>
  </div>
</nav>

<main class="page-container">
  <header class="page-header">
    <h1>Terzo Anno</h1>
    <p class="page-subtitle">Sviluppo in linguaggio C e gestione degli algoritmi</p>
  </header>

  <section class="content-card">
    <div class="text-block">
      <h2 class="card-title">Il Sorgente: Logica del Codice Fiscale</h2>
      <p class="card-text">
        In questa sezione del codice ho implementato l'algoritmo per l'estrazione delle consonanti. 
        È la parte fondamentale per la generazione dei primi 6 caratteri (Cognome e Nome).
      </p>
    </div>
    
    <div class="editor-window">
      <div class="editor-header">
        <div class="header-dots">
          <span class="h-dot h-red"></span>
          <span class="h-dot h-yellow"></span>
          <span class="h-dot h-green"></span>
        </div>
        <div class="header-title">estrazione_consonanti.c</div>
      </div>
      <div class="image-wrapper code-bg">
        <img src={immagine_codice_ristretto} alt="Codice C" />
      </div>
      <div class="image-label">Analisi dello snippet di logica</div>
    </div>

    <div class="spacer-content"></div>

    <div class="text-block">
      <h2 class="card-title">Test di Funzionamento</h2>
      <p class="card-text">
        Qui puoi vedere l'output finale del programma. Il software richiede l'input dei dati anagrafici 
        e restituisce la stringa completa, calcolando correttamente anche il carattere di controllo.
      </p>
    </div>
    
    <div class="editor-window">
      <div class="editor-header">
        <div class="header-dots">
          <span class="h-dot h-red"></span>
          <span class="h-dot h-yellow"></span>
          <span class="h-dot h-green"></span>
        </div>
        <div class="header-title">terminal_output.exe</div>
      </div>
      <div class="image-wrapper output-bg">
        <img src={immagine_esempio} alt="Output programma" />
      </div>
      <div class="image-label">Esempio di esecuzione nel terminale</div>
    </div>

    <div class="actions">
      <a href="/terzo_anno/codice_fiscale" class="btn-primary">Visualizza tutto il codice sorgente</a>
    </div>
  </section>
</main>

<style>
  :global(body) {
    margin: 0;
    padding: 0;
    background-color: rgb(221, 221, 221);
    font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
  }

  /* Navbar */
  .navbar {
    background: white;
    padding: 20px 0;
    border-bottom: 1px solid #eaeaea;
    position: sticky;
    top: 0;
    z-index: 1000;
  }

  .nav-container {
    max-width: 1200px;
    margin: 0 auto;
    display: flex;
    justify-content: space-between;
    align-items: center;
    padding: 0 40px;
  }

  .brand {
    font-size: 1.4rem;
    font-weight: 800;
    color: #ff4500;
    text-decoration: none;
  }

  .nav-links a {
    margin-left: 25px;
    text-decoration: none;
    color: #444;
    font-size: 0.95rem;
    font-weight: 500;
    transition: color 0.2s;
  }

  .nav-links a:hover, .nav-links a.active {
    color: #007bff;
  }

  /* Layout */
  .page-container {
    max-width: 1000px;
    margin: 0 auto;
    padding: 60px 20px;
  }

  .page-header {
    text-align: center;
    margin-bottom: 50px;
  }

  .page-header h1 {
    font-size: 3rem;
    color: #333;
    margin: 0;
  }

  .page-subtitle {
    color: #777;
    font-size: 1.1rem;
    margin-top: 10px;
  }

  /* Card */
  .content-card {
    background: rgb(241, 241, 241);
    border-radius: 12px;
    padding: 50px;
    box-shadow: 0 10px 30px rgba(0,0,0,0.04);
  }

  .card-title {
    color: #ff4500;
    font-size: 1.8rem;
    margin-top: 0;
    margin-bottom: 15px;
  }

  .card-text {
    color: #555;
    line-height: 1.7;
    margin-bottom: 30px;
  }

  /* Finestra Editor/Video */
  .editor-window {
    background: #2d2d2d;
    border-radius: 8px;
    overflow: hidden;
    box-shadow: 0 20px 40px rgba(0,0,0,0.2);
    margin-top: 20px;
  }

  .editor-header {
    background: #333;
    padding: 12px 20px;
    display: flex;
    align-items: center;
  }

  .header-dots { display: flex; gap: 8px; margin-right: 20px; }
  .h-dot { width: 12px; height: 12px; border-radius: 50%; }
  .h-red { background: #ff5f56; }
  .h-yellow { background: #ffbd2e; }
  .h-green { background: #27c93f; }

  .header-title {
    color: #9cdcfe;
    font-family: monospace;
    font-size: 14px;
  }

  /* Immagini e Video */
  .image-wrapper, .video-wrapper {
    line-height: 0;
    overflow: hidden;
  }

  .image-wrapper img, video {
    width: 100%;
    height: auto;
    display: block;
  }

  .code-bg { background: #282c34; }
  .output-bg { background: #000; }

  .image-label {
    background: #f8f9fa;
    padding: 15px;
    text-align: center;
    font-size: 0.9rem;
    color: #666;
    border-top: 1px solid #eee;
  }

  .spacer-content { margin: 60px 0; border-top: 1px solid #f0f0f0; }

  /* Pulsanti */
  .actions { text-align: center; margin-top: 50px; }
  .btn-primary {
    background: #ff4500;
    color: white;
    padding: 15px 35px;
    border-radius: 50px;
    text-decoration: none;
    font-weight: bold;
    transition: transform 0.2s, box-shadow 0.2s;
    display: inline-block;
  }

  .btn-primary:hover {
    transform: translateY(-2px);
    box-shadow: 0 5px 15px rgba(255, 69, 0, 0.3);
  }

  @media (max-width: 768px) {
    .page-container { padding: 30px 15px; }
    .content-card { padding: 30px 20px; }
    .page-header h1 { font-size: 2.2rem; }
  }
</style>