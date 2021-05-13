using System.Collections;
using UnityEngine;

/// <summary>
/// Gera pernas simples para o plyer.
/// </summary>
public class PernaSimples : FactoryCriadorDePernas
{
    public PernaSimples(GameObject prefabDoJoelho, LineRenderer lRPernaUm, LineRenderer lRPernaDois, GameObject[] joelhosDaPernaUm, GameObject[] joelhosDaPernaDois)
    {
        this.prefabDoJoelho = prefabDoJoelho;
        this.lRPernaUm = lRPernaUm;
        this.lRPernaDois = lRPernaDois;
        JoelhosDaPernaUm = joelhosDaPernaUm;
        JoelhosDaPernaDois = joelhosDaPernaDois;

    }
   
    /// <summary>
    /// Recebe os transforms gerados pelo desenho, transforma em um LineRenderer e instancia gameObjects nos respectivos pontos do LineRenderer.
    /// </summary>
    public override IEnumerator GerarPernas(Vector3[] PontosDeDobraDaPerna)
    {
        DeletarPernasExistentes();

        Vector3[] PosicaoAtualizada = PontosDeDobraDaPerna;
        Vector3 zeroPosition = new Vector3(0, 0, 0);

        JoelhosDaPernaUm = new GameObject[PontosDeDobraDaPerna.Length];
        JoelhosDaPernaDois = new GameObject[PontosDeDobraDaPerna.Length];


        for (int i = 0; i < PontosDeDobraDaPerna.Length; i++)
        {
            // gera uma nova posição no LineRenderer
            lRPernaUm.positionCount = i + 1;
            lRPernaDois.positionCount = i + 1;

            //Passa para o array UpdatePosition Os Valores corretos de onde os pontos da perna devem ficar no player.
            if (i == 0)
            {
                zeroPosition = PontosDeDobraDaPerna[i];
                PontosDeDobraDaPerna[i] = new Vector3(0, 0, 0);
                PosicaoAtualizada[i] = PontosDeDobraDaPerna[i];
            }
            else
            {
                PosicaoAtualizada[i] = new Vector3(PontosDeDobraDaPerna[i].x - zeroPosition.x, PontosDeDobraDaPerna[i].y - zeroPosition.y, 0);
            }

            // Esta parte do código Instancia e ceta as posições corretas dos pontos das pernas
            lRPernaUm.SetPosition(i, PosicaoAtualizada[i]);
            
            JoelhosDaPernaUm[i] = Instantiate(prefabDoJoelho, lRPernaUm.transform);
            JoelhosDaPernaUm[i].transform.localPosition = PosicaoAtualizada[i];

            lRPernaDois.SetPosition(i, PosicaoAtualizada[i]);

            JoelhosDaPernaDois[i] = Instantiate(prefabDoJoelho, lRPernaDois.transform);
            JoelhosDaPernaDois[i].transform.localPosition = PosicaoAtualizada[i];
            yield return new WaitForSecondsRealtime(0.01f);
        }

    }
}