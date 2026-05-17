<script>
  import { base } from '$app/paths';
  let videoSource = "${base}/Progetto_test_patente.mp4";
</script>

<nav class="navbar">
  <div class="nav-container">
    <a href="{base}/" class="brand">Portfolio</a>
    <div class="nav-links">
      <a href="{base}/">Home</a>
      <a href="{base}/terzo_anno">Terzo Anno</a>
      <a href="{base}/quarto_anno" class="active">Quarto Anno</a>
      <a href="{base}/quinto_anno">Quinto Anno</a>
    </div>
  </div>
</nav>

<main class="page-container">
  <header class="page-header">
    <h1>Quarto Anno</h1>
    <p class="page-subtitle">Sviluppo in linguaggio Python e creazione di pagine con Tkinter</p>
  </header>

  <section class="content-card">
    <h2 class="card-title">Il Simulatore: Test della Patente</h2>
    <p class="card-text">
      In questa sezione ho riportato la demo video del simulatore. Il software permette di gestire 
      le diverse fasi dei quiz ministeriali attraverso un'interfaccia a riga di comando o grafica.
    </p>

    <div class="editor-window">
      <div class="editor-header">
        <div class="header-dots">
          <span class="h-dot h-red"></span>
          <span class="h-dot h-yellow"></span>
          <span class="h-dot h-green"></span>
        </div>
        <div class="header-title">demo_progetto.mp4</div>
      </div>
      <div class="video-wrapper">
        <video src={videoSource} controls>
          <track kind="captions" />
          Il tuo browser non supporta il tag video.
        </video>
      </div>
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