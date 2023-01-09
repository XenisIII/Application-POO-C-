SELECT Article.ID, COUNT(CONTENIR.ID_Commande*CONTENIR.Quantite) AS Quantité_vendue 
FROM CONTENIR INNER JOIN Article ON CONTENIR.ID_Article = Article.ID
GROUP BY(Article.ID) 
ORDER BY Quantité_vendue DESC;