// Seleciona o formulário
const form = document.getElementById('loginForm');

// Seleciona o campo de mensagem de erro
const errorDiv = document.getElementById('errorMessage');

// Adiciona o evento ao enviar o formulário
form.addEventListener('submit', function(event) {
  event.preventDefault(); // Impede recarregamento da página

  // Pega os valores digitados
  const usuario = document.getElementById('usuario').value.trim();
  const senha = document.getElementById('password').value.trim();

  // Define os valores corretos
  const usuarioPermitido = 'joao.25104708360048@faeterj-rio.edu.br';
  const senhaPermitida = '25104708360048';

  // Validação
  if (usuario === usuarioPermitido && senha === senhaPermitida) {
    // Redireciona para a página inicial
    window.location.href = 'home.html';
  } else {
    // Mostra erro
    errorDiv.textContent = 'Usuário ou senha incorretos. Tente novamente.';
  }
});