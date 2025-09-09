#pragma once
#include "Prerequisites.h"

/**
 * @class Rectangulo
 * @brief Representa un rectángulo definido por su ancho y alto.
 *
 * Esta clase proporciona métodos para calcular el área, el perímetro
 * y acceder a las dimensiones del rectángulo.
 */
class 
Rectangulo {
public:
  /**
   * @brief Constructor que inicializa un rectángulo con las dimensiones dadas.
   * @param ancho Valor del ancho del rectángulo.
   * @param alto Valor del alto del rectángulo.
   */
  Rectangulo(double ancho, double alto) : m_ancho(ancho), m_alto(alto) {};

  /**
   * @brief Destructor por defecto de la clase.
   */
  ~Rectangulo() = default;

  /**
   * @brief Calcula el área del rectángulo.
   * @return Área del rectángulo como un valor double.
   */
  double 
  area() const {
    return m_ancho * m_alto;
  }

  /**
   * @brief Calcula el perímetro del rectángulo.
   * @return Perímetro del rectángulo como un valor double.
   */
  double 
  perimetro() const {
    return 2 * (m_ancho + m_alto);
  }

  /**
   * @brief Obtiene el ancho del rectángulo.
   * @return El ancho como un valor double.
   */
  double 
  getAncho() const {
    return m_ancho;
  }

  /**
   * @brief Obtiene el alto del rectángulo.
   * @return El alto como un valor double.
   */
  double 
  getAlto() const {
    return m_alto;
  }

private:
  double m_ancho; /**< Ancho del rectángulo */
  double m_alto;  /**< Alto del rectángulo */
};
